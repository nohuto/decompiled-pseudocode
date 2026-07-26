/*
 * XREFs of ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C01108A0
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0148F94 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00130B4 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokePause(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  char IsFilterVerified; // al
  void *FilterModuleContext; // rcx
  int v7; // eax
  unsigned int v8; // edi
  char v10[4]; // [rsp+30h] [rbp-18h]

  FilterDriver = a1->FilterDriver;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x66u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
  IsFilterVerified = ndisIsFilterVerified(a1);
  FilterModuleContext = a1->FilterModuleContext;
  if ( IsFilterVerified )
    v7 = (*((__int64 (__fastcall **)(void *, struct _NDIS_FILTER_PAUSE_PARAMETERS *, void *, int (__fastcall *)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *)))ndisVerifierNdisDispatch
          + 18))(
           FilterModuleContext,
           a2,
           a1->VerifierContext,
           FilterDriver->DefaultFilterCharacteristics.PauseHandler);
  else
    v7 = FilterDriver->DefaultFilterCharacteristics.PauseHandler(FilterModuleContext, a2);
  v8 = v7;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x67u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  return v8;
}
