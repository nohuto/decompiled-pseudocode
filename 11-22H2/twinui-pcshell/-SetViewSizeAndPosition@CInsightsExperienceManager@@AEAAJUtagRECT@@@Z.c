/*
 * XREFs of ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x18045A5A8
 * Callers:
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18045A678 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800E4524 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::SetViewSizeAndPosition(
        CInsightsExperienceManager *this,
        struct tagRECT *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  LONG bottom; // [rsp+40h] [rbp-18h] BYREF
  LONG right; // [rsp+44h] [rbp-14h] BYREF
  LONG top; // [rsp+48h] [rbp-10h] BYREF
  int v12[3]; // [rsp+4Ch] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    v12[0] = a2->left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180851D11,
      0LL,
      v5,
      (__int64)v12,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
  if ( !*((_QWORD *)this + 11) )
  {
    v6 = -2147418113;
    v7 = 398LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = CSingleViewShellExperience::SetPosition((CInsightsExperienceManager *)((char *)this + 64), a2);
  if ( v6 < 0 )
  {
    v7 = 399LL;
    goto LABEL_5;
  }
  return 0LL;
}
