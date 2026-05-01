/*
 * XREFs of ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x180130A30
 * Callers:
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180130980 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_32debc2fc80ca1e0059f85a00ba9919c_::operator() @ 0x1802CFDDA (_lambda_32debc2fc80ca1e0059f85a00ba9919c_--operator().c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180131144 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GlobalInterfaceTable::Unmarshal(unsigned int a1, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  *a3 = 0LL;
  result = GlobalInterfaceTable::s_Retrieve();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD, const struct _GUID *, void **))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->GetInterfaceFromGlobal)(
             GlobalInterfaceTable::s_pGlobalInterfaceTable,
             a1,
             a2,
             a3);
  return result;
}
