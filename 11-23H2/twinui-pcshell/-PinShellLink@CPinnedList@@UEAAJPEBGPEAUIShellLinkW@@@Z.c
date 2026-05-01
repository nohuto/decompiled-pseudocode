/*
 * XREFs of ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0
 * Callers:
 *     ?PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z @ 0x1802ADD10 (-PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1?$CCoTaskMemPtr@PEAUHWND__@@@@QEAA@XZ @ 0x18021451C (--1-$CCoTaskMemPtr@PEAUHWND__@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18038BC1C (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x180751544 (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18075157C (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@QEAA@XZ @ 0x180751A10 (--1-$unique_ptr@VCBackupLocationManager@@U-$default_delete@VCBackupLocationManager@@@wistd@@@wis.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180751A34 (--1CPinList@@QEAA@XZ.c)
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x180751B44 (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180751F60 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180752C34 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x180759E38 (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18075B358 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18075B8E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ @ 0x18075BB90 (-StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18075BF64 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18075CDB0 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x18075CE50 (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18075D8AC (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::PinShellLink(CPinnedList *this, wchar_t *a2, struct IShellLinkW *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  CBackupLocationManager *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  HRESULT v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  int appended; // eax
  PINENTRY *ItemPtr; // rax
  __int64 (__fastcall *v20)(CPinnedList *, struct _ITEMIDLIST *, __int128 *); // rbx
  int v21; // eax
  __int64 v22; // rdx
  struct _ITEMIDLIST *v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  HDSA hdsa[2]; // [rsp+50h] [rbp-B0h] BYREF
  LPWSTR *ppwsz[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[40]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR psz[264]; // [rsp+1B0h] [rbp+B0h] BYREF
  WCHAR Filename[264]; // [rsp+3C0h] [rbp+2C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+618h] [rbp+518h]

  memset_0(v29, 0, sizeof(v29));
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v29);
  v29[0] = &TaskbarPinningTelemetry::PinningActivity::`vftable';
  TaskbarPinningTelemetry::PinningActivity::StartActivity((TaskbarPinningTelemetry::PinningActivity *)v29);
  v6 = (*(__int64 (__fastcall **)(char *, WCHAR *, __int64))(*((_QWORD *)this - 2) + 104LL))(
         (char *)this - 16,
         psz,
         260LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::make_unique_nothrow<CBackupLocationManager,>(ppwsz);
    v8 = (CBackupLocationManager *)ppwsz[0];
    if ( !ppwsz[0] )
    {
      v7 = -2147024882;
      v9 = 2147942414LL;
      v10 = 2237LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)v9);
LABEL_31:
      wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
        (CBackupLocationManager **)ppwsz,
        v12);
      goto LABEL_32;
    }
    v11 = SHStrDupW(psz, ppwsz[0]);
    v7 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 2238LL;
      goto LABEL_7;
    }
    v24 = 0LL;
    v13 = CBackupLocationManager::CreateBackupLnk(v8, a2, a3, &v24);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 2241LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v13);
LABEL_30:
      CCoTaskMemPtr<HWND__ *>::~CCoTaskMemPtr<HWND__ *>((void **)&v24);
      goto LABEL_31;
    }
    v13 = SetPinSourceForPinnedItem(v24, &v24, 0LL);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 2242LL;
      goto LABEL_14;
    }
    v13 = CacheAppIDInIDList(v24);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 2243LL;
      goto LABEL_14;
    }
    *(_OWORD *)hdsa = 0LL;
    v15 = CPinList::Load(hdsa, (CPinnedList *)((char *)this - 16));
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 2246LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)v16);
LABEL_29:
      CPinList::~CPinList((CPinList *)hdsa);
      goto LABEL_30;
    }
    appended = CPinList::AppendPidl((CPinList *)hdsa, (CPinnedList *)((char *)this - 16), v24);
    if ( appended < 0 )
    {
      v7 = -2147024882;
      v16 = 2147942414LL;
      v17 = 2248LL;
      goto LABEL_19;
    }
    ItemPtr = (PINENTRY *)DSA_GetItemPtr(hdsa[0], appended);
    PINENTRY::UpdateShellLink(ItemPtr);
    v26 = 0LL;
    v25 = 0uLL;
    v20 = *(__int64 (__fastcall **)(CPinnedList *, struct _ITEMIDLIST *, __int128 *))(*(_QWORD *)this + 88LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
    *((_QWORD *)&v25 + 1) = -1LL;
    v26 = -1LL;
    v21 = v20(this, v24, &v25);
    v7 = v21;
    if ( v21 >= 0 )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
        TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(v29, v25, Filename, 17LL);
      v21 = CPinList::Save((CPinList *)hdsa, (CPinnedList *)((char *)this - 16));
      v7 = v21;
      if ( v21 >= 0 )
      {
        CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), v24, 0);
        wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v29,
          0LL);
        v7 = 0;
        goto LABEL_28;
      }
      v22 = 2263LL;
    }
    else
    {
      v22 = 2256LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v21);
LABEL_28:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v25);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8BA,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v6);
LABEL_32:
  TaskbarPinningTelemetry::PinningActivity::~PinningActivity((TaskbarPinningTelemetry::PinningActivity *)v29);
  return v7;
}
