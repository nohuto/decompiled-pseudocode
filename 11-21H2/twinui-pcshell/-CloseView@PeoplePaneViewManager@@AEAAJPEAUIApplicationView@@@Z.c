/*
 * XREFs of ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D62F8
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1803D6110 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x1803D6260 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::CloseView(
        PeoplePaneViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64))
{
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v4; // r8
  int ApplicationFromView; // eax
  unsigned int LastError; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, GUID *, PeoplePaneViewManager **); // rdi
  int v9; // eax
  __int64 v10; // rdx
  HWND Ancestor; // rax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PeoplePaneViewManager *v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  HWND hwnd; // [rsp+58h] [rbp+20h] BYREF

  v15 = this;
  v16 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v16);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)AddressOf, v4);
  LastError = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v15 = 0LL;
    v7 = v16;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, PeoplePaneViewManager **))(*(_QWORD *)v16 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    v9 = v8(v7, 4LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v15);
    LastError = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PeoplePaneViewManager *, HWND *))(*(_QWORD *)v15 + 32LL))(v15, &hwnd);
      LastError = v9;
      if ( v9 >= 0 )
      {
        Ancestor = GetAncestor(hwnd, 2u);
        if ( PostMessageW(Ancestor, 0x10u, 0LL, 0LL) )
          LastError = 0;
        else
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x3C0,
                        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                        v12);
        goto LABEL_11;
      }
      v10 = 957LL;
    }
    else
    {
      v10 = 954LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B7,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return LastError;
}
