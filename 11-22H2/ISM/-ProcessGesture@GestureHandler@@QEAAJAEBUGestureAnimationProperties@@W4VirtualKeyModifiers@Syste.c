/*
 * XREFs of ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18
 * Callers:
 *     ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x18017DC6C (-SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073E5C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?HasAny@_unnamed_type_m_connection_@GestureHandler@@QEBA_NXZ @ 0x180073EF8 (-HasAny@_unnamed_type_m_connection_@GestureHandler@@QEBA_NXZ.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x180073F14 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073FCC (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800CE84C (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180164B78 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180164F78 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18016532C (-GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180165480 (-GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x1801655D4 (-GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x18016579C (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801C8F8C (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureHandler::ProcessGesture(__int64 a1, __int64 *a2, unsigned int a3, signed __int32 a4)
{
  signed __int32 v4; // ebx
  unsigned int v5; // edi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v12; // rax
  bool v13; // al
  __int64 *v14; // r13
  unsigned int InputType; // eax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r14
  void (__fastcall *v19)(__int64, _QWORD, int *, __int64 *, int *, __int64 *, _QWORD, unsigned int, _QWORD, int, __int64, __int64, int); // rsi
  __int64 v20; // rbx
  __int64 v21; // rdi
  int v22; // eax
  int v23; // r11d
  __int64 *CompletedCallback; // rax
  __int64 v25; // [rsp+58h] [rbp-29h]
  __int128 v26; // [rsp+78h] [rbp-9h] BYREF
  __int64 v27; // [rsp+88h] [rbp+7h] BYREF
  int v28; // [rsp+90h] [rbp+Fh] BYREF
  int v29[16]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v4 = a4;
  v5 = a3;
  v8 = GestureHandler::CASGestureState(a1, a4);
  if ( v8 != 3 )
  {
    if ( v8 == 4 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)0x80004004LL);
      return 2147500036LL;
    }
    v12 = *a2 - *(_QWORD *)(v9 + 152);
    if ( *a2 == *(_QWORD *)(v9 + 152) )
    {
      v12 = a2[1] - *(_QWORD *)(v9 + 160);
      if ( !v12 )
        v12 = a2[2] - *(_QWORD *)(v9 + 168);
    }
    v13 = v12 != 0;
    *(_OWORD *)(v9 + 152) = *(_OWORD *)a2;
    *(_QWORD *)(v9 + 168) = a2[2];
    *(_DWORD *)(v9 + 176) = v5;
    if ( v4 != 2 || v13 )
      GestureHandler::FeedAnimationDataIfNeeded((GestureHandler *)v9, v10 == 3);
    v14 = *(__int64 **)(a1 + 112);
    for ( *(_QWORD *)&v26 = *(_QWORD *)(a1 + 120); v14 != (__int64 *)v26; v14 += 5 )
    {
      GestureHandler::GetRelativePoints(a1, &v27, (__int64)v14, *a2);
      switch ( v4 )
      {
        case 1:
          InputType = PointerManipulationHelper::GetInputType(*(unsigned int *)(a1 + 140));
          InputETW::InputGesture::GestureStarted(
            *(_QWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 136),
            v29,
            (int *)&v27,
            &v28,
            *(_QWORD *)(a1 + 184),
            v5,
            *(_QWORD *)(a1 + 192),
            InputType,
            v17,
            v16);
          v18 = v14[1];
          v19 = *(void (__fastcall **)(__int64, _QWORD, int *, __int64 *, int *, __int64 *, _QWORD, unsigned int, _QWORD, int, __int64, __int64, int))(*(_QWORD *)(v18 + 8) + 24LL);
          v20 = *(_QWORD *)(a1 + 256);
          v21 = *v14;
          v22 = PointerManipulationHelper::GetInputType(*(unsigned int *)(a1 + 140));
          v25 = v21;
          v5 = a3;
          v19(
            v18 + 8,
            *(unsigned int *)(a1 + 136),
            v29,
            &v27,
            &v28,
            a2,
            *(_QWORD *)(a1 + 184),
            a3,
            *(_QWORD *)(a1 + 192),
            v22,
            v25,
            v20,
            v23);
          v4 = a4;
          break;
        case 2:
          InputETW::InputGesture::GestureInProgress(
            *(_QWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 136),
            v29,
            (int *)&v27,
            &v28,
            *(_QWORD *)(a1 + 184),
            v5,
            *(_QWORD *)(a1 + 192));
          if ( *(_DWORD *)(a1 + 16) != 2 )
            (*(void (__fastcall **)(__int64, _QWORD, int *, __int64 *, int *, __int64 *, _QWORD, unsigned int, _QWORD))(*(_QWORD *)(v14[1] + 8) + 32LL))(
              v14[1] + 8,
              *(unsigned int *)(a1 + 136),
              v29,
              &v27,
              &v28,
              a2,
              *(_QWORD *)(a1 + 184),
              v5,
              *(_QWORD *)(a1 + 192));
          break;
        case 3:
          InputETW::InputGesture::GestureEnded(
            *(_QWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 136),
            v29,
            (int *)&v27,
            &v28,
            *(_QWORD *)(a1 + 184),
            v5,
            *(_QWORD *)(a1 + 192));
          (*(void (__fastcall **)(__int64, _QWORD, int *, __int64 *, int *, __int64 *, _QWORD, unsigned int, _QWORD))(*(_QWORD *)(v14[1] + 8) + 40LL))(
            v14[1] + 8,
            *(unsigned int *)(a1 + 136),
            v29,
            &v27,
            &v28,
            a2,
            *(_QWORD *)(a1 + 184),
            v5,
            *(_QWORD *)(a1 + 192));
          break;
      }
    }
    v26 = 0LL;
    if ( v4 == 3 )
    {
      CompletedCallback = GestureHandler::MakeCompletedCallback(a1, &v27);
      std::shared_ptr<SystemCursor2>::operator=(&v26, CompletedCallback);
      std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v27);
      if ( !*(_BYTE *)(a1 + 240)
        || !GestureHandler::_unnamed_type_m_connection_::HasAny((GestureHandler::_unnamed_type_m_connection_ *)(a1 + 228)) )
      {
        GestureHandler::SendAnimationEndedIfNeeded((GestureHandler *)a1);
        if ( !GestureHandler::_unnamed_type_m_connection_::HasAny((GestureHandler::_unnamed_type_m_connection_ *)(a1 + 228)) )
          GestureHandler::CleanupAnimationDataIfNeeded((GestureHandler *)a1);
      }
      *(_DWORD *)(a1 + 136) = 0;
    }
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v26);
  }
  return 0LL;
}
