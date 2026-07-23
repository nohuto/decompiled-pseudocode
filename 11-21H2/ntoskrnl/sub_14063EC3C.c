/*
 * XREFs of sub_14063EC3C @ 0x14063EC3C
 * Callers:
 *     sub_1403DED30 @ 0x1403DED30 (sub_1403DED30.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063EEB0 @ 0x14063EEB0 (sub_14063EEB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14063EC3C(__int64 a1)
{
  PVOID *v1; // rsi
  unsigned int v3; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  int v9; // eax
  __int64 *i; // rcx
  struct _KTHREAD *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ecx
  int v15; // r9d

  v1 = 0LL;
  if ( a1 )
  {
    v3 = 0;
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    _disable();
    v6 = *((unsigned __int8 *)CurrentThread + 792);
    v7 = -1;
    if ( *((_BYTE *)CurrentThread + 792) || (v6 = sub_14029F6A8((__int64)&qword_140C11530, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v8, v6);
      *((_BYTE *)CurrentThread + 792) = v6 & ~(1 << v8);
      _enable();
      v5 = (__int64)CurrentThread + 96 * v8 + 1696;
      if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
        v9 = -1;
      else
        v9 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      *(_DWORD *)(v5 + 8) = v9;
      *(_QWORD *)v5 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11530, 0LL) )
      sub_14029F120(&qword_140C11530, v5, (__int64)&qword_140C11530);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    for ( i = (__int64 *)qword_140C11540; i != &qword_140C11540; i = (__int64 *)*i )
    {
      v1 = (PVOID *)i;
      if ( i[3] == a1 )
      {
        v3 = sub_14063EEB0();
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C11530);
    v12 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 < 0x8000000000LL )
      v7 = sub_140287F30(*((_QWORD *)v12 + 23));
    _disable();
    v13 = (__int64)v12 + 1696;
    v14 = 0;
    while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v13 + 18)
         || (*(_DWORD *)v13 & 1) != 0
         || *(_DWORD *)(v13 + 8) != v7 )
    {
      ++v14;
      v13 += 96LL;
      if ( v14 >= 6 )
        goto LABEL_29;
    }
    *(_BYTE *)(v13 + 18) = 0;
    if ( !v13 )
    {
LABEL_29:
      if ( (*((_DWORD *)v12 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v12, (ULONG_PTR)&qword_140C11530, v7, 0LL);
      _enable();
      goto LABEL_37;
    }
    if ( *(__int64 *)v13 < 0 )
    {
      *(_BYTE *)v13 |= 2u;
      _enable();
      sub_14034EE30(v13);
      _disable();
    }
    v15 = *(_DWORD *)(v13 + 88);
    *(_DWORD *)(v13 + 88) = 0;
    *(_BYTE *)(v13 + 17) = 0;
    *(_QWORD *)v13 = 0LL;
    *((_BYTE *)v12 + 792) |= 1 << *(_BYTE *)(v13 + 16);
    _enable();
    if ( v15 )
      sub_14022B568((ULONG_PTR)v12, (__int64)&qword_140C11530, v15);
LABEL_37:
    if ( v1 )
    {
      ExFreePoolWithTag(v1[22], 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
