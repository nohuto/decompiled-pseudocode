/*
 * XREFs of ?_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IReference@H@Foundation@5@IAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18004010C
 * Callers:
 *     ?put_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x1800404C0 (-put_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 *     ?put_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180040500 (-put_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming.c)
 *     ?put_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180040540 (-put_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Pr.c)
 *     ?put_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180040580 (-put_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003F794 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  int NullableInt; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  v16[0] = 0LL;
  if ( a2 )
  {
    NullableInt = (*(__int64 (__fastcall **)(__int64, signed int *))(*(_QWORD *)a2 + 48LL))(a2, &v18);
    v9 = NullableInt;
    if ( NullableInt < 0 )
    {
      v10 = 452LL;
LABEL_10:
      v11 = (unsigned int)NullableInt;
      goto LABEL_11;
    }
    if ( v18 < 0 )
    {
      v9 = -2147024809;
      v11 = 2147942487LL;
      v10 = 453LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)v11);
      v12 = v16[0];
      goto LABEL_20;
    }
    if ( v18 > a3 )
    {
      v9 = -2147024809;
      v11 = 2147942487LL;
      v10 = 454LL;
      goto LABEL_11;
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v8,
                    v16,
                    v18);
    v9 = NullableInt;
    if ( NullableInt < 0 )
    {
      v10 = 455LL;
      goto LABEL_10;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v12 = v16[0];
  if ( *a4 != v16[0] )
  {
    v13 = v16[0];
    if ( v16[0] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 8LL))(v16[0]);
      v12 = v16[0];
    }
    v14 = *a4;
    *a4 = v13;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v12 = v16[0];
    }
  }
  if ( a1 != -168 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
    v12 = v16[0];
  }
  v9 = 0;
LABEL_20:
  if ( v12 )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v9;
}
