/*
 * XREFs of ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18073E874
 * Callers:
 *     ?GetDefaultGameModeProfile@IsGameManager@@UEAAJPEAKPEA_K0PEA_N2@Z @ 0x1803DE080 (-GetDefaultGameModeProfile@IsGameManager@@UEAAJPEAKPEA_K0PEA_N2@Z.c)
 *     ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x18073E700 (-GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAMDCpu@AutoGameProfile@@YA_NXZ @ 0x18073F0E8 (-IsAMDCpu@AutoGameProfile@@YA_NXZ.c)
 */

__int64 __fastcall AutoGameProfile::GetGameProfileFromRawData(
        AutoGameProfile *this,
        unsigned int a2,
        unsigned int *a3,
        const unsigned __int8 *a4,
        int *a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        unsigned int *a8,
        bool *a9)
{
  __int64 v9; // rdx
  unsigned int v11; // esi
  int v12; // r14d
  unsigned __int64 v13; // rbx
  char v14; // bp
  bool IsAMDCpu; // al
  int v16; // r10d
  unsigned int v17; // r11d
  unsigned int *v18; // r9
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned int v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+24h] [rbp-54h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v32; // [rsp+80h] [rbp+8h]
  bool v33; // [rsp+88h] [rbp+10h]
  unsigned int *v34; // [rsp+90h] [rbp+18h]
  int v35; // [rsp+98h] [rbp+20h]

  v35 = (int)a4;
  v34 = a3;
  v32 = (int)this;
  if ( (a2 & 3) != 0 )
  {
    v9 = 86LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v9 = 87LL;
    goto LABEL_3;
  }
  if ( !a5 )
  {
    v9 = 88LL;
    goto LABEL_3;
  }
  if ( !a6 )
  {
    v9 = 89LL;
    goto LABEL_3;
  }
  if ( !a7 )
  {
    v9 = 90LL;
    goto LABEL_3;
  }
  if ( !a8 )
  {
    v9 = 91LL;
    goto LABEL_3;
  }
  if ( !a9 )
  {
    v9 = 92LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)a4 )
  {
    v9 = 93LL;
    goto LABEL_3;
  }
  *a5 = 0;
  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)a7 = 0;
  v11 = a2 >> 2;
  *(_BYTE *)a8 = 0;
  *a9 = 0;
  if ( !(a2 >> 2) )
  {
    v9 = 104LL;
    goto LABEL_3;
  }
  v12 = 0;
  v30 = 0;
  v13 = 0LL;
  v14 = 0;
  IsAMDCpu = AutoGameProfile::IsAMDCpu(0LL);
  v29 = 0;
  v16 = -1;
  v17 = 0;
  v33 = IsAMDCpu;
  v18 = v34;
  do
  {
    v19 = *v18;
    v20 = *v18 >> 28;
    if ( v20 == 12 )
    {
      if ( (v19 & 0xFE00000) >= 0xC800000
        || (v21 = (v19 >> 14) & 0x7F, v21 >= 0x64)
        || (v22 = (v19 >> 7) & 0x7F, v22 >= 0x64)
        || (v23 = *v18 & 0x7F, v23 >= 0x64)
        || v21 + v23 + v22 > 0x64 )
      {
        v9 = 130LL;
        goto LABEL_3;
      }
      *a9 = 1;
      v18 = v34;
      v12 = v23 | (2 * (v19 & 0x3F80 | (2 * ((2 * (v19 & 0xFE00000)) | v19 & 0x1FC000))));
      goto LABEL_29;
    }
    if ( v32 == 2 )
    {
      v24 = (v19 >> 21) & 0x3F;
      if ( v24 == 63 )
        v13 = -1LL;
      v25 = v17;
      if ( v24 != 63 )
        v25 = v16;
      v16 = v25;
    }
    else
    {
      v24 = (v19 >> 20) & 0x7F;
      if ( v24 == 127 )
      {
        v13 = -1LL;
        v16 = v17;
      }
    }
    if ( v14 )
    {
      if ( v24 == v35 && v29 == v20 )
        goto LABEL_47;
      v14 = 0;
    }
    if ( v24 != v35 )
      goto LABEL_29;
LABEL_47:
    if ( *a9 && !v14 )
      goto LABEL_29;
    if ( v32 == 2 )
    {
      v30 = HIWORD(v19) & 0x1F;
      *(_BYTE *)a8 = ((*v18 >> 28) & 2) != 0;
    }
    if ( (v20 & 1) != 0 )
    {
      if ( v33 && !v14 )
      {
        v13 = 0LL;
LABEL_59:
        *a9 = 1;
        v16 = -1;
        goto LABEL_64;
      }
      if ( v16 != -1 && v33 && v14 )
      {
        v13 = 0LL;
        v14 = 0;
        goto LABEL_59;
      }
LABEL_61:
      v16 = v17;
      goto LABEL_64;
    }
    if ( v33 )
      goto LABEL_61;
    *a9 = 1;
    if ( v16 != -1 )
      v13 &= -(__int64)(v14 != 0);
LABEL_64:
    if ( (v20 & 4) != 0 )
    {
      v26 = *v18;
      v27 = 0LL;
      if ( v13 != -1LL )
        v27 = v13;
      v28 = v27;
      if ( (v26 & 0x8000000) != 0 )
      {
        v14 = 1;
        v29 = v20;
        v28 = v27 << 16;
LABEL_69:
        v13 = (unsigned __int16)v26 | v28;
        goto LABEL_29;
      }
      if ( v32 == 2 )
        goto LABEL_69;
      v13 = v26 & ((-(__int64)(v14 != 0) & 0xFFFFFFFFFFF10000uLL) + 0xFFFFF) | v27;
    }
    else if ( (v20 & 0xFFFFFFFD) != 0 && (v20 & 8) != 0 )
    {
      v13 = -1LL;
    }
LABEL_29:
    ++v18;
    ++v17;
    v34 = v18;
  }
  while ( v17 < v11 );
  if ( *a9 || v16 != -1 )
  {
    *a5 = v12;
    *(_QWORD *)a6 = v13;
    *(_DWORD *)a7 = v30;
  }
  return 0LL;
}
