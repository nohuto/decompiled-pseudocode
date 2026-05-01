/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18002F6EC
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x180032718 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x18002F780 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(
        union _RM_SID *a1,
        struct _WNF_STATE_NAME *a2,
        struct _WNF_STATE_NAME *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  signed int v9; // eax
  struct _WNF_STATE_NAME v10; // [rsp+20h] [rbp-20h] BYREF
  struct _WNF_STATE_NAME v11; // [rsp+28h] [rbp-18h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 8u, &v10);
  if ( v6 < 0 || (v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 0x18u, &v11), v6 < 0) )
  {
    v9 = RtlNtStatusToDosError(v6);
    v7 = v9;
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    if ( v10.Data[0] || v10.Data[1] )
      NtDeleteWnfStateName(&v10);
    if ( v11.Data[0] || v11.Data[1] )
      NtDeleteWnfStateName(&v11);
  }
  else
  {
    v7 = 0;
    *a2 = v10;
    *a3 = v11;
  }
  return v7;
}
