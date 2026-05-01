/*
 * XREFs of ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x180042C28
 * Callers:
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800429BC (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180019B60 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18004920C (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  bool *v24; // [rsp+50h] [rbp-31h]
  bool v25; // [rsp+58h] [rbp-29h]
  unsigned __int16 v26; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v28[12]; // [rsp+64h] [rbp-1Dh] BYREF
  __int16 v29; // [rsp+70h] [rbp-11h] BYREF
  PCNZWCH sourceString; // [rsp+78h] [rbp-9h]
  char v31[8]; // [rsp+80h] [rbp-1h] BYREF
  const WCHAR *v32; // [rsp+88h] [rbp+7h]
  unsigned int v33; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  _BOOL8 v35; // [rsp+E8h] [rbp+67h] BYREF
  _QWORD *v36; // [rsp+F0h] [rbp+6Fh]
  HSTRING *v37; // [rsp+F8h] [rbp+77h]
  bool v38; // [rsp+100h] [rbp+7Fh] BYREF

  v37 = a3;
  v36 = a2;
  v35 = a1;
  v4 = 0;
  sourceString = 0LL;
  v5 = 0;
  v27 = 0;
  v6 = 0;
  memset(v28, 0, sizeof(v28));
  v7 = 0;
  LOBYTE(v35) = 0;
  v8 = 0;
  v38 = 0;
  v25 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v26);
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
  if ( v26 )
  {
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, char *))(*(_QWORD *)*a2 + 64LL))(*a2, v4, &v29, v31);
      v10 = v13;
      if ( v13 < 0 )
        break;
      switch ( v29 )
      {
        case 320:
          v25 = (_DWORD)v32 != 0;
          break;
        case 321:
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          if ( !ActiveProcessorCount )
          {
            v20 = 58LL;
            goto LABEL_29;
          }
          v27 = -1;
          *(_QWORD *)&v28[4] = -1LL;
          if ( (v33 & 3) != 0 )
          {
            v20 = 66LL;
            goto LABEL_29;
          }
          if ( (unsigned __int16)(*v32 - 1) > 1u )
          {
            v20 = 74LL;
            goto LABEL_29;
          }
          if ( 4LL * v32[1] != v33 - 4LL )
          {
            v20 = 76LL;
LABEL_29:
            v10 = -2147024809;
            v19 = 2147942487LL;
LABEL_30:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)v19);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x117,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
              (const char *)v10);
            v21 = *a2;
            if ( *a2 )
            {
              *a2 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
            return v10;
          }
          GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                                     (AutoGameProfile *)*v32,
                                     v33 - 4,
                                     (int)v32 + 4,
                                     (const unsigned __int8 *)ActiveProcessorCount,
                                     (unsigned int)&v27,
                                     (unsigned int *)&v28[4],
                                     (unsigned __int64 *)v28,
                                     (unsigned int *)&v35,
                                     &v38,
                                     v24);
          v10 = GameProfileFromRawData;
          if ( GameProfileFromRawData < 0 )
          {
            v19 = (unsigned int)GameProfileFromRawData;
            v20 = 78LL;
            goto LABEL_30;
          }
          break;
        case 322:
          sourceString = v32;
          v5 = v33;
          break;
      }
      if ( ++v4 >= v26 )
      {
        v6 = *(_DWORD *)v28;
        v7 = v35;
        v8 = v38;
        goto LABEL_20;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v13);
    v22 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return v10;
  }
LABEL_20:
  v16 = v37;
  WindowsDeleteString(*v37);
  *v16 = 0LL;
  v17 = JsonDocumentFromGameConfigValues(v27, *(HSTRING *)&v28[4], v6, v8, v7, v25, v5 >> 1, sourceString, v16);
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
  v23 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
