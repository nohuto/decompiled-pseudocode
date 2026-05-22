/*
 * XREFs of ?ForcePrimaryInputType@MPCManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@@Z @ 0x180159D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::ForcePrimaryInputType(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 232LL);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  else
    return 2147549443LL;
}
