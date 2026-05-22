/*
 * XREFs of ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x1801568C0
 * Callers:
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801531B0 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 * Callees:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x1800615FC (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x1800616B4 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800BE150 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180156898 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180156C98 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180156EF8 (-GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@.c)
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x1801574BC (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::CancelOperation(GestureHandler *this)
{
  int v2; // eax
  GestureHandler *v3; // rcx
  int v4; // edx
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // [rsp+38h] [rbp-50h]
  _QWORD v8[2]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v9[8]; // [rsp+60h] [rbp-28h] BYREF
  _BYTE v10[8]; // [rsp+68h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+70h] [rbp-18h] BYREF

  v2 = GestureHandler::CASGestureState((__int64)this, 4);
  if ( v2 != v4 )
  {
    if ( v2 != 3 )
      GestureHandler::FeedAnimationDataIfNeeded(v3, 1);
    v5 = *((_QWORD *)this + 15);
    for ( i = *((_QWORD *)this + 14); i != v5; i += 40LL )
    {
      GestureHandler::GetRelativePoints(this, v9, i, *((_QWORD *)this + 19));
      InputETW::InputGesture::GestureCancelled(
        *((_QWORD *)this + 3),
        *((unsigned int *)this + 34),
        v11,
        v9,
        v10,
        *((_QWORD *)this + 23),
        *((_DWORD *)this + 44),
        *((_QWORD *)this + 24));
      LODWORD(v7) = *((_DWORD *)this + 44);
      (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, _BYTE *, char *, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 48LL))(
        *(_QWORD *)(i + 8) + 8LL,
        *((unsigned int *)this + 34),
        v11,
        v9,
        v10,
        (char *)this + 152,
        *((_QWORD *)this + 23),
        v7,
        *((_QWORD *)this + 24));
    }
    GestureHandler::MakeCompletedCallback((__int64)this, v8);
    GestureHandler::CleanupAnimationDataIfNeeded(this);
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)v8);
  }
}
