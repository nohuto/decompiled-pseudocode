/*
 * XREFs of ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016090 (-OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016400 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180016CF0 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180017334 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860 (-OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180045710 (-DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18004AFF0 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     _lambda_35737e3609a2bbc950aa37b2f22ff221_::operator() @ 0x18007335C (_lambda_35737e3609a2bbc950aa37b2f22ff221_--operator().c)
 *     ?GetSubmix@CAudioStream@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1800EC720 (-GetSubmix@CAudioStream@@UEAAJPEAPEAUISubmixProxy@@@Z.c)
 *     ?DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x180106F60 (-DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 *     ?OnConnectedToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x180108860 (-OnConnectedToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?OnConnectedToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180108960 (-OnConnectedToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnDisconnectedFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x180108CE0 (-OnDisconnectedFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180108E00 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     AudioServerGetStreamVpoContext @ 0x180122F50 (AudioServerGetStreamVpoContext.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x180139254 (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
