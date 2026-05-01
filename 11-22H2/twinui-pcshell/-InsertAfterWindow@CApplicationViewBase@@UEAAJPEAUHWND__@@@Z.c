/*
 * XREFs of ?InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z @ 0x1803D04F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::InsertAfterWindow(CApplicationViewBase *this, HWND a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  volatile signed __int32 *v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v3 = (*(__int64 (__fastcall **)(CApplicationViewBase *, __int64 *))(*(_QWORD *)this + 504LL))(this, &v8);
  if ( v3 < 0 )
  {
    v4 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = 0LL;
  v11 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v10);
  if ( v10 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)v10 + 6) + 768LL);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*((_QWORD *)v10 + 6) + 768LL));
    v7 = 0LL;
    v12 = 0LL;
    v11 = v6;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v7);
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v10);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, HWND))(*(_QWORD *)v6 + 40LL))(v6, v8, a2);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
  if ( v3 < 0 )
  {
    v4 = 63LL;
    goto LABEL_3;
  }
  return 0LL;
}
