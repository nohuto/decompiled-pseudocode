/*
 * XREFs of ?add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18002D810
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18002D900 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventA.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18002DAE8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompleted.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionScopedBatch::Api::add_Completed(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v7; // eax
  __int64 v8; // rbx
  int v9; // esi
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = a1 - 200;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 200 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v16 = 0LL;
      v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>>(
             a2,
             &v16);
      v8 = v16;
      v9 = v7;
      if ( v7 >= 0 )
      {
        if ( v16 )
          v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
                 v3 + 152,
                 v16,
                 *(_QWORD *)(*(_QWORD *)a2 + 24LL),
                 a3);
        else
          v9 = -2147024809;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v9 >= 0 )
      {
        if ( *(_BYTE *)(v3 + 131) )
        {
          v11 = *(_QWORD *)(v3 + 176);
          if ( !*(_QWORD *)(v3 + 184) && v3 != *(_QWORD *)(v11 + 56) )
          {
            Windows::UI::Composition::BatchController::MigrateBatch(*(_QWORD *)(v3 + 176), v3, 0LL, 3);
            LOBYTE(v12) = 1;
            v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v11 + 24) + 440LL) + 48LL))(
                    *(_QWORD *)(*(_QWORD *)(v11 + 24) + 440LL),
                    v12);
            if ( v13 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0xCB7,
                (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
                (const char *)(unsigned int)v13,
                v14);
          }
        }
        v9 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = -2147024809;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)(unsigned int)v9);
    DoStackCaptureDirect(v9, 0xABu);
LABEL_11:
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return (unsigned int)v9;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return 2147483667LL;
}
