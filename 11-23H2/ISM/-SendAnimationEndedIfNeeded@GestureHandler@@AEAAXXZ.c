/*
 * XREFs of ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006176C
 * Callers:
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180114990 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x180157618 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180157678 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 *     ?OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z @ 0x1801576D8 (-OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180157738 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1801575DC (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
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
