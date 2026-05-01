/*
 * XREFs of ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801518A4
 * Callers:
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801520EC (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180151680 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x1801520B8 (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 *     ?Pop@?$NumberStream@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@$00$0A@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAAPEBDXZ @ 0x180152694 (-Pop@-$NumberStream@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?Resize@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180152788 (-Resize@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     ?Uint@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x180152868 (-Uint@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?Double@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NN@Z @ 0x18041848C (-Double@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?Int64@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_N_J@Z @ 0x180418CBC (-Int64@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapid.c)
 *     ?Int@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NH@Z @ 0x180418D88 (-Int@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z @ 0x18041A4C0 (-StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z.c)
 *     ?Uint64@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_N_K@Z @ 0x18041A65C (-Uint64@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

__int64 __fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseNumber<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  double v3; // xmm1_8
  char v4; // r15
  __int64 v5; // rax
  __int64 v8; // rcx
  unsigned int v9; // r13d
  double v10; // xmm6_8
  int v11; // eax
  char v12; // si
  unsigned __int64 v13; // r12
  int v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // si
  _BYTE *v21; // rcx
  unsigned int v22; // r14d
  int v23; // eax
  int v24; // eax
  int v25; // eax
  char v26; // si
  _BYTE *v27; // rcx
  unsigned __int64 v28; // r14
  int v29; // r13d
  int v30; // eax
  unsigned __int64 v31; // r12
  int v32; // esi
  int v33; // eax
  int v34; // eax
  const char *v35; // rdi
  int v36; // eax
  __int64 result; // rax
  int v38; // eax
  char v39; // si
  _BYTE *v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  char v45; // si
  _BYTE *v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  __int64 v66; // r8
  char v67; // si
  unsigned __int64 v68; // rcx
  __int64 v69; // rdx
  void *v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  _BYTE *v73; // rcx
  __int64 v74; // rsi
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int64 v79; // r8
  char v80; // si
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  void *v83; // rax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  _BYTE *v86; // rcx
  int v87; // eax
  int v88; // eax
  __int64 v89; // r8
  char v90; // si
  unsigned __int64 v91; // rcx
  __int64 v92; // rdx
  void *v93; // rax
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  _BYTE *v96; // rcx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  __int64 v102; // r8
  char v103; // si
  unsigned __int64 v104; // rcx
  __int64 v105; // rdx
  void *v106; // rax
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  _BYTE *v109; // rcx
  int v110; // r12d
  int v111; // eax
  int v112; // eax
  int v113; // eax
  __int64 v114; // r8
  char v115; // si
  unsigned __int64 v116; // rcx
  __int64 v117; // rdx
  void *v118; // rax
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rdx
  _BYTE *v121; // rcx
  unsigned __int64 v122; // rcx
  __int64 v123; // rdx
  void *v124; // rax
  unsigned __int64 v125; // rcx
  unsigned __int64 v126; // rdx
  _BYTE *v127; // rcx
  char v128; // r14
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  unsigned __int64 v139; // [rsp+30h] [rbp-51h]
  int v140; // [rsp+38h] [rbp-49h]
  unsigned int v141; // [rsp+3Ch] [rbp-45h]
  unsigned __int64 v142; // [rsp+40h] [rbp-41h]
  __int64 v143; // [rsp+48h] [rbp-39h]
  _QWORD v144[2]; // [rsp+50h] [rbp-31h] BYREF
  char *v145; // [rsp+60h] [rbp-21h]
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-19h] BYREF
  char v147; // [rsp+E8h] [rbp+67h]
  char v148; // [rsp+F0h] [rbp+6Fh]
  char v150; // [rsp+100h] [rbp+7Fh]

  v4 = 0;
  v5 = a2[1];
  v144[1] = a1;
  v8 = *a2;
  v9 = 0;
  v143 = v5;
  v10 = 0.0;
  v144[0] = a2;
  LODWORD(v145) = 0;
  v150 = 0;
  v11 = std::istream::peek(v8);
  if ( (_BYTE)v11 != 45 || v11 == -1 )
  {
    v12 = 0;
  }
  else
  {
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    v12 = 1;
  }
  v13 = 0LL;
  v147 = v12;
  v14 = 0;
  v141 = 0;
  v142 = 0LL;
  v148 = 0;
  v140 = 0;
  v15 = std::istream::peek(*a2);
  v16 = *a2;
  if ( (_BYTE)v15 == 48 && v15 != -1 )
  {
    v141 = 0;
    v38 = std::istream::peek(v16);
    v39 = 0;
    if ( v38 != -1 )
      v39 = v38;
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL) > *(_QWORD *)(a1 + 32) )
      tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>((_QWORD *)a1);
    v40 = *(_BYTE **)(a1 + 24);
    if ( (unsigned __int64)(v40 + 1) > *(_QWORD *)(a1 + 32) )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v9 = 1;
    *(_QWORD *)(a1 + 24) = v40 + 1;
    LODWORD(v145) = 1;
    *v40 = v39;
LABEL_55:
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    goto LABEL_25;
  }
  v17 = std::istream::peek(v16);
  if ( v17 != -1 && (char)v17 >= 49 )
  {
    v18 = std::istream::peek(*a2);
    if ( (char)v18 <= 57 || v18 == -1 )
    {
      v19 = std::istream::peek(*a2);
      v20 = 0;
      if ( v19 != -1 )
        v20 = v19;
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL) > *(_QWORD *)(a1 + 32) )
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>((_QWORD *)a1);
      v21 = *(_BYTE **)(a1 + 24);
      if ( (unsigned __int64)(v21 + 1) > *(_QWORD *)(a1 + 32) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 24) = v21 + 1;
      v9 = 1;
      *v21 = v20;
      LODWORD(v145) = 1;
      v22 = (char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48;
      v141 = v22;
      if ( v147 )
      {
        while ( 1 )
        {
          v41 = std::istream::peek(*a2);
          if ( v41 == -1 )
            break;
          if ( (char)v41 < 48 )
            break;
          v42 = std::istream::peek(*a2);
          if ( v42 != -1 && (char)v42 > 57 )
            break;
          if ( v22 >= 0xCCCCCCC )
          {
            if ( v22 != 214748364 || (v43 = std::istream::peek(*a2), v43 != -1) && (char)v43 > 56 )
            {
LABEL_71:
              v13 = v22;
              v142 = v22;
              v148 = 1;
              break;
            }
          }
          v44 = std::istream::peek(*a2);
          v45 = 0;
          if ( v44 != -1 )
            v45 = v44;
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL) > *(_QWORD *)(a1 + 32) )
            tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>((_QWORD *)a1);
          v46 = *(_BYTE **)(a1 + 24);
          if ( (unsigned __int64)(v46 + 1) > *(_QWORD *)(a1 + 32) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          *(_QWORD *)(a1 + 24) = v46 + 1;
          ++v9;
          *v46 = v45;
          LODWORD(v145) = v9;
          ++v140;
          v22 = (char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) + 2 * (5 * v22 - 24);
          v141 = v22;
        }
      }
      else
      {
        while ( 1 )
        {
          v23 = std::istream::peek(*a2);
          if ( v23 == -1 )
            break;
          if ( (char)v23 < 48 )
            break;
          v24 = std::istream::peek(*a2);
          if ( (char)v24 > 57 && v24 != -1 )
            break;
          if ( v22 >= 0x19999999 )
          {
            if ( v22 != 429496729 )
              goto LABEL_71;
            v47 = std::istream::peek(*a2);
            if ( v47 != -1 && (char)v47 > 53 )
              goto LABEL_71;
          }
          v25 = std::istream::peek(*a2);
          v26 = 0;
          if ( v25 != -1 )
            v26 = v25;
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL) > *(_QWORD *)(a1 + 32) )
            tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>((_QWORD *)a1);
          v27 = *(_BYTE **)(a1 + 24);
          if ( (unsigned __int64)(v27 + 1) > *(_QWORD *)(a1 + 32) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          *(_QWORD *)(a1 + 24) = v27 + 1;
          ++v9;
          *v27 = v26;
          LODWORD(v145) = v9;
          ++v140;
          v22 = (char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) + 2 * (5 * v22 - 24);
          v141 = v22;
        }
      }
      v12 = v147;
      v14 = v140;
      goto LABEL_24;
    }
  }
  v48 = std::istream::peek(*a2);
  if ( v48 == -1 || (_BYTE)v48 != 73 )
  {
    v49 = std::istream::peek(*a2);
    if ( v49 == -1 || (_BYTE)v49 != 78 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      goto LABEL_190;
    }
  }
  v150 = 1;
  v50 = std::istream::peek(*a2);
  if ( v50 == -1
    || (_BYTE)v50 != 78
    || (tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2), v51 = std::istream::peek(*a2), v51 == -1)
    || (_BYTE)v51 != 97
    || (tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2), v52 = std::istream::peek(*a2), v52 == -1)
    || (_BYTE)v52 != 78 )
  {
    v53 = std::istream::peek(*a2);
    if ( v53 != -1 && (_BYTE)v53 == 73 )
    {
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      v54 = std::istream::peek(*a2);
      if ( v54 != -1 && (_BYTE)v54 == 110 )
      {
        tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
        v55 = std::istream::peek(*a2);
        if ( v55 != -1 && (_BYTE)v55 == 102 )
        {
          tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
          if ( v12 )
            v10 = DOUBLE_NInf;
          else
            v10 = DOUBLE__Inf;
          v56 = std::istream::peek(*a2);
          if ( v56 == -1 || (_BYTE)v56 != 105 )
            goto LABEL_25;
          v57 = std::istream::peek(*a2);
          if ( v57 != -1 && (_BYTE)v57 == 105 )
          {
            tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
            v58 = std::istream::peek(*a2);
            if ( v58 != -1 && (_BYTE)v58 == 110 )
            {
              tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
              v59 = std::istream::peek(*a2);
              if ( v59 != -1 && (_BYTE)v59 == 105 )
              {
                tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
                v60 = std::istream::peek(*a2);
                if ( v60 != -1 && (_BYTE)v60 == 116 )
                {
                  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
                  v61 = std::istream::peek(*a2);
                  if ( v61 != -1 && (_BYTE)v61 == 121 )
                    goto LABEL_55;
                }
              }
            }
          }
          if ( *(_DWORD *)(a1 + 48) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
LABEL_190:
          result = a2[1];
          *(_DWORD *)(a1 + 48) = 3;
          *(_QWORD *)(a1 + 56) = result;
          if ( *(_DWORD *)(a1 + 48) )
            return result;
          goto LABEL_25;
        }
      }
    }
    if ( *(_DWORD *)(a1 + 48) )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    result = a2[1];
    *(_DWORD *)(a1 + 48) = 3;
    *(_QWORD *)(a1 + 56) = result;
    if ( *(_DWORD *)(a1 + 48) )
      return result;
LABEL_24:
    if ( v148 )
    {
      if ( v12 )
      {
        while ( 1 )
        {
          v62 = std::istream::peek(*a2);
          v4 = 0;
          if ( v62 == -1 )
            break;
          if ( (char)v62 < 48 )
            break;
          v63 = std::istream::peek(*a2);
          if ( v63 != -1 && (char)v63 > 57 )
            break;
          if ( v13 >= 0xCCCCCCCCCCCCCCCLL )
          {
            if ( v13 != 0xCCCCCCCCCCCCCCCLL || (v64 = std::istream::peek(*a2), v64 != -1) && (char)v64 > 56 )
            {
              v74 = v13;
              goto LABEL_139;
            }
          }
          v65 = std::istream::peek(*a2);
          v66 = *(_QWORD *)(a1 + 24);
          v67 = 0;
          if ( v65 != -1 )
            v67 = v65;
          v68 = *(_QWORD *)(a1 + 32);
          if ( v66 + 1 > v68 )
          {
            v69 = *(_QWORD *)(a1 + 16);
            if ( v69 )
            {
              v71 = ((v68 - v69 + 1) >> 1) + v68 - v69;
            }
            else
            {
              if ( !*(_QWORD *)a1 )
              {
                v70 = operator new(1uLL);
                v66 = *(_QWORD *)(a1 + 24);
                v69 = *(_QWORD *)(a1 + 16);
                *(_QWORD *)a1 = v70;
                *(_QWORD *)(a1 + 8) = v70;
              }
              v71 = *(_QWORD *)(a1 + 40);
            }
            v72 = v66 - v69 + 1;
            if ( v71 >= v72 )
              v72 = v71;
            tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v72);
          }
          v73 = *(_BYTE **)(a1 + 24);
          if ( (unsigned __int64)(v73 + 1) > *(_QWORD *)(a1 + 32) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          *(_QWORD *)(a1 + 24) = v73 + 1;
          ++v9;
          *v73 = v67;
          LODWORD(v145) = v9;
          v140 = ++v14;
          v13 = (unsigned int)((char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48) + 10 * v13;
          v142 = v13;
        }
      }
      else
      {
        while ( 1 )
        {
          v74 = v13;
          v75 = std::istream::peek(*a2);
          v4 = 0;
          if ( v75 == -1 )
            break;
          if ( (char)v75 < 48 )
            break;
          v76 = std::istream::peek(*a2);
          if ( v76 != -1 && (char)v76 > 57 )
            break;
          if ( v13 >= 0x1999999999999999LL )
          {
            if ( v13 != 0x1999999999999999LL || (v77 = std::istream::peek(*a2), v77 != -1) && (char)v77 > 53 )
            {
LABEL_139:
              v4 = 1;
              if ( v74 < 0 )
                v10 = (double)(int)(v74 & 1 | ((unsigned __int64)v74 >> 1))
                    + (double)(int)(v74 & 1 | ((unsigned __int64)v74 >> 1));
              else
                v10 = (double)(int)v74;
              while ( 1 )
              {
                v87 = std::istream::peek(*a2);
                if ( v87 == -1 )
                  break;
                if ( (char)v87 < 48 )
                  break;
                result = std::istream::peek(*a2);
                if ( (_DWORD)result != -1 && (char)result > 57 )
                  break;
                if ( v10 >= 1.797693134862316e307 )
                {
                  if ( *(_DWORD *)(a1 + 48) )
                  {
                    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
                    throw (std::exception *)pExceptionObject;
                  }
                  *(_DWORD *)(a1 + 48) = 13;
                  *(_QWORD *)(a1 + 56) = v143;
                  if ( *(_DWORD *)(a1 + 48) )
                    return result;
                }
                v88 = std::istream::peek(*a2);
                v89 = *(_QWORD *)(a1 + 24);
                v90 = 0;
                if ( v88 != -1 )
                  v90 = v88;
                v91 = *(_QWORD *)(a1 + 32);
                if ( v89 + 1 > v91 )
                {
                  v92 = *(_QWORD *)(a1 + 16);
                  if ( v92 )
                  {
                    v94 = ((v91 - v92 + 1) >> 1) + v91 - v92;
                  }
                  else
                  {
                    if ( !*(_QWORD *)a1 )
                    {
                      v93 = operator new(1uLL);
                      v89 = *(_QWORD *)(a1 + 24);
                      v92 = *(_QWORD *)(a1 + 16);
                      *(_QWORD *)a1 = v93;
                      *(_QWORD *)(a1 + 8) = v93;
                    }
                    v94 = *(_QWORD *)(a1 + 40);
                  }
                  v95 = v89 - v92 + 1;
                  if ( v94 >= v95 )
                    v95 = v94;
                  tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v95);
                }
                v96 = *(_BYTE **)(a1 + 24);
                if ( (unsigned __int64)(v96 + 1) > *(_QWORD *)(a1 + 32) )
                {
                  std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
                  throw (std::exception *)pExceptionObject;
                }
                *(_QWORD *)(a1 + 24) = v96 + 1;
                ++v9;
                *v96 = v90;
                LODWORD(v145) = v9;
                v10 = v10 * 10.0 + (double)((char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48);
              }
              goto LABEL_25;
            }
          }
          v78 = std::istream::peek(*a2);
          v79 = *(_QWORD *)(a1 + 24);
          v80 = 0;
          if ( v78 != -1 )
            v80 = v78;
          v81 = *(_QWORD *)(a1 + 32);
          if ( v79 + 1 > v81 )
          {
            v82 = *(_QWORD *)(a1 + 16);
            if ( v82 )
            {
              v84 = ((v81 - v82 + 1) >> 1) + v81 - v82;
            }
            else
            {
              if ( !*(_QWORD *)a1 )
              {
                v83 = operator new(1uLL);
                v79 = *(_QWORD *)(a1 + 24);
                v82 = *(_QWORD *)(a1 + 16);
                *(_QWORD *)a1 = v83;
                *(_QWORD *)(a1 + 8) = v83;
              }
              v84 = *(_QWORD *)(a1 + 40);
            }
            v85 = v79 - v82 + 1;
            if ( v84 >= v85 )
              v85 = v84;
            tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v85);
          }
          v86 = *(_BYTE **)(a1 + 24);
          if ( (unsigned __int64)(v86 + 1) > *(_QWORD *)(a1 + 32) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          *(_QWORD *)(a1 + 24) = v86 + 1;
          ++v9;
          *v86 = v80;
          LODWORD(v145) = v9;
          v140 = ++v14;
          v13 = (unsigned int)((char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48) + 10 * v13;
          v142 = v13;
        }
      }
    }
    goto LABEL_25;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  v10 = DOUBLE_NaN;
LABEL_25:
  v28 = v9;
  v29 = 0;
  v30 = std::istream::peek(*a2);
  if ( (_BYTE)v30 == 46 && v30 != -1 )
  {
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    v97 = std::istream::peek(*a2);
    if ( v97 == -1 || (char)v97 < 48 || (v98 = std::istream::peek(*a2), v98 != -1) && (char)v98 > 57 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      result = a2[1];
      *(_DWORD *)(a1 + 48) = 14;
      *(_QWORD *)(a1 + 56) = result;
      if ( *(_DWORD *)(a1 + 48) )
        return result;
    }
    if ( !v4 )
    {
      if ( !v148 )
      {
        v13 = v141;
        v142 = v141;
      }
      while ( 1 )
      {
        v99 = std::istream::peek(*a2);
        if ( v99 == -1 )
          break;
        if ( (char)v99 < 48 )
          break;
        v100 = std::istream::peek(*a2);
        if ( v100 != -1 && (char)v100 > 57 )
          break;
        if ( v13 > 0x1FFFFFFFFFFFFFLL )
          break;
        v101 = std::istream::peek(*a2);
        v102 = *(_QWORD *)(a1 + 24);
        v103 = 0;
        if ( v101 != -1 )
          v103 = v101;
        v104 = *(_QWORD *)(a1 + 32);
        if ( v102 + 1 > v104 )
        {
          v105 = *(_QWORD *)(a1 + 16);
          if ( v105 )
          {
            v107 = ((v104 - v105 + 1) >> 1) + v104 - v105;
          }
          else
          {
            if ( !*(_QWORD *)a1 )
            {
              v106 = operator new(1uLL);
              v102 = *(_QWORD *)(a1 + 24);
              v105 = *(_QWORD *)(a1 + 16);
              *(_QWORD *)a1 = v106;
              *(_QWORD *)(a1 + 8) = v106;
            }
            v107 = *(_QWORD *)(a1 + 40);
          }
          v108 = v102 - v105 + 1;
          if ( v107 >= v108 )
            v108 = v107;
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v108);
        }
        v109 = *(_BYTE **)(a1 + 24);
        if ( (unsigned __int64)(v109 + 1) > *(_QWORD *)(a1 + 32) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        LODWORD(v145) = (_DWORD)v145 + 1;
        *(_QWORD *)(a1 + 24) = v109 + 1;
        *v109 = v103;
        --v29;
        v13 = (unsigned int)((char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48) + 10 * v13;
        v142 = v13;
        if ( v13 )
          ++v140;
      }
      if ( (v13 & 0x8000000000000000uLL) != 0LL )
        v10 = (double)(int)(v13 & 1 | (v13 >> 1)) + (double)(int)(v13 & 1 | (v13 >> 1));
      else
        v10 = (double)(int)v13;
      v4 = 1;
    }
    v110 = (int)v145;
    while ( 1 )
    {
      v111 = std::istream::peek(*a2);
      if ( v111 == -1 )
        break;
      if ( (char)v111 < 48 )
        break;
      v112 = std::istream::peek(*a2);
      if ( v112 != -1 && (char)v112 > 57 )
        break;
      v113 = std::istream::peek(*a2);
      v114 = *(_QWORD *)(a1 + 24);
      v115 = 0;
      if ( v140 >= 17 )
      {
        if ( v113 != -1 )
          v115 = v113;
        v122 = *(_QWORD *)(a1 + 32);
        if ( v114 + 1 > v122 )
        {
          v123 = *(_QWORD *)(a1 + 16);
          if ( v123 )
          {
            v125 = ((v122 - v123 + 1) >> 1) + v122 - v123;
          }
          else
          {
            if ( !*(_QWORD *)a1 )
            {
              v124 = operator new(1uLL);
              v114 = *(_QWORD *)(a1 + 24);
              v123 = *(_QWORD *)(a1 + 16);
              *(_QWORD *)a1 = v124;
              *(_QWORD *)(a1 + 8) = v124;
            }
            v125 = *(_QWORD *)(a1 + 40);
          }
          v126 = v114 - v123 + 1;
          if ( v125 >= v126 )
            v126 = v125;
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v126);
        }
        v127 = *(_BYTE **)(a1 + 24);
        if ( (unsigned __int64)(v127 + 1) > *(_QWORD *)(a1 + 32) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 24) = v127 + 1;
        ++v110;
        *v127 = v115;
        LODWORD(v145) = v110;
        tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      }
      else
      {
        if ( v113 != -1 )
          v115 = v113;
        v116 = *(_QWORD *)(a1 + 32);
        if ( v114 + 1 > v116 )
        {
          v117 = *(_QWORD *)(a1 + 16);
          if ( v117 )
          {
            v119 = ((v116 - v117 + 1) >> 1) + v116 - v117;
          }
          else
          {
            if ( !*(_QWORD *)a1 )
            {
              v118 = operator new(1uLL);
              v114 = *(_QWORD *)(a1 + 24);
              v117 = *(_QWORD *)(a1 + 16);
              *(_QWORD *)a1 = v118;
              *(_QWORD *)(a1 + 8) = v118;
            }
            v119 = *(_QWORD *)(a1 + 40);
          }
          v120 = v114 - v117 + 1;
          if ( v119 >= v120 )
            v120 = v119;
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v120);
        }
        v121 = *(_BYTE **)(a1 + 24);
        if ( (unsigned __int64)(v121 + 1) > *(_QWORD *)(a1 + 32) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 24) = v121 + 1;
        ++v110;
        *v121 = v115;
        LODWORD(v145) = v110;
        --v29;
        v10 = (double)((char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48) + v10 * 10.0;
        if ( v10 > 0.0 )
          ++v140;
      }
    }
  }
  v31 = v28;
  v32 = 0;
  v33 = std::istream::peek(*a2);
  if ( (_BYTE)v33 != 101 || v33 == -1 )
  {
    v34 = std::istream::peek(*a2);
    if ( (_BYTE)v34 != 69 || v34 == -1 )
      goto LABEL_28;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  if ( !v4 )
    v4 = 1;
  v128 = 0;
  v129 = std::istream::peek(*a2);
  if ( v129 == -1 || (_BYTE)v129 != 43 )
  {
    v130 = std::istream::peek(*a2);
    if ( v130 != -1 && (_BYTE)v130 == 45 )
    {
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      v128 = 1;
    }
  }
  else
  {
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  }
  v131 = std::istream::peek(*a2);
  if ( v131 != -1 && (char)v131 >= 48 )
  {
    v132 = std::istream::peek(*a2);
    if ( v132 == -1 || (char)v132 <= 57 )
    {
      v32 = (char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) - 48;
      if ( !v128 )
      {
        while ( 1 )
        {
          v133 = std::istream::peek(*a2);
          if ( v133 == -1 )
            break;
          if ( (char)v133 < 48 )
            break;
          v134 = std::istream::peek(*a2);
          if ( v134 != -1 && (char)v134 > 57 )
            break;
          v32 = (char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) + 2 * (5 * v32 - 24);
          if ( v32 > 308 - v29 )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
              throw (std::exception *)pExceptionObject;
            }
            result = v143;
            *(_DWORD *)(a1 + 48) = 13;
            *(_QWORD *)(a1 + 56) = v143;
            if ( *(_DWORD *)(a1 + 48) )
              return result;
          }
        }
LABEL_28:
        v35 = (const char *)(unsigned int)v145;
        v36 = tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::NumberStream<tip_rapidjson::BasicIStreamWrapper<std::istream>,1,0>::Pop(v144);
        if ( v4 )
        {
          LODWORD(v139) = v32;
          tip_rapidjson::internal::StrtodFullPrecision(0LL, v3, v36, v35, v31, v139, v140);
        }
        else if ( !v150 )
        {
          if ( v148 )
          {
            if ( v147 )
              result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Int64(
                         a3,
                         -(__int64)v142);
            else
              result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Uint64(
                         a3,
                         v142);
          }
          else if ( v147 )
          {
            result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Int(
                       a3,
                       -v141);
          }
          else
          {
            result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Uint(
                       a3,
                       v141);
          }
LABEL_33:
          if ( !(_BYTE)result )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
              throw (std::exception *)pExceptionObject;
            }
            result = v143;
            *(_DWORD *)(a1 + 48) = 16;
            *(_QWORD *)(a1 + 56) = v143;
          }
          return result;
        }
        result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Double(a3);
        goto LABEL_33;
      }
      while ( 1 )
      {
        v135 = std::istream::peek(*a2);
        if ( v135 == -1 )
          break;
        if ( (char)v135 < 48 )
          break;
        v136 = std::istream::peek(*a2);
        if ( v136 != -1 && (char)v136 > 57 )
          break;
        v32 = (char)tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2) + 2 * (5 * v32 - 24);
        if ( v32 >= 214748364 )
        {
          while ( 1 )
          {
            v137 = std::istream::peek(*a2);
            if ( v137 == -1 )
              break;
            if ( (char)v137 < 48 )
              break;
            v138 = std::istream::peek(*a2);
            if ( v138 != -1 && (char)v138 > 57 )
              break;
            tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
          }
        }
      }
LABEL_296:
      v32 = -v32;
      goto LABEL_28;
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  result = a2[1];
  *(_DWORD *)(a1 + 48) = 15;
  *(_QWORD *)(a1 + 56) = result;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    if ( !v128 )
      goto LABEL_28;
    goto LABEL_296;
  }
  return result;
}
