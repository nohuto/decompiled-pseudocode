/*
 * XREFs of ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180123D50
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180123CE0 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801240B0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  int ImmersiveApplicationArraySafe; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  struct IImmersiveApplicationArray *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct IImmersiveApplicationArray *v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(
                                    (CApplicationManager *)((char *)this - 8),
                                    &v13);
  v6 = ImmersiveApplicationArraySafe;
  if ( ImmersiveApplicationArraySafe < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1116,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)ImmersiveApplicationArraySafe);
  }
  else
  {
    v12 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationArray *, GUID *, __int64 *))v13)(
           v13,
           &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34,
           &v12);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1118,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v12 + 40LL))(v12, a2, a3);
      if ( v6 >= 0 )
        v6 = 0;
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationArray *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v6;
}
