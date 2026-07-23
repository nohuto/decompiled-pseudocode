/*
 * XREFs of sub_140510DA4 @ 0x140510DA4
 * Callers:
 *     sub_140511030 @ 0x140511030 (sub_140511030.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140510C60 @ 0x140510C60 (sub_140510C60.c)
 */

__int64 __fastcall sub_140510DA4(__int64 a1, char a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 result; // rax
  int v12; // r9d
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+54h] [rbp+1Ch]

  v13 = 0;
  v14 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4A0E0, 0LL);
  for ( i = qword_140C4A0F0; (__int64 *)i != &qword_140C4A0F0; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 32);
    if ( *(_QWORD *)(v5 + 8) == a1 )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(i + 40) & 1) != 0 )
      {
        v6 = sub_140510C60(v5);
        if ( *(_DWORD *)(i + 44) != v6 )
        {
          *(_DWORD *)(i + 44) = v6;
          v13 |= 1u;
          v14 = v6;
          sub_14042A5E0(&v13, *(_QWORD *)(i + 24));
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4A0E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4A0E0);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4A0E0 - qword_140C50630 >= 0x8000000000LL )
    v8 = -1;
  else
    v8 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v9 = (__int64)CurrentThread + 1696;
  v10 = 0;
  while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4A0E0 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v9 + 18)
       || (*(_DWORD *)v9 & 1) != 0
       || *(_DWORD *)(v9 + 8) != v8 )
  {
    ++v10;
    v9 += 96LL;
    if ( v10 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(v9 + 18) = 0;
  if ( !v9 )
  {
LABEL_21:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4A0E0, v8, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v9 < 0 )
  {
    *(_BYTE *)v9 |= 2u;
    _enable();
    sub_14034EE30(v9);
    _disable();
  }
  v12 = *(_DWORD *)(v9 + 88);
  *(_DWORD *)(v9 + 88) = 0;
  *(_BYTE *)(v9 + 17) = 0;
  *(_QWORD *)v9 = 0LL;
  result = *(unsigned __int8 *)(v9 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << result;
  _enable();
  if ( v12 )
    return sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C4A0E0, v12);
  return result;
}
