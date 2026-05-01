/*
 * XREFs of ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180752670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017BCA4 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180751BC8 (--1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x180755B34 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x18075BD90 (-StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18075BE40 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPinnedList::ApplyReorderTaskbarLayout(__int64 a1, unsigned int a2, int a3)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, __int64 **); // rbx
  int v9; // eax
  __int64 v10; // rax
  bool v11; // bl
  void *v12; // rcx
  int PinSourceForPinnedItem; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  void *v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rax
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID *p_pv; // [rsp+38h] [rbp-C8h]
  void *v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+48h] [rbp-B8h]
  LPVOID *v28; // [rsp+50h] [rbp-B0h]
  char v29; // [rsp+58h] [rbp-A8h]
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v32[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h]
  _DWORD v34[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v35[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v35, 0, sizeof(v35));
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"TaskbarLayoutReorderActivity");
  v35[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::StartActivity(v35, a2);
  v32[0] = 0LL;
  v32[1] = 0LL;
  v33 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, (__int64)v32, v34, 0LL);
  v7 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E9,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    goto LABEL_35;
  }
  v28 = v32;
  v29 = 1;
  if ( v34[0] )
  {
    v31 = 0LL;
    pv = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    v9 = v8(a1, &v31);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F7,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v9);
LABEL_28:
      v20 = pv;
      pv = 0LL;
      if ( v20 )
        CoTaskMemFree(v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
      goto LABEL_32;
    }
    while ( 1 )
    {
      v10 = *v31;
      p_pv = &pv;
      v26 = 0LL;
      v27 = 1;
      v11 = (*(unsigned int (__fastcall **)(__int64 *, __int64, void **))(v10 + 24))(v31, 1LL, &v26) == 0;
      if ( v27 )
      {
        v12 = *p_pv;
        *p_pv = v26;
        if ( v12 )
          CoTaskMemFree(v12);
      }
      if ( !v11 )
      {
        if ( !a3 || (v15 = LODWORD(v32[1]) - 1, LODWORD(v32[1]) - 1 < 0) )
        {
LABEL_27:
          wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v35);
          v7 = 0;
          goto LABEL_28;
        }
        while ( 2 )
        {
          v16 = *((_QWORD *)v32[0] + v15);
          if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v16) )
          {
            v17 = CPinnedList::InternalModify(a1 - 16, 0LL, v16, 14LL, 0);
            v18 = retaddr;
            if ( v17 < 0 )
            {
              v19 = 2574LL;
              goto LABEL_25;
            }
            v17 = CPinnedList::InternalModify(a1 - 16, v16, 1LL, 14LL, 0);
            v18 = retaddr;
            if ( v17 < 0 )
            {
              v19 = 2576LL;
LABEL_25:
              wil::details::in1diag3::_Log_Hr(
                v18,
                (void *)v19,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v17);
            }
          }
          if ( --v15 < 0 )
            goto LABEL_27;
          continue;
        }
      }
      PinSourceForPinnedItem = GetPinSourceForPinnedItem(
                                 (const struct _ITEMIDLIST *)pv,
                                 (enum TaskbarPinningSource *)&v24);
      if ( PinSourceForPinnedItem < 0 )
        break;
      if ( v24 && (v24 != 1 || !a2) )
      {
        PinSourceForPinnedItem = CPinnedList::InternalModify(a1 - 16, pv, 0LL, 14LL, 0);
        if ( PinSourceForPinnedItem < 0 )
        {
          v14 = 2562LL;
LABEL_17:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v14,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)PinSourceForPinnedItem);
        }
      }
    }
    v14 = 2557LL;
    goto LABEL_17;
  }
  v7 = -2147019873;
LABEL_32:
  v21 = 0;
  if ( v32[1] )
  {
    v22 = 0LL;
    do
    {
      ILFree(*((LPITEMIDLIST *)v32[0] + v22));
      v22 = ++v21;
    }
    while ( (LPVOID)v21 < v32[1] );
  }
LABEL_35:
  if ( v32[0] )
  {
    CoTaskMemFree(v32[0]);
    v32[0] = 0LL;
  }
  v32[1] = 0LL;
  *((_QWORD *)&v33 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity *)v35);
  return v7;
}
