/*
 * XREFs of ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x18052BC4C
 * Callers:
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x18052C860 (-Solidify@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x18052C114 (-IsLightTheme@CImmersiveColor@@SA_NXZ.c)
 */

void __fastcall GhostDivider::DrawGrabber(GhostDivider *this)
{
  int v1; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // r14d
  int v7; // ecx
  int v8; // r9d
  int v9; // r10d
  bool IsLightTheme; // al
  unsigned int Color; // eax
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 *v14; // r15
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v1 = *((_DWORD *)this + 18);
  v3 = *((_DWORD *)this + 21) / 2;
  v4 = *((_DWORD *)this + 22) / 2;
  v5 = 36 * v1 / 100;
  v6 = 3 * v1 / 100;
  v7 = v5 / 2;
  if ( v3 <= v4 )
  {
    v8 = v3 - 3 * v1 / 100 / 2;
    v9 = v4 - v7;
    v20 = v8 + v6;
    v21 = v9 + v5;
  }
  else
  {
    v8 = v3 - v7;
    v9 = v4 - 3 * v1 / 100 / 2;
    v20 = v8 + v5;
    v21 = v9 + v6;
  }
  v19 = v9;
  v18 = v8;
  IsLightTheme = CImmersiveColor::IsLightTheme();
  Color = CImmersiveColor::GetColor(219 - (unsigned int)IsLightTheme);
  v12 = *((_QWORD *)this + 6);
  v13 = Color;
  v14 = (__int64 *)((char *)this + 56);
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 112LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v14);
  LODWORD(v17) = v20 - v18;
  HIDWORD(v17) = v21 - v19;
  v16 = v15(v12, 0LL, v13, v17, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v14);
  if ( v16 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v14 + 240LL))(*v14);
    (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)*v14 + 24LL))(*v14, &v18, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v16);
  }
}
