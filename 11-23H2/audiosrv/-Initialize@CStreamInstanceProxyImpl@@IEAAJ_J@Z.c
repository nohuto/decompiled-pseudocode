/*
 * XREFs of ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18004AFF0
 * Callers:
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@$$QEA_J@Z @ 0x180045ED4 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@AEA_J@Z @ 0x1800D78F8 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820 (-reset@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::Initialize(CStreamInstanceProxyImpl *this, __int64 a2)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 16);
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  Instance = CoCreateInstance(
               &GUID_00152fa5_443a_4c4b_9ebb_61ff63f10bdb,
               0LL,
               0x17u,
               &GUID_7f26b2e9_c031_4905_a6f7_1880d3d19176,
               ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance);
    return v6;
  }
  else
  {
    *((_QWORD *)this + 4) = a2;
    return 0LL;
  }
}
