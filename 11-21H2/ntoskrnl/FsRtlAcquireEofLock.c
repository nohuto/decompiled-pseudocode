/*
 * XREFs of FsRtlAcquireEofLock @ 0x14035D230
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_14035D3E0 @ 0x14035D3E0 (sub_14035D3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdi
  signed __int32 v12; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v16; // eax
  __int64 v17; // r8
  bool v18; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  _disable();
  v6 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (v6 = sub_14029F6A8(v5, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, v6);
    *((_BYTE *)CurrentThread + 792) = v6 & ~(1 << v7);
    _enable();
    v4 = (__int64)CurrentThread + 96 * v7 + 1696;
    if ( (unsigned __int64)(v5 - qword_140C50630) < 0x8000000000LL )
      v8 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v8 = -1;
    *(_DWORD *)(v4 + 8) = v8;
    *(_QWORD *)v4 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    sub_14029EF4C(v5, v4);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    sub_14035D3E0(a1, a2, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v11 = *(unsigned __int8 *)(v10 + 48);
  *(_QWORD *)(v10 + 8) = 0LL;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
  if ( v12 )
    sub_140359548((volatile signed __int32 *)v10, v12);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = (v16 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v16;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return sub_1402AFC00(v10);
}
