/*
 * XREFs of sub_1403B9C64 @ 0x1403B9C64
 * Callers:
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     PoFxRegisterCoreDevice @ 0x140823860 (PoFxRegisterCoreDevice.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1403B9C64(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  char v6; // bl
  struct _KTHREAD *v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23B98, 0LL);
  v5 = (_QWORD *)qword_140C23B88;
  if ( *(ULONG_PTR **)qword_140C23B88 != &qword_140C23B80 )
    __fastfail(3u);
  *a3 = &qword_140C23B80;
  a3[1] = v5;
  *v5 = a3;
  qword_140C23B88 = (__int64)a3;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23B98, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C23B98);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C23B98 - qword_140C50630 < 0x8000000000LL )
    v8 = sub_140287F30(*((_QWORD *)v7 + 23));
  else
    v8 = -1;
  _disable();
  v9 = (__int64)v7 + 1696;
  v10 = 0;
  while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23B98 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v9 + 18)
       || (*(_DWORD *)v9 & 1) != 0
       || *(_DWORD *)(v9 + 8) != v8 )
  {
    ++v10;
    v9 += 96LL;
    if ( v10 >= 6 )
      goto LABEL_17;
  }
  *(_BYTE *)(v9 + 18) = 0;
  if ( v9 )
  {
    if ( *(__int64 *)v9 < 0 )
    {
      *(_BYTE *)v9 |= 2u;
      _enable();
      sub_14034EE30(v9);
      _disable();
    }
    v11 = *(_DWORD *)(v9 + 88);
    *(_DWORD *)(v9 + 88) = 0;
    *(_BYTE *)(v9 + 17) = 0;
    *(_QWORD *)v9 = 0LL;
    *((_BYTE *)v7 + 792) |= 1 << *(_BYTE *)(v9 + 16);
    _enable();
    if ( v11 )
      sub_14022B568((ULONG_PTR)v7, (__int64)&qword_140C23B98, v11);
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
LABEL_17:
  if ( (*((_DWORD *)v7 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C23B98, v8, 0LL);
  _enable();
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
