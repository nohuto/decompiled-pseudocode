/*
 * XREFs of ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800462F0
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180046280 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180170D10 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  CApplicationManager *v5; // rbx
  int ImmersiveApplicationArraySafe; // eax
  int v7; // ebx
  struct IImmersiveApplicationArray *v8; // rbx
  __int64 (__fastcall *v9)(struct IImmersiveApplicationArray *, GUID *, __int64 *); // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  struct IImmersiveApplicationArray *v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v5 = (CApplicationManager *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(v5, &v15);
  v7 = ImmersiveApplicationArraySafe;
  if ( ImmersiveApplicationArraySafe < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1100,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)ImmersiveApplicationArraySafe,
      v12);
  }
  else
  {
    v14 = 0LL;
    v8 = v15;
    v9 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationArray *, GUID *, __int64 *))v15;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v10 = v9(v8, &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34, &v14);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1102,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v10,
        v12);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v14 + 40LL))(v14, a2, a3);
      if ( v7 >= 0 )
        v7 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v7;
}
