/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C00221E8
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C0022134 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C00189C4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C0021DF4 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C00225C4 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C0022720 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C0022D5C (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C0022FC4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C0022FF0 (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C00732F8 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00733D0 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C0073430 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0073988 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 */

int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  int result; // eax
  unsigned __int16 v7; // di
  int v8; // r12d
  int v9; // r15d
  unsigned __int16 v10; // si
  __int64 v11; // rbx
  struct _EDID_V1_CEA_861_DATA_HEADER *v12; // r10
  unsigned __int16 v13; // r14
  struct _VideoModeDescriptor *v14; // r13
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // di
  bool i; // cf
  bool DetTimParser; // al
  __int64 v19; // rax
  _WORD *v20; // r10
  __int16 v21; // r11
  int v22; // r11d
  unsigned __int16 v23; // di
  unsigned int v24; // esi
  struct _EDID_V1_CEA_861_DATA_HEADER *v25; // r15
  __int64 v26; // rcx
  int v27; // r9d
  struct _EDID_V1_CEA_861_DATA_HEADER *v28; // rax
  unsigned __int16 v29; // si
  int v30; // eax
  MonDescParser::EDID_MODES *v31; // r15
  __int64 *v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  __int64 v35; // r10
  int v36; // ecx
  __int64 v37; // r8
  unsigned __int16 j; // di
  unsigned int v39; // edi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v41; // r15
  const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *v42; // r12
  unsigned int k; // esi
  unsigned __int8 v44; // [rsp+48h] [rbp-29h]
  unsigned __int16 v45; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int16 v46[2]; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int16 v47; // [rsp+54h] [rbp-1Dh] BYREF
  unsigned __int16 v48; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int16 v49[4]; // [rsp+60h] [rbp-11h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v50; // [rsp+68h] [rbp-9h] BYREF
  int v51; // [rsp+70h] [rbp-1h]
  int v52; // [rsp+74h] [rbp+3h]
  struct _EDID_V1_CEA_861_DATA_HEADER *v53; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v54; // [rsp+80h] [rbp+Fh]

  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v50 = 0LL;
  v47 = 0;
  v48 = 0;
  v49[0] = 0;
  v46[0] = 0;
  v45 = 0;
  v44 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, &v47, &v48, v49, &v50, v46, &v45);
  if ( result >= 0 )
  {
    v7 = v47;
    if ( v47 > 0x11u )
      return -1071841278;
    v8 = v48;
    if ( v48 > 8u )
      return -1071841278;
    v9 = v49[0];
    if ( v49[0] > 6u )
      return -1071841278;
    v10 = v46[0];
    if ( v46[0] > 4u )
      return -1071841278;
    v11 = *a2;
    if ( !(_WORD)v11 )
    {
      *a2 = v47 + v48 + v49[0] + v46[0] + v45;
      return -1073741789;
    }
    memset(a4, 0, 56 * v11);
    v12 = 0LL;
    *a3 = -1;
    v13 = 0;
    v14 = a4;
    if ( (unsigned __int16)v11 < v7 )
    {
      v44 = 1;
      v7 = v11;
    }
    if ( !v7 )
    {
LABEL_18:
      if ( (unsigned __int16)v11 < v10 )
      {
        v44 = 1;
        v10 = v11;
      }
      v15 = 0;
      v16 = 0;
      for ( i = v10 != 0; ; i = v16 < v10 )
      {
        v46[0] = v15;
        if ( !i || v15 >= 4u )
          break;
        *(_QWORD *)v49 = 0LL;
        DetTimParser = MonDescParser::EDID_PARSER::GetDetTimParser(
                         *(MonDescParser::EDID_PARSER **)this,
                         v15,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v49);
        v12 = 0LL;
        if ( DetTimParser )
        {
          result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                     this,
                     (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v49,
                     v14);
          if ( result == -1071841271 )
          {
            v12 = 0LL;
          }
          else
          {
            if ( result < 0 )
              return result;
            if ( !v16 )
              *a3 = v13;
            if ( v13
              && (v19 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v13], v14), v19 != -1) )
            {
              if ( v21 == v16 )
                *v20 = v19;
            }
            else
            {
              LOWORD(v11) = v11 - 1;
              ++v16;
              ++v13;
              ++v14;
            }
            v12 = 0LL;
          }
        }
        v15 = v46[0] + 1;
      }
      if ( (unsigned __int16)v11 < (unsigned __int16)v8 )
      {
        LOWORD(v8) = v11;
        LOWORD(v9) = 0;
      }
      else
      {
        if ( (unsigned __int16)v11 >= (unsigned int)(v8 + v9) )
          goto LABEL_35;
        LOWORD(v9) = v11 - v8;
      }
      v44 = 1;
LABEL_35:
      v22 = (unsigned __int16)v8;
      v23 = 0;
      v24 = (unsigned __int16)v8 + (unsigned __int16)v9;
      if ( v24 )
      {
        v25 = v50;
        while ( 1 )
        {
          v26 = **(_QWORD **)this;
          v27 = *(unsigned __int8 *)(v26 + 19);
          v51 = *(unsigned __int8 *)(v26 + 18);
          v52 = v27;
          if ( v23 >= (unsigned __int16)v8 )
            v28 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v25 + 2 * (v23 - (__int64)v22));
          else
            v28 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(v26 + 38 + 2LL * v23);
          v50 = v28;
          result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                     this,
                     (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v50,
                     v23 >= (unsigned __int16)v8,
                     v14);
          v12 = 0LL;
          if ( result != -1071841276 )
          {
            if ( result < 0 )
              return result;
            if ( !v13 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v13], v14) == -1 )
            {
              LOWORD(v11) = v11 - 1;
              ++v13;
              ++v14;
            }
          }
          if ( ++v23 >= v24 )
            break;
          v22 = (unsigned __int16)v8;
        }
      }
      v29 = (unsigned __int16)v12;
      v30 = v44;
      v31 = this;
      if ( (unsigned __int16)v11 < v45 )
        v30 = 1;
      *(_DWORD *)v49 = v30;
      v53 = v12;
      v54 = (unsigned int)v12;
      v32 = *(__int64 **)this;
      v45 = (unsigned __int16)v12;
      *(_DWORD *)v46 = *((_DWORD *)v32 + 20);
      if ( *(_DWORD *)v46 )
      {
        v33 = (unsigned int)v12;
        do
        {
          if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v31, v33) == 2 )
          {
            v36 = 0;
            v37 = v35 + 8LL * *(_QWORD *)(v35 + 80);
            while ( v35 != v37 )
            {
              if ( v36 == v34 )
                goto LABEL_71;
              ++v36;
              v35 += 8LL;
            }
            v35 = 0LL;
LABEL_71:
            MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
              (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v53,
              *(union _EDID_V1_BLOCK **)v35);
            v12 = 0LL;
            v50 = 0LL;
            for ( j = 0;
                  (_WORD)v11
               && MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                    (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v53,
                    j,
                    (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v50);
                  ++j )
            {
              result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                         v31,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v50,
                         v14);
              v12 = 0LL;
              if ( result != -1071841271 )
              {
                if ( result < 0 )
                  return result;
                if ( !v13
                  || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v13], v14) == -1 )
                {
                  ++v13;
                  LOWORD(v11) = v11 - 1;
                  ++v14;
                }
              }
            }
            v39 = (unsigned int)v12;
            if ( (_WORD)v11 )
            {
              do
              {
                if ( v39 >= v54 )
                  break;
                v50 = v12;
                DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                              (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v53,
                              v39,
                              &v50);
                v12 = 0LL;
                if ( DataBlock )
                {
                  v41 = v50;
                  if ( (*(_BYTE *)v50 & 0xE0) == 0x40 )
                  {
                    v42 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v50 + 1);
                    for ( k = 0; (_WORD)v11 && k < (*(_BYTE *)v41 & 0x1Fu); ++k )
                    {
                      result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v42, v14);
                      v12 = 0LL;
                      if ( result != -1071841278 )
                      {
                        if ( result < 0 )
                          return result;
                        ++v13;
                        LOWORD(v11) = v11 - 1;
                        ++v14;
                      }
                      v42 = (const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *)((char *)v42 + 1);
                    }
                  }
                }
                ++v39;
              }
              while ( (_WORD)v11 );
              v29 = v45;
              v31 = this;
            }
          }
          else
          {
            LOBYTE(v12) = 0;
          }
          v33 = ++v29;
          v45 = v29;
        }
        while ( (unsigned int)v29 < *(_DWORD *)v46 );
      }
      *a2 = v13;
      if ( LOBYTE(v49[0]) == (_BYTE)v12 )
        return 0;
      return -1073741789;
    }
    result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v7, a4);
    v12 = 0LL;
    if ( result >= 0 )
    {
      LOWORD(v11) = v11 - v7;
      v14 = &a4[v7];
      v13 = v7;
      goto LABEL_18;
    }
  }
  return result;
}
