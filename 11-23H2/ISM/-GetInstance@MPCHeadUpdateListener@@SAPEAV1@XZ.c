/*
 * XREFs of ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800D21A8
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFFC4 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D07E8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x1800D23D0 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800DB8D0 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x1800D1CC0 (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 */

struct MPCHeadUpdateListener *__fastcall MPCHeadUpdateListener::GetInstance(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  struct MPCHeadUpdateListener *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_a860493e5708769190ef41fba30dc41a___(a1, a2);
  result = MPCHeadUpdateListener::s_instance;
  if ( !MPCHeadUpdateListener::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v2);
  return result;
}
