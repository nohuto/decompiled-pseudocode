/*
 * XREFs of ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180017FFC
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x180017E90 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSystemBackdropVisual::CreateColorBrush(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+30h] BYREF

  v16 = a1;
  *a3 = 0LL;
  v17 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  v7 = v6(v5, a2, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v7,
      savedregs);
  }
  else
  {
    v16 = 0LL;
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v17;
    v10 = **v17;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    v11 = v10(v9, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v16);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v11,
        savedregs);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    }
    else
    {
      v12 = v16;
      v16 = 0LL;
      *a3 = v12;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      v8 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  return v8;
}
