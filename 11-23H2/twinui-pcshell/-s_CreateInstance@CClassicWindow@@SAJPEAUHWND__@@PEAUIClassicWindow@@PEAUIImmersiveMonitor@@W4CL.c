/*
 * XREFs of ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x1800D5D3C
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x1800D2FF0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800D34D0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindow@@@12@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D5DFC (--$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180132CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::s_CreateInstance(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = a1;
  v5 = a5;
  *a5 = 0LL;
  Microsoft::WRL::Details::Make<CClassicWindow,HWND__ * &,IClassicWindow * &,IImmersiveMonitor * &,enum CLASSIC_WINDOW_STATE &>(
    (unsigned int)&a5,
    (unsigned int)&v10,
    (unsigned int)&v11,
    (unsigned int)&v12,
    (__int64)&v13);
  v6 = a5;
  if ( a5 )
  {
    *v5 = 0LL;
    if ( InlineIsEqualGUID(&GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v5 = v6;
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      v8 = 0;
    }
    else if ( InlineIsEqualGUID(v7, v7) )
    {
      *v5 = v6;
      v8 = 0;
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    }
    else
    {
      v8 = -2147467262;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v6);
  return v8;
}
