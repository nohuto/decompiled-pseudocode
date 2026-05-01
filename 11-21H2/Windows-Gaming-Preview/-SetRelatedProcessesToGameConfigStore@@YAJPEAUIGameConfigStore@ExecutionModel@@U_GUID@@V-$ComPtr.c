/*
 * XREFs of ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180019770
 * Callers:
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FD60 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180018E84 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SetRelatedProcessesToGameConfigStore(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v10; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 (__fastcall *v12)(__int64, __int128 *, __int64, PCWSTR, UINT32); // r11
  int v13; // eax
  unsigned int v14; // esi
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  UINT32 length; // [rsp+88h] [rbp+20h] BYREF

  string = 0LL;
  v6 = SerializeRelatedProcessArray((__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = string;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    v12 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64, PCWSTR, UINT32))(*(_QWORD *)a1 + 72LL);
    v18 = *a2;
    v13 = v12(a1, &v18, 22LL, StringRawBuffer, 2 * length);
    v14 = v13;
    if ( v13 >= 0 )
    {
      WindowsDeleteString(v10);
      v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x215,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v13);
      WindowsDeleteString(v10);
      v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20C,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v6);
    WindowsDeleteString(string);
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
    }
    return v7;
  }
}
