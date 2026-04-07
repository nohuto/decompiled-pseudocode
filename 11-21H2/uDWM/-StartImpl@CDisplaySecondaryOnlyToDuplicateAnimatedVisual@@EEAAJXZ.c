/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BA940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800B6230 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  LONG v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  int v7; // r11d
  struct CAnimatedTransitionVisual *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  int updated; // ebx
  __int64 v13; // rdx
  LONG v14; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+44h] [rbp-2Ch] BYREF
  int v16; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v19; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v18 = 0LL;
  v19 = 0LL;
  GetDesktopID(1LL, &v18);
  v19.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
  v19.right = v19.left + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v19.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
  v2 = v19.top + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v19.bottom = v2;
  if ( (unsigned int)dword_1801418A0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
    {
      v14 = v2;
      v15 = v7;
      v16 = v6;
      v17 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        byte_18011FA02,
        v4,
        v5,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  v8 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
  if ( !v8 )
  {
    *((_QWORD *)this + 55) = 0LL;
    v9 = CDisplayAnimatedVisual::CaptureAndAddVisual(
           this,
           v18,
           &v19,
           (const struct tagRECT *)((char *)this + 296),
           (struct CAnimatedTransitionVisual **)this + 55);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    v8 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
  }
  updated = CDisplayAnimatedVisual::ScheduleAnimation(
              (CDisplaySecondaryOnlyToDuplicateAnimatedVisual *)((char *)this + 456),
              v8,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((unsigned int *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 114);
  if ( updated < 0 )
  {
    v13 = 73LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52));
  if ( updated < 0 )
  {
    v13 = 80LL;
    goto LABEL_10;
  }
  return 0LL;
}
