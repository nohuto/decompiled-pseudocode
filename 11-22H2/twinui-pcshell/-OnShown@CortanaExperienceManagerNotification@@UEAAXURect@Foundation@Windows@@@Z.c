/*
 * XREFs of ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18042C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800527B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180428458 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Int.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x1804289CC (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaSh.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18042F1A0 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CortanaExperienceManagerNotification::OnShown(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  char result; // al
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(v4 + 538) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 496) + 104LL))(*(_QWORD *)(v4 + 496), 3LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x661,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 538LL) = 1;
  }
  result = CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)(a1 - 8));
  if ( result )
  {
    v7 = Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect___(
           &v11,
           a2);
    v8 = *v7;
    *v7 = 0LL;
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v9);
    }
    result = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
               *(_QWORD *)(a1 + 48) + 48LL,
               *(_QWORD *)(a1 + 48),
               v8);
    if ( v8 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return result;
}
