/*
 * XREFs of sub_140253C70 @ 0x140253C70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG __fastcall sub_140253C70(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _BYTE *v6; // r14
  char v7; // bp
  unsigned __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r8
  int v24; // eax

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CurrentThread + 187);
  v9 = (__int64 *)*((_QWORD *)CurrentThread + 160);
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( (__int64 *)((char *)CurrentThread + 1280) == v9 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentThread + 187);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  else
  {
    do
    {
      if ( *((char *)v9 + 35) < *((char *)v9 + 34) + 2 )
      {
        v10 = *(_QWORD *)(a1 + 96);
        if ( !v10 || v9[5] == v10 )
        {
          v11 = *(_QWORD *)(a1 + 88);
          if ( !v11 || v9[20] == v11 )
          {
            v12 = *((_DWORD *)v9 - 4);
            if ( (v12 & 0x402) == 0 && ((v12 & 0x84) != 0 || (*((_BYTE *)v9 + 39) & 2) != 0) )
            {
              *((_BYTE *)v9 + 36) = 1;
              v7 = 1;
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) )
        {
          v13 = *(_QWORD *)(a1 + 96);
          if ( !v13 || v9[5] == v13 )
          {
            v14 = *(_QWORD *)(a1 + 88);
            if ( (!v14 || v9[20] == v14) && (*(_DWORD *)(v9 - 2) & 2) == 0 )
            {
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
      }
      v9 = (__int64 *)*v9;
    }
    while ( (__int64 *)((char *)CurrentThread + 1280) != v9 );
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentThread + 187);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = *((_QWORD *)v17 + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(v17);
        }
      }
    }
    __writecr8(v8);
    if ( v7 )
      KeAlertThread(CurrentThread, 0LL);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
