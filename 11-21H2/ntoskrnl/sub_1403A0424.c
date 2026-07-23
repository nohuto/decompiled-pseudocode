/*
 * XREFs of sub_1403A0424 @ 0x1403A0424
 * Callers:
 *     sub_1403A0398 @ 0x1403A0398 (sub_1403A0398.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403A0690 @ 0x1403A0690 (sub_1403A0690.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403A0424(ULONG_PTR BugCheckParameter3)
{
  ULONG MaximumProcessorCount; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // rdi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // ecx
  int v19; // r9d

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = MaximumProcessorCount;
  _disable();
  v6 = *((unsigned __int8 *)CurrentThread + 792);
  v7 = -1;
  if ( *((_BYTE *)CurrentThread + 792) || (v6 = sub_14029F6A8((__int64)&qword_140C10DA0, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, v6);
    *((_BYTE *)CurrentThread + 792) = v6 & ~(1 << v8);
    _enable();
    v4 = (__int64)CurrentThread + 96 * v8 + 1696;
    if ( (unsigned __int64)&qword_140C10DA0 - qword_140C50630 >= 0x8000000000LL )
      v9 = -1;
    else
      v9 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    *(_DWORD *)(v4 + 8) = v9;
    *(_QWORD *)v4 = (unsigned __int64)&qword_140C10DA0 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C10DA0, 0LL) )
    sub_14029F120(&qword_140C10DA0, v4, (__int64)&qword_140C10DA0);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  if ( (_DWORD)v5 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_DWORD *)(BugCheckParameter3 + 32);
      _BitScanReverse(&v13, v12);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + qword_140C10DB0) + 8LL * (v13 - 2)) + 8LL * (v12 ^ (1 << v13)) + 8);
      sub_1403A0690(*(_QWORD *)(v11 + qword_140C10DB0), v12);
      sub_140348B40(v14);
      v11 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  sub_1403A0690(qword_140C10DA8, *(unsigned int *)(BugCheckParameter3 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C10DA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C10DA0);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C10DA0 - qword_140C50630 < 0x8000000000LL )
    v7 = sub_140287F30(*((_QWORD *)v15 + 23));
  _disable();
  v16 = (__int64)v15 + 1696;
  v17 = 0;
  while ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C10DA0 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v16 + 18)
       || (*(_DWORD *)v16 & 1) != 0
       || *(_DWORD *)(v16 + 8) != v7 )
  {
    ++v17;
    v16 += 96LL;
    if ( v17 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(v16 + 18) = 0;
  if ( !v16 )
  {
LABEL_23:
    if ( (*((_DWORD *)v15 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&qword_140C10DA0, v7, 0LL);
    _enable();
    return sub_140348B40(BugCheckParameter3);
  }
  if ( *(__int64 *)v16 < 0 )
  {
    *(_BYTE *)v16 |= 2u;
    _enable();
    sub_14034EE30(v16);
    _disable();
  }
  v19 = *(_DWORD *)(v16 + 88);
  *(_DWORD *)(v16 + 88) = 0;
  *(_BYTE *)(v16 + 17) = 0;
  *(_QWORD *)v16 = 0LL;
  *((_BYTE *)v15 + 792) |= 1 << *(_BYTE *)(v16 + 16);
  _enable();
  if ( v19 )
    sub_14022B568((ULONG_PTR)v15, (__int64)&qword_140C10DA0, v19);
  return sub_140348B40(BugCheckParameter3);
}
