/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXXZ @ 0x1400028A0
 * Callers:
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400023BC (-FreeNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400023BC (-FreeNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14000ECA0 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAll(
        __int64 *a1)
{
  ATL::CAtlPlex *v2; // rcx
  __int64 *v3; // rdx

  while ( a1[2] )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v3;
    ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::FreeNode(
      (__int64)a1,
      v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (ATL::CAtlPlex *)a1[3];
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    a1[3] = 0LL;
  }
}
