/*
 * XREFs of ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x1800439B8
 * Callers:
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18004374C (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x18001A074 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18004A02C (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::BuildJsonFromKglEntry(
        _BOOL8 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  unsigned __int16 v4; // si
  unsigned int v5; // r13d
  int v6; // r14d
  bool v7; // r15
  char v8; // r12
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v13; // eax
  DWORD ActiveProcessorCount; // eax
  int GameProfileFromRawData; // eax
  HSTRING *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  bool *v23; // [rsp+50h] [rbp-31h]
  bool v24; // [rsp+58h] [rbp-29h]
  unsigned __int16 v25; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v27[12]; // [rsp+64h] [rbp-1Dh] BYREF
  __int16 v28; // [rsp+70h] [rbp-11h] BYREF
  PCNZWCH sourceString; // [rsp+78h] [rbp-9h]
  char v30[8]; // [rsp+80h] [rbp-1h] BYREF
  const WCHAR *v31; // [rsp+88h] [rbp+7h]
  unsigned int v32; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  _BOOL8 v34; // [rsp+E8h] [rbp+67h] BYREF
  _QWORD *v35; // [rsp+F0h] [rbp+6Fh]
  HSTRING *v36; // [rsp+F8h] [rbp+77h]
  bool v37; // [rsp+100h] [rbp+7Fh] BYREF

  v36 = a3;
  v35 = a2;
  v34 = a1;
  v4 = 0;
  sourceString = 0LL;
  v5 = 0;
  v26 = 0;
  v6 = 0;
  memset(v27, 0, sizeof(v27));
  v7 = 0;
  LOBYTE(v34) = 0;
  v8 = 0;
  v37 = 0;
  v24 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v9);
    v11 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
  if ( v25 )
  {
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, char *))(*(_QWORD *)*a2 + 64LL))(*a2, v4, &v28, v30);
      v10 = v13;
      if ( v13 < 0 )
        break;
      switch ( v28 )
      {
        case 320:
          v24 = (_DWORD)v31 != 0;
          break;
        case 321:
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          if ( !ActiveProcessorCount )
          {
            v19 = 58LL;
            goto LABEL_30;
          }
          v26 = -1;
          *(_QWORD *)&v27[4] = -1LL;
          if ( (v32 & 3) != 0 )
          {
            v19 = 66LL;
            goto LABEL_30;
          }
          if ( (unsigned __int16)(*v31 - 1) > 1u )
          {
            v19 = 74LL;
            goto LABEL_30;
          }
          if ( 4LL * v31[1] != v32 - 4LL )
          {
            v19 = 76LL;
LABEL_30:
            v10 = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)0x80070057LL);
LABEL_31:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x117,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
              (const char *)v10);
            v20 = *a2;
            if ( *a2 )
            {
              *a2 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            }
            return v10;
          }
          GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                                     (AutoGameProfile *)*v31,
                                     v32 - 4,
                                     (int)v31 + 4,
                                     (const unsigned __int8 *)ActiveProcessorCount,
                                     (unsigned int)&v26,
                                     (unsigned int *)&v27[4],
                                     (unsigned __int64 *)v27,
                                     (unsigned int *)&v34,
                                     &v37,
                                     v23);
          v10 = GameProfileFromRawData;
          if ( GameProfileFromRawData < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4E,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)(unsigned int)GameProfileFromRawData);
          if ( (v10 & 0x80000000) != 0 )
            goto LABEL_31;
          break;
        case 322:
          sourceString = v31;
          v5 = v32;
          break;
      }
      if ( ++v4 >= v25 )
      {
        v6 = *(_DWORD *)v27;
        v7 = v34;
        v8 = v37;
        goto LABEL_22;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v13);
    v21 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v10;
  }
LABEL_22:
  v16 = v36;
  WindowsDeleteString(*v36);
  *v16 = 0LL;
  v17 = JsonDocumentFromGameConfigValues(v26, *(HSTRING *)&v27[4], v6, v8, v7, v24, v5 >> 1, sourceString, v16);
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v17);
    v18 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v10;
  }
  v22 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
