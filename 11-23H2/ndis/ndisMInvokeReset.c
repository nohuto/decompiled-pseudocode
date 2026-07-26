/*
 * XREFs of ndisMInvokeReset @ 0x1C012E030
 * Callers:
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007128C (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeReset(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // edi
  char v8[4]; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 3760);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xBu,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 216))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v5;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xCu,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      a1,
      *(_DWORD *)v8);
  }
  return v6;
}
