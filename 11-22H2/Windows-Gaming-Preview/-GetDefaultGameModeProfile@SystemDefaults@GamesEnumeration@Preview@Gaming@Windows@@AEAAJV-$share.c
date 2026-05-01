/*
 * XREFs of ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x180044810
 * Callers:
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180044470 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18004A02C (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        bool *a7)
{
  int GameProfileFromRawData; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  DWORD ActiveProcessorCount; // eax
  bool *v16; // [rsp+48h] [rbp-80h]
  unsigned int v17; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-70h]
  _WORD v19[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-64h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v18 = a2;
  v17 = 40;
  GameProfileFromRawData = (*(__int64 (__fastcall **)(_QWORD, __int64, _WORD *, unsigned int *))(*(_QWORD *)*a2 + 80LL))(
                             *a2,
                             3LL,
                             v19,
                             &v17);
  v11 = GameProfileFromRawData;
  if ( GameProfileFromRawData < 0 )
  {
    v12 = 221LL;
LABEL_7:
    v13 = (unsigned int)GameProfileFromRawData;
    goto LABEL_8;
  }
  if ( v17 > 0x28 )
  {
    v11 = -2147418113;
    v13 = 2147549183LL;
    v12 = 223LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)v13);
    goto LABEL_9;
  }
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                             (AutoGameProfile *)v19[0],
                             v17 - 4,
                             (unsigned int)&v20,
                             (const unsigned __int8 *)ActiveProcessorCount,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7,
                             v16);
  v11 = GameProfileFromRawData;
  if ( GameProfileFromRawData < 0 )
  {
    v12 = 233LL;
    goto LABEL_7;
  }
LABEL_9:
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)a2);
  return v11;
}
