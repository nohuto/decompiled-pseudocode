/*
 * XREFs of ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073E5C
 * Callers:
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180122A00 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x180164BA0 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x1801658F8 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180165958 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 *     ?OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z @ 0x1801659B8 (-OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x180073F14 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1801658BC (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::CleanupAnimationDataIfNeeded(GestureHandler *this)
{
  char *v2; // rdi
  __int64 *CompletedCallback; // rax
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+38h] [rbp-10h]

  *(_OWORD *)v4 = 0LL;
  v2 = (char *)this + 248;
  if ( *((_QWORD *)this + 31) && GestureHandler::IsGestureInvalid(this) )
  {
    CompletedCallback = (__int64 *)GestureHandler::MakeCompletedCallback(this, v5, 2LL);
    std::shared_ptr<SystemCursor2>::operator=(v4, CompletedCallback);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(v2);
    *((_OWORD *)this + 16) = 0LL;
  }
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
}
