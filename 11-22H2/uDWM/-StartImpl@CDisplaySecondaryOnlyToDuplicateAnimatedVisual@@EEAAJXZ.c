/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800B99B0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  LONG v6; // r10d
  __int64 v7; // r9
  LONG v8; // edx
  struct CAnimatedTransitionVisual **v9; // rdi
  struct CAnimatedTransitionVisual *v10; // rdx
  int v11; // eax
  unsigned int v12; // esi
  int updated; // ebx
  __int64 v15; // rdx
  LONG v16; // [rsp+40h] [rbp-30h] BYREF
  LONG v17; // [rsp+44h] [rbp-2Ch] BYREF
  int v18; // [rsp+48h] [rbp-28h] BYREF
  int v19; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v21; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v20 = 0LL;
  v21 = 0LL;
  GetDesktopID(1LL, &v20, a3);
  v5 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v21.left = v5;
  v6 = v5 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
  v21.right = v6;
  v7 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v21.top = v7;
  v8 = v7 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
  v21.bottom = v8;
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v16 = v8;
    v17 = v6;
    v18 = v7;
    v19 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_180126502,
      v5,
      v7,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  v9 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  v10 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
  if ( !v10 )
  {
    *v9 = 0LL;
    v11 = CDisplayAnimatedVisual::CaptureAndAddVisual(
            this,
            v20,
            &v21,
            (const struct tagRECT *)((char *)this + 296),
            (struct CAnimatedTransitionVisual **)this + 55);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    v10 = *v9;
  }
  updated = CDisplayAnimatedVisual::ScheduleAnimation(
              (CDisplaySecondaryOnlyToDuplicateAnimatedVisual *)((char *)this + 456),
              v10,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((unsigned int *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 114);
  if ( updated < 0 )
  {
    v15 = 73LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
  if ( updated < 0 )
  {
    v15 = 80LL;
    goto LABEL_11;
  }
  return 0LL;
}
