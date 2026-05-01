/*
 * XREFs of ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x180573860
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x180573300 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ @ 0x18057679C (-_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ.c)
 */

void __fastcall CSwitchItemElement::_UpdateBorder(CSwitchItemElement *this)
{
  int Color; // eax
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 78) )
  {
    if ( CMultitaskingViewElementBase::_ShouldRenderAsFocused(this) )
    {
      v7[0] = *((_DWORD *)this + 101);
      Color = CImmersiveColor::GetColor(0xB2u);
      v3 = (__int64 *)*((_QWORD *)this + 78);
      *(float *)&v7[2] = FLOAT_1_0;
      v7[1] = Color;
      v4 = *v3;
      v6[0] = 0;
      v6[1] = 0;
      v6[2] = 0;
      v5 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _DWORD *))(v4 + 216))(v3, v7, v6);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xED,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
          (const char *)(unsigned int)v5);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 224LL))(*((_QWORD *)this + 78));
    }
  }
}
