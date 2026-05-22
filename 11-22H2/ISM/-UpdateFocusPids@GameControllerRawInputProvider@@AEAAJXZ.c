/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180026DB0
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180026C60 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004B18C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z @ 0x180061720 (-OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800DBB24 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800DCAA0 (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK0000@Z @ 0x180060758 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

int __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  unsigned int *v2; // rsi
  unsigned int v3; // edx
  __int64 v4; // rcx
  char *v5; // rcx
  const char *v6; // r9
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned int v13; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+40h] BYREF
  unsigned int InBuffer; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+50h] BYREF

  v2 = (unsigned int *)((char *)this + 160);
  v3 = *((_DWORD *)this + 40);
  if ( !v3 )
  {
    v3 = *((_DWORD *)this + 42);
    if ( !v3 )
    {
      v3 = *((_DWORD *)this + 41);
      if ( !v3 )
        v3 = *((_DWORD *)this + 39);
    }
  }
  InBuffer = v3;
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  v5 = (char *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v5, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x371,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v6);
  }
  v8 = *v2;
  if ( !*v2 )
    v8 = *((_DWORD *)this + 39);
  v14 = v8;
  v9 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v14, 4LL);
  if ( v9 < 0 )
  {
    v10 = 909LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v10,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v9,
             0);
  }
  v11 = *((_DWORD *)this + 42);
  if ( !v11 )
    v11 = *((_DWORD *)this + 41);
  if ( *v2 )
    v11 = 0;
  v13 = v11;
  v16 = *((_DWORD *)this + 43);
  if ( v11 != v16 )
  {
    v9 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v13, 4LL);
    if ( v9 < 0 )
    {
      v10 = 937LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v10,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontr"
                             "ollerrawinputprovider.cpp",
               (const char *)(unsigned int)v9,
               0);
    }
    *((_DWORD *)this + 43) = v13;
  }
  ISMTracing::GameControllerRawInputProvider_UpdateFocusPids<unsigned long &,unsigned long &,unsigned long &,unsigned long const &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
    (unsigned int *)this + 39,
    v2,
    (unsigned int *)this + 41,
    &v16,
    &InBuffer,
    &v14,
    &v13,
    (unsigned int *)this + 42);
  return 0;
}
