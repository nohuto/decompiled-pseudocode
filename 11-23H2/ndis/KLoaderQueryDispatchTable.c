/*
 * XREFs of KLoaderQueryDispatchTable @ 0x1C00CFE40
 * Callers:
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0140908 (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x1C0060D18 (WPP_RECORDER_SF_q_guid_.c)
 */

__int64 __fastcall KLoaderQueryDispatchTable(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xEu,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      a1,
      a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)a1 + 88LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 80LL),
         a2,
         a3);
  v7 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      a1,
      v9);
  }
  return v7;
}
