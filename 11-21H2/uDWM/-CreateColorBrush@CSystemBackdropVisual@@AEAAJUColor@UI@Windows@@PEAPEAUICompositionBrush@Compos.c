/*
 * XREFs of ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x1800E10F4
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800E1A40 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSystemBackdropVisual::CreateColorBrush(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v15 = a1;
  *a3 = 0LL;
  v16 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 40LL);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v7 = v6(v5, a2, &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    v10 = **v16;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v11 = v10(v9, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v15);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v12 = v15;
      v15 = 0LL;
      *a3 = v12;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x106,
        (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v8;
}
