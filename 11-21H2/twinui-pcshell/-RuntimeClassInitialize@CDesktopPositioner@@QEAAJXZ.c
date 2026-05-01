/*
 * XREFs of ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1800AE7D0
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AE62C (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::RuntimeClassInitialize(CDesktopPositioner *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  bool v6; // zf
  unsigned int v7; // [rsp+40h] [rbp-40h] BYREF
  DWORD v8; // [rsp+44h] [rbp-3Ch] BYREF
  DWORD v9; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v8 = 0;
  v9 = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationFrame\\Positions",
          L"UseDefaultRestorePosition",
          0x10000012u,
          &v8,
          &v7,
          &v9) )
  {
    if ( v8 == 4 )
    {
      if ( v7 > 1 )
        goto LABEL_2;
      v5 = 0;
      v6 = v7 == 1;
    }
    else
    {
      if ( v9 != 4 || (unsigned __int16)(v7 - 48) > 1u )
        goto LABEL_2;
      v5 = 0;
      v6 = (_WORD)v7 == 49;
    }
    LOBYTE(v5) = v6;
    *((_DWORD *)this + 126) = v5;
  }
LABEL_2:
  if ( (int)SHRegGetDWORD(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DesktopPositioner",
              L"HorizontalDropOffset",
              (unsigned int *)this + 92) < 0 )
    *((_DWORD *)this + 92) = 40;
  v10[0] = GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v10[1] = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CDesktopPositioner *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v10,
         1u);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
