/*
 * XREFs of ?SetGameGpuProfile@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@EEEE@Z @ 0x1800192EC
 * Callers:
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180040B70 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SetGameGpuProfile(
        struct ExecutionModel::IGameConfigStore *a1,
        struct _GUID *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a4 + a6 + (unsigned __int8)a5 != 100 )
  {
    v6 = -2147024809;
    v7 = 397LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v6);
    return v6;
  }
  if ( a3 > 0x64u )
  {
    v6 = -2147024809;
    v7 = 402LL;
    goto LABEL_7;
  }
  v9 = (__int128)*a2;
  a5 = a6 | (((unsigned __int8)a5 | ((a4 | (a3 << 8)) << 8)) << 8);
  v6 = (*(__int64 (__fastcall **)(struct ExecutionModel::IGameConfigStore *, __int128 *, __int64, int *, int))(*(_QWORD *)a1 + 72LL))(
         a1,
         &v9,
         19LL,
         &a5,
         4);
  if ( (v6 & 0x80000000) != 0 )
  {
    v7 = 407LL;
    goto LABEL_7;
  }
  return v6;
}
