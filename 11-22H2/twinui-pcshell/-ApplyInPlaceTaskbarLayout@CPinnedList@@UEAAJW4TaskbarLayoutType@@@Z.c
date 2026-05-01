/*
 * XREFs of ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18017BB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18017BA90 (-zInternalStart@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18017BC78 (--1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017BCA4 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18017CE00 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180751A34 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180753EE0 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x180755B34 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18075BE40 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::ApplyInPlaceTaskbarLayout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  int PidlsFromTaskbarLayout; // eax
  unsigned int v8; // ebx
  const GUID *v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  int PinSourceForPinnedItem; // eax
  int v14; // eax
  struct PINENTRY *PidlOrAppID; // rsi
  LPCITEMIDLIST *v16; // rbx
  LPCITEMIDLIST *v17; // r15
  const struct _ITEMIDLIST *v18; // rdi
  struct PINENTRY *v19; // rax
  int v20; // eax
  ITEMIDLIST **v21; // rbx
  ITEMIDLIST **v22; // rdi
  ITEMIDLIST *v23; // rsi
  int v24; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-BCh] BYREF
  LPCITEMIDLIST pidl1; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h]
  _QWORD v34[40]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v34, 0, sizeof(v34));
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v34);
  v34[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)v34);
  v5 = wil::details::static_lazy<TaskbarLogging>::get(
         v4,
         _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(v5 + 8);
  if ( *v6 > 5u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 0x200000000000LL) )
  {
    v26 = a2;
    CurrentThreadId = GetCurrentThreadId();
    *(_QWORD *)&v31 = 0x1000000LL;
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(v34);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_18087F649,
      (const GUID *)(v34[6] + 8LL),
      v10,
      (__int64)&v31,
      (__int64)&CurrentThreadId,
      (__int64)&v26);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)v34);
  pv[0] = 0LL;
  pv[1] = 0LL;
  v33 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v29, &v30);
  v8 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x931,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
  }
  else if ( v29 )
  {
    v28 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    v12 = v11(a1, &v28);
    v8 = v12;
    if ( v12 >= 0 )
    {
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, LPCITEMIDLIST *))(*(_QWORD *)v28 + 24LL))(
                 v28,
                 1LL,
                 &pidl1) )
      {
        PinSourceForPinnedItem = GetPinSourceForPinnedItem(pidl1, (enum TaskbarPinningSource *)&CurrentThreadId);
        if ( PinSourceForPinnedItem >= 0 )
        {
          if ( CurrentThreadId )
          {
            v31 = 0LL;
            if ( v30 || CurrentThreadId != 1 )
            {
              v14 = CPinList::Load((CPinList *)&v31, (struct CPinnedList *)(a1 - 16));
              if ( v14 >= 0 )
              {
                PidlOrAppID = CPinList::FindPidlOrAppID((CPinList *)&v31, pidl1, 0, 0LL);
                v16 = (LPCITEMIDLIST *)pv[0];
                v17 = (LPCITEMIDLIST *)((char *)pv[0] + 8 * (__int64)pv[1]);
                while ( v16 != v17 )
                {
                  v18 = *v16;
                  if ( ILIsEqual(pidl1, *v16) )
                    goto LABEL_29;
                  v19 = CPinList::FindPidlOrAppID((CPinList *)&v31, v18, 0, 0LL);
                  if ( PidlOrAppID )
                  {
                    if ( PidlOrAppID == v19 )
                      goto LABEL_29;
                  }
                  ++v16;
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x946,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v14);
              }
              v20 = CPinnedList::InternalModify(a1 - 16, pidl1, 0LL, 12LL, 0);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x964,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v20);
            }
LABEL_29:
            CPinList::~CPinList((CPinList *)&v31);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x93C,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)PinSourceForPinnedItem);
        }
        ILFree((LPITEMIDLIST)pidl1);
      }
      v21 = (ITEMIDLIST **)pv[0];
      v22 = (ITEMIDLIST **)((char *)pv[0] + 8 * (__int64)pv[1]);
      while ( v21 != v22 )
      {
        v23 = *v21;
        if ( (*(unsigned int (__fastcall **)(__int64, ITEMIDLIST *))(*(_QWORD *)a1 + 72LL))(a1, *v21) == 1 )
        {
          v24 = CPinnedList::InternalModify(a1 - 16, 0LL, v23, 12LL, 0);
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x96F,
              (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
              (const char *)(unsigned int)v24);
        }
        ILFree(v23);
        ++v21;
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v34);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x936,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  }
  else
  {
    v8 = -2147019873;
  }
  if ( pv[0] )
  {
    CoTaskMemFree(pv[0]);
    pv[0] = 0LL;
  }
  pv[1] = 0LL;
  *((_QWORD *)&v33 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity *)v34);
  return v8;
}
