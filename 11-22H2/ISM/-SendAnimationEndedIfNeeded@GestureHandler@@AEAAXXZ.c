/*
 * XREFs of ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073FCC
 * Callers:
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180122A00 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x1801658F8 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180165958 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 *     ?OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z @ 0x1801659B8 (-OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1801658BC (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 */

void __fastcall GestureHandler::SendAnimationEndedIfNeeded(GestureHandler *this)
{
  __int64 v2; // rsi
  __int64 i; // rbx

  if ( *((_QWORD *)this + 31) && GestureHandler::IsGestureInvalid(this) )
  {
    v2 = *((_QWORD *)this + 15);
    for ( i = *((_QWORD *)this + 14); i != v2; i += 40LL )
    {
      if ( !*(_BYTE *)(i + 32) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 72LL))(
          *(_QWORD *)(i + 8) + 8LL,
          *((_QWORD *)this + 32));
        *(_BYTE *)(i + 32) = 1;
      }
    }
  }
}
