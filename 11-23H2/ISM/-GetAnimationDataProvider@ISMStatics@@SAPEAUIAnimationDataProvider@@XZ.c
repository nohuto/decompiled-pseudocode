/*
 * XREFs of ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180156C98 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180157BB8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180157D70 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18015DA2C (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801600F8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180163F08 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180165464 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x1801680F0 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801698E0 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x180034E7C (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 */

struct IAnimationDataProvider *ISMStatics::GetAnimationDataProvider(void)
{
  struct IAnimationDataProvider *result; // rax
  __int64 *v1; // rax
  struct IAnimationDataProvider *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_animationDataProvider;
  if ( !ISMStatics::s_animationDataProvider )
  {
    v1 = AnimationDataProvider::Create(&v3);
    v2 = (struct IAnimationDataProvider *)*v1;
    *v1 = 0LL;
    ISMStatics::s_animationDataProvider = v2;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v3);
    return ISMStatics::s_animationDataProvider;
  }
  return result;
}
