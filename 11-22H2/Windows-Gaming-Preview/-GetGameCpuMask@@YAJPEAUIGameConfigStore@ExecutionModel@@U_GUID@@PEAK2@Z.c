/*
 * XREFs of ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x1800191F8
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FA9C (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetGameCpuMask(
        struct ExecutionModel::IGameConfigStore *a1,
        struct _GUID *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  signed int LastError; // eax
  signed int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v14 = 0LL;
  if ( !GetActiveProcessorCount(0xFFFFu) )
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = LastError;
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v10 = 348LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = *(_QWORD *)a1;
  v15 = (__int128)*a2;
  v13 = 8;
  v9 = (*(__int64 (__fastcall **)(struct ExecutionModel::IGameConfigStore *, __int128 *, __int64, __int64 *, int *))(v12 + 64))(
         a1,
         &v15,
         18LL,
         &v14,
         &v13);
  if ( v9 < 0 )
  {
    v10 = 352LL;
    goto LABEL_6;
  }
  *a3 = v14;
  *a4 = HIDWORD(v14);
  return 0LL;
}
