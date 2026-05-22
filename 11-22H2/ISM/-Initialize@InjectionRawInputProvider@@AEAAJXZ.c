/*
 * XREFs of ?Initialize@InjectionRawInputProvider@@AEAAJXZ @ 0x1800F7220
 * Callers:
 *     ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800F6EA0 (-Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UISystemInputRouterHitTest@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F63F4 (--$As@UISystemInputRouterHitTest@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InjectionRawInputProvider::Initialize(InjectionRawInputProvider *this)
{
  _QWORD *v2; // rdi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v11 = v2;
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD *))(v2[1] + 64LL))(v2 + 1);
  v10 = v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v10);
  if ( !v3 )
  {
    v4 = -2147418113;
    v5 = 2147549183LL;
    v6 = 60LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)v5);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v11);
    return v4;
  }
  v7 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<ISystemInputRouterHitTest>(&v10, (__int64 *)this + 4);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = (unsigned int)v7;
    v6 = 62LL;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v10);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  return 0LL;
}
