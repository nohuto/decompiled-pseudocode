/*
 * XREFs of sub_1406389A8 @ 0x1406389A8
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_1406389A8(void *a1, unsigned int a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rdx
  unsigned int v8; // esi
  size_t v9; // rax
  struct _KTHREAD *v10; // r14
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rbx
  int v14; // edx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15B60, 0LL);
  v7 = (char *)qword_140C5B128;
  if ( qword_140C5B128 )
  {
    v9 = *(unsigned int *)qword_140C5B128;
    *a3 = v9;
    if ( a1 )
    {
      if ( a2 < (unsigned int)v9 )
      {
        v8 = -1073741820;
        goto LABEL_8;
      }
      memmove(a1, v7 + 4, v9);
    }
  }
  else
  {
    *a3 = 0;
  }
  v8 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C15B60);
  v10 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C15B60 - qword_140C50630 >= 0x8000000000LL )
    v11 = -1;
  else
    v11 = sub_140287F30(*((_QWORD *)v10 + 23));
  _disable();
  v12 = 0;
  v13 = (__int64)v10 + 1696;
  while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C15B60 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v13 + 18)
       || (*(_DWORD *)v13 & 1) != 0
       || *(_DWORD *)(v13 + 8) != v11 )
  {
    ++v12;
    v13 += 96LL;
    if ( v12 >= 6 )
    {
      v13 = 0LL;
      goto LABEL_20;
    }
  }
  *(_BYTE *)(v13 + 18) = 0;
LABEL_20:
  if ( v13 )
  {
    if ( *(__int64 *)v13 < 0 )
    {
      *(_BYTE *)v13 |= 2u;
      _enable();
      sub_14034EE30(v13);
      _disable();
    }
    v14 = *(_DWORD *)(v13 + 88);
    *(_DWORD *)(v13 + 88) = 0;
    *(_BYTE *)(v13 + 17) = 0;
    *(_QWORD *)v13 = 0LL;
    *((_BYTE *)v10 + 792) |= 1 << *(_BYTE *)(v13 + 16);
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)v10, (__int64)&qword_140C15B60, v14);
  }
  else
  {
    if ( (*((_DWORD *)v10 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_140C15B60, v11, 0LL);
    _enable();
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v8;
}
