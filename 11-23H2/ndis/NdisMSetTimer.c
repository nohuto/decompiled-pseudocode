/*
 * XREFs of NdisMSetTimer @ 0x1C00C45D0
 * Callers:
 *     NdisSetTimer @ 0x1C0035AA0 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C00C3680 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C00C36D0 (NdisSetTimerEx.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00C46E0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qql @ 0x1C0023688 (WPP_RECORDER_SF_qql_ea_1C0023688.c)
 */

BOOLEAN __fastcall NdisMSetTimer(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  char v11[4]; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 144);
  v5 = -10000LL * a2;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3760) + 26LL) & 2) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
    v7 = *(_QWORD *)(a1 + 144);
    v8 = *(_QWORD *)(v7 + 560);
    v9 = v8;
    if ( v8 )
    {
      while ( v9 != a1 )
      {
        v9 = *(_QWORD *)(v9 + 152);
        if ( !v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      *(_QWORD *)(a1 + 152) = v8;
      *(_QWORD *)(v7 + 560) = a1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 144) + 1880LL), v6);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = a2;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xCu,
      0xAu,
      (struct _GUID *)&WPP_a2b6dbcfb567359ff6487843a1f14dac_Traceguids,
      *(_QWORD *)(a1 + 144),
      a1,
      *(_DWORD *)v11);
  }
  return KeSetTimer((PKTIMER)a1, (LARGE_INTEGER)v5, (PKDPC)(a1 + 64));
}
