/*
 * XREFs of ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x18010C648
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010C59C (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EAB24 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::RuntimeClassInitialize(CDesktopPositioner *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  bool v9; // zf
  int v10; // [rsp+20h] [rbp-60h]
  unsigned int v11; // [rsp+40h] [rbp-40h] BYREF
  DWORD v12; // [rsp+44h] [rbp-3Ch] BYREF
  DWORD v13; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v12 = 0;
  v13 = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationFrame\\Positions",
          L"UseDefaultRestorePosition",
          0x10000012u,
          &v12,
          &v11,
          &v13) )
  {
    if ( v12 == 4 )
    {
      if ( v11 > 1 )
        goto LABEL_2;
      v8 = 0;
      v9 = v11 == 1;
    }
    else
    {
      if ( v13 != 4 || (unsigned __int16)(v11 - 48) > 1u )
        goto LABEL_2;
      v8 = 0;
      v9 = (_WORD)v11 == 49;
    }
    LOBYTE(v8) = v9;
    *((_DWORD *)this + 138) = v8;
  }
LABEL_2:
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DesktopPositioner",
         L"HorizontalDropOffset",
         (unsigned int *)this + 104) < 0 )
    *((_DWORD *)this + 104) = 40;
  v14[0] = GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v14[1] = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CDesktopPositioner *)((char *)this + 48),
         (__int64)v14,
         1uLL);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v2,
      v10);
    return v3;
  }
  else
  {
    v4 = *((_QWORD *)this + 72);
    *((_QWORD *)this + 72) = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release();
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 72);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v5,
        v10);
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
}
