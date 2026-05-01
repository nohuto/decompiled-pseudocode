/*
 * XREFs of ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800B2E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z @ 0x1800B2D18 (-get@-$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B2DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B3308 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::UnboostPriority(PriorityBoostHelper *this)
{
  DWORD CurrentThreadId; // eax
  const char *v3; // r9
  wil::details::in1diag3 *v4; // rcx
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  v4 = retaddr;
  if ( CurrentThreadId != *((_DWORD *)this + 22) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v3);
  v5 = 0;
  v6 = *((_DWORD *)this + 23);
  if ( v6 )
  {
    v7 = v6 - 1;
    *((_DWORD *)this + 23) = v7;
    if ( !v7 )
    {
      v4 = (wil::details::in1diag3 *)(*((_QWORD *)this + 6) + 24LL);
      if ( *(_QWORD *)v4 )
      {
        v16 = 0LL;
        v8 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
               v4,
               &v16);
        v5 = v8;
        v9 = retaddr;
        if ( v8 < 0 )
        {
          v13 = 114LL;
        }
        else
        {
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
          v5 = v8;
          v9 = retaddr;
          if ( v8 >= 0 )
          {
LABEL_7:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
            goto LABEL_8;
          }
          v13 = 117LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v9,
          (void *)v13,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v8,
          v14);
        goto LABEL_7;
      }
    }
  }
LABEL_8:
  v10 = (_DWORD *)wil::details::static_lazy<ExperienceHostLogging>::get(
                    (__int64)v4,
                    (void (__cdecl *)())_lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    v18 = 0x1000000LL;
    LODWORD(v16) = *((_DWORD *)this + 23);
    v17 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)v10,
      (int)&unk_180854B97,
      0,
      v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v18);
  }
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v5,
    v14);
  return (unsigned int)v5;
}
