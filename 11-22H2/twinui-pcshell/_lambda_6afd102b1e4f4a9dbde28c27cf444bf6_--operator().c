/*
 * XREFs of _lambda_6afd102b1e4f4a9dbde28c27cf444bf6_::operator() @ 0x1801D8AF4
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_6afd102b1e4f4a9dbde28c27cf444bf6___ @ 0x1801D8260 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_6afd102b1e4f4a9dbde28c27cf444bf6___.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1802D170E (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall lambda_6afd102b1e4f4a9dbde28c27cf444bf6_::operator()(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // rsi
  int *v5; // rax
  bool i; // sf
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // eax
  unsigned int j; // ebp
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = *(int **)a1;
  for ( i = **(int **)a1 < 0; !i; i = **(int **)a1 < 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v4 >= *(_QWORD *)(v7 + 680) )
      break;
    v8 = *(_QWORD *)(v7 + 672);
    if ( IsEqualByHwnd(a2, *(struct IApplicationView **)(v8 + 8 * v4)) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 16) + 24LL))(
             **(_QWORD **)(a1 + 16),
             &v16);
      if ( v9 >= 0 )
      {
        for ( j = 0; j < v16; ++j )
        {
          v17 = 0LL;
          v11 = **(_QWORD **)(a1 + 16);
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v11 + 32LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
          v13 = v12(v11, j, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v17);
          if ( v13 >= 0 )
          {
            if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v8 + 8 * v4), v17) )
            {
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
              return 1LL;
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC6,
              (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
              (const char *)(unsigned int)v13);
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC1,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
      }
      **(_DWORD **)a1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(a1 + 16) + 40LL))(
                          **(_QWORD **)(a1 + 16),
                          *(_QWORD *)(v8 + 8 * v4));
    }
    ++v4;
    v5 = *(int **)a1;
  }
  return *v5 >= 0;
}
