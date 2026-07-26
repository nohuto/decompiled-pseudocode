/*
 * XREFs of KLoaderQueryDispatchTable @ 0x1C00CB168
 * Callers:
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0134B84 (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x1C005BAA8 (WPP_RECORDER_SF_q_guid_.c)
 */

__int64 __fastcall KLoaderQueryDispatchTable(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xEu,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      a1,
      (__int64)&EXECUTION_CONTEXT_DISPATCH_TABLE_ID);
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)a1 + 88LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 80LL),
         &EXECUTION_CONTEXT_DISPATCH_TABLE_ID,
         a3);
  v6 = v5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      a1,
      v8);
  }
  return v6;
}
