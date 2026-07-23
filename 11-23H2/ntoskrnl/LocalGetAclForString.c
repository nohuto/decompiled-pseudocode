/*
 * XREFs of LocalGetAclForString @ 0x14069C8EC
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     RtlGetAce @ 0x140227B70 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 *     wcstoul @ 0x1403DC0D0 (wcstoul.c)
 *     wcsncpy_s @ 0x1403E0110 (wcsncpy_s.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     LookupAccessMaskInTable @ 0x14069DD6C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x14069DE04 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x14069DF28 (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x14069E1D0 (LocalGetSidForString.c)
 *     LocalGetSDDLDeliminator @ 0x14069E3C0 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x14069E42C (LocalGetAceCount.c)
 *     RtlCopySid @ 0x140715180 (RtlCopySid.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x140736930 (RtlAddAce.c)
 *     RtlNtStatusToDosError @ 0x1407AA570 (RtlNtStatusToDosError.c)
 *     LookupAceFlagsInTable @ 0x140840374 (LookupAceFlagsInTable.c)
 *     SddlAddMandatoryAce @ 0x1408A6A82 (SddlAddMandatoryAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409BAFE0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409BB040 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409BB330 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409D26E0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D291C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D2A7C (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1409D2C68 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1409D4B14 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D5204 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetAclForString(wchar_t *Str, char a2, PACL *a3, wchar_t **a4)
{
  wchar_t *v7; // r12
  unsigned int AceCount; // esi
  __int64 result; // rax
  wchar_t *v10; // rax
  __int64 v11; // rax
  wchar_t *v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // edi
  ACL *v15; // rax
  __int16 v16; // cx
  PACL v17; // rax
  PVOID v18; // r13
  ACCESS_MASK v19; // edi
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rax
  wchar_t *v23; // rbx
  wchar_t *v24; // rbx
  wchar_t **v25; // r12
  wchar_t v26; // ax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edi
  PGUID i; // rdi
  unsigned int SidForString; // eax
  _WORD *v32; // rcx
  _WORD *j; // rbx
  int v34; // edx
  unsigned int v35; // r15d
  unsigned int v36; // edx
  unsigned int v37; // ebx
  unsigned int v38; // edi
  ULONG v39; // r13d
  ULONG v40; // eax
  int v41; // r8d
  NTSTATUS v42; // eax
  int v43; // ebx
  PVOID v44; // rdi
  PACL v45; // rax
  __int64 v46; // rax
  ACL *v47; // rax
  unsigned int v48; // eax
  bool v49; // cf
  int v50; // edx
  unsigned __int64 v51; // rcx
  unsigned int v52; // edi
  ACL *v53; // rax
  PACL v54; // rcx
  ACL *v55; // r15
  unsigned int v56; // ebx
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  unsigned int v59; // ebx
  unsigned int v60; // ebx
  int v61; // edx
  unsigned int v62; // ebx
  unsigned int v63; // ebx
  unsigned int v64; // ebx
  unsigned int v65; // ebx
  unsigned int v66; // ebx
  unsigned int v67; // ebx
  int v68; // eax
  int v69; // ecx
  char *v70; // rdi
  char v71; // al
  PVOID v72; // r15
  PVOID v73; // rcx
  ULONG v74; // eax
  size_t v75; // rbx
  ULONG v76; // eax
  PVOID v77; // rdx
  ACCESS_MASK v78; // r9d
  PVOID v79; // r15
  PVOID v80; // rcx
  ULONG v81; // eax
  _WORD *v82; // r15
  char v83; // al
  size_t v84; // rbx
  int v85; // edi
  ULONG v86; // eax
  ULONG v87; // eax
  bool v88; // zf
  ULONG v89; // eax
  PGUID ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  PGUID InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  char InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  PSID v93; // [rsp+30h] [rbp-D0h]
  int AuditSuccess; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v95; // [rsp+50h] [rbp-B0h]
  char v96; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v97; // [rsp+52h] [rbp-AEh]
  ACCESS_MASK AccessMask; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  size_t v100; // [rsp+60h] [rbp-A0h] BYREF
  int v101; // [rsp+68h] [rbp-98h]
  PVOID Src; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v103; // [rsp+78h] [rbp-88h] BYREF
  PGUID v104; // [rsp+80h] [rbp-80h]
  _WORD *v105; // [rsp+88h] [rbp-78h] BYREF
  PGUID p_Guid; // [rsp+90h] [rbp-70h]
  int v107; // [rsp+98h] [rbp-68h]
  unsigned int Size; // [rsp+9Ch] [rbp-64h]
  int Size_4; // [rsp+A0h] [rbp-60h]
  PVOID v110; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sid; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t *EndPtr; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Ace; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t **v114; // [rsp+C8h] [rbp-38h]
  int v115; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v116; // [rsp+D4h] [rbp-2Ch]
  GUID Guid; // [rsp+D8h] [rbp-28h] BYREF
  GUID v118; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v114 = a4;
  v103 = 0;
  EndPtr = 0LL;
  v96 = 0;
  P = 0LL;
  v7 = Str;
  Sid = 0LL;
  AceCount = 0;
  Src = 0LL;
  v100 = 0LL;
  v110 = 0LL;
  Ace = 0LL;
  v105 = 0LL;
  v115 = 0;
  v116 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v7 + 17;
    goto LABEL_78;
  }
  v107 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v7);
  if ( (_DWORD)result )
    return result;
  v10 = *a4;
  if ( *a4 == v7 )
    return 87LL;
  if ( v10 )
  {
    v12 = v10 - 1;
  }
  else
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v7[v11] );
    v12 = &v7[v11];
  }
  *a4 = v12;
  AceCount = LocalGetAceCount(v7, v12, &v103);
  if ( AceCount )
    goto LABEL_78;
  v13 = v103;
  if ( !v103 )
  {
    v47 = (ACL *)SddlpAlloc(8uLL);
    *a3 = v47;
    if ( v47 )
    {
      v47->AclRevision = 2;
      (*a3)->Sbz1 = 0;
      (*a3)->AclSize = 8;
      (*a3)->AceCount = 0;
      (*a3)->Sbz2 = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v14 = 84 * v103 + 8;
  if ( v14 > 0xFFFF )
    v14 = 0xFFFF;
  Size = v14;
  v15 = (ACL *)SddlpAlloc(v14);
  *a3 = v15;
  if ( !v15 )
  {
    AceCount = 8;
    goto LABEL_78;
  }
  v15->AclRevision = 2;
  v16 = 8;
  v17 = *a3;
  Size_4 = 0;
  v101 = 8;
  v17->Sbz1 = 0;
  (*a3)->AclSize = v14;
  (*a3)->AceCount = 0;
  (*a3)->Sbz2 = 0;
  v18 = P;
  if ( !v13 )
  {
LABEL_75:
    v45 = *a3;
    if ( AceCount )
      goto LABEL_231;
    v45->AclSize = v16;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v95 = 0;
    AccessMask = 0;
    Guid = 0LL;
    v19 = 0;
    p_Guid = 0LL;
    v118 = 0LL;
    v104 = 0LL;
    while ( *v7 == 32 )
      ++v7;
    if ( *v7 == 40 )
    {
      do
        ++v7;
      while ( *v7 == 32 );
    }
    v20 = LookupAceTypeInTable(v7);
    if ( !v20 )
    {
      AceCount = 1804;
      goto LABEL_230;
    }
    v21 = *(unsigned __int8 *)(v20 + 12);
    v22 = *(unsigned int *)(v20 + 8);
    v97 = v21;
    v23 = &v7[v22];
    if ( *v23 != 59 && *v23 != 32 )
    {
LABEL_101:
      AceCount = 1336;
LABEL_230:
      v45 = *a3;
      goto LABEL_231;
    }
    v24 = v23 + 1;
    if ( (unsigned __int8)(v21 - 5) <= 3u || (_BYTE)v21 == 11 )
      (*a3)->AclRevision = 4;
    while ( *v24 == 32 )
      ++v24;
    v25 = v114;
    while ( v24 != *v25 )
    {
      if ( *v24 == 59 )
        goto LABEL_29;
      for ( ; *v24 == 32; ++v24 )
        ;
      v46 = LookupAceFlagsInTable(v24);
      if ( !v46 )
      {
        AceCount = 1004;
        goto LABEL_230;
      }
      v95 |= *(_BYTE *)(v46 + 12);
      v24 += *(unsigned int *)(v46 + 8);
    }
    while ( 1 )
    {
      v26 = *v24;
      if ( *v24 != 32 )
        break;
LABEL_29:
      ++v24;
    }
    while ( v26 != 59 )
    {
      if ( v26 == 32 )
      {
        do
          ++v24;
        while ( *v24 == 32 );
      }
      v27 = LookupAccessMaskInTable(v24);
      if ( v27 )
      {
        v19 |= *(_DWORD *)(v27 + 12);
        v28 = *(unsigned int *)(v27 + 8);
        AccessMask = v19;
        v24 += v28;
      }
      else
      {
        v19 |= wcstoul(v24, &EndPtr, 0);
        AccessMask = v19;
        if ( EndPtr == v24 )
          goto LABEL_235;
        v24 = EndPtr;
      }
      v26 = *v24;
    }
    v29 = 0;
LABEL_37:
    ++v24;
    do
    {
      if ( *v24 != 59 )
      {
        if ( *v24 == 32 )
          goto LABEL_37;
        if ( (unsigned __int8)(v21 - 5) > 3u && (_BYTE)v21 != 11 )
          goto LABEL_235;
        wcsncpy_s(Dst, 0x25uLL, v24, 0x24uLL);
        Dst[36] = 0;
        if ( v29 )
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v118) )
            goto LABEL_118;
          v104 = &v118;
        }
        else
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
            goto LABEL_118;
          p_Guid = &Guid;
        }
        v24 += 36;
        if ( *v24 != 59 && *v24 != 32 )
        {
LABEL_118:
          AceCount = 1705;
          goto LABEL_238;
        }
      }
      ++v24;
      ++v29;
    }
    while ( v29 < 2 );
    for ( i = p_Guid; *v24 == 32; ++v24 )
      ;
    SidForString = LocalGetSidForString(
                     v24,
                     &Sid,
                     &v105,
                     &v96,
                     ObjectTypeGuid,
                     InheritedObjectTypeGuid,
                     v93,
                     AuditSuccess);
    v18 = Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_74;
    v32 = v105;
    if ( !v105 )
      goto LABEL_235;
    P = Sid;
    if ( !Sid )
      goto LABEL_235;
    for ( j = v105; *j == 32; ++j )
      ;
    if ( (unsigned __int8)v21 > 0x15u || (v34 = 2371072, !_bittest(&v34, v21)) )
    {
      v35 = v100;
      v36 = HIDWORD(v100);
      goto LABEL_48;
    }
    if ( *j == 59 )
    {
      do
        ++j;
      while ( *j == 32 );
      if ( *j == 40 )
      {
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        LODWORD(v100) = 0;
        if ( v110 )
        {
          ExFreePoolWithTag(v110, 0);
          v110 = 0LL;
        }
        HIDWORD(v100) = 0;
        if ( (_BYTE)v21 == 18 )
        {
          AceCount = LocalGetRelativeAttributeForString(
                       (_DWORD)j,
                       (unsigned int)&v105,
                       (unsigned int)&v110,
                       (unsigned int)&v100 + 4,
                       0LL,
                       0,
                       0,
                       0);
          if ( AceCount )
            goto LABEL_238;
        }
        else
        {
          LOBYTE(AuditSuccess) = 0;
          v93 = 0LL;
          InheritedObjectTypeGuid = 0LL;
          ObjectTypeGuid = 0LL;
          AceCount = LocalGetConditionForString(j, &v105, &Src, &v100);
        }
        v32 = v105;
      }
      else
      {
        v32 = j;
        v105 = j;
      }
    }
    v35 = v100;
    v36 = HIDWORD(v100);
    if ( !v100 )
      goto LABEL_235;
    if ( AceCount )
      goto LABEL_238;
LABEL_48:
    while ( *v32 == 32 )
      v105 = ++v32;
    if ( *v32 != 41 )
    {
LABEL_235:
      AceCount = 1336;
      goto LABEL_238;
    }
    v37 = v97;
    v7 = v32 + 1;
    if ( v97 > 9u )
    {
      if ( v97 != 10 )
      {
        if ( v97 == 11 )
        {
          v50 = i != 0LL ? 48 : 32;
          if ( !v104 )
            v50 = i != 0LL ? 32 : 16;
          if ( v35 > 0xFFFFFFFC )
          {
LABEL_239:
            AceCount = 534;
            goto LABEL_78;
          }
          v48 = (v35 + 3) & 0xFFFFFFFC;
          v38 = v48 + v50;
          goto LABEL_158;
        }
        if ( v97 != 13 )
        {
          switch ( v97 )
          {
            case 0x11u:
              goto LABEL_53;
            case 0x12u:
              v38 = v36 + 12;
              v49 = v36 + 12 < v36;
LABEL_159:
              if ( v49 )
              {
                AceCount = 534;
                goto LABEL_230;
              }
              goto LABEL_54;
            case 0x13u:
            case 0x14u:
LABEL_53:
              v38 = 12;
              goto LABEL_54;
          }
          if ( v97 != 21 )
            goto LABEL_101;
        }
      }
LABEL_156:
      if ( v35 > 0xFFFFFFFC )
        goto LABEL_239;
      v48 = (v35 + 3) & 0xFFFFFFFC;
      v38 = v48 + 12;
LABEL_158:
      v49 = v38 < v48;
      goto LABEL_159;
    }
    if ( v97 == 9 )
      goto LABEL_156;
    if ( !v97 || v97 == 1 || v97 == 2 || v97 == 3 )
      goto LABEL_53;
    if ( v97 != 5 && v97 != 6 && (unsigned int)v97 - 7 > 1 )
      goto LABEL_101;
    v38 = i != 0LL ? 32 : 16;
    if ( v104 )
      v38 += 16;
LABEL_54:
    v39 = v38 + RtlLengthSid(v18) - 4;
    if ( v39 < v38 || (v40 = v39 + v101, v101 = v40, v40 < v39) )
    {
LABEL_229:
      v18 = P;
      AceCount = 534;
      goto LABEL_230;
    }
    if ( v40 > Size )
      break;
LABEL_57:
    if ( v37 <= 0xA )
    {
      if ( v37 != 10 )
      {
        if ( !v37 )
        {
          InheritedObjectTypeGuida = 0;
LABEL_61:
          v41 = v95;
LABEL_62:
          v42 = RtlpAddKnownAce((int)*a3, 2, v41, AccessMask, P, InheritedObjectTypeGuida);
LABEL_63:
          v43 = v42;
LABEL_64:
          if ( v43 < 0 )
            goto LABEL_247;
          v44 = P;
          goto LABEL_66;
        }
        v56 = v37 - 1;
        if ( !v56 )
        {
          InheritedObjectTypeGuida = 1;
          goto LABEL_61;
        }
        v57 = v56 - 1;
        if ( !v57 )
        {
          InheritedObjectTypeGuida = 2;
          v61 = v95 & 0x3F | 0x40;
          if ( (v95 & 0x40) == 0 )
            v61 = v95 & 0x3F;
          v41 = v61 | 0x80;
          if ( (v95 & 0x80u) == 0 )
            v41 = v61;
          goto LABEL_62;
        }
        v58 = v57 - 3;
        if ( !v58 )
        {
          v42 = RtlAddAccessAllowedObjectAce(*a3, 4u, v95, AccessMask, p_Guid, v104, P);
          goto LABEL_63;
        }
        v59 = v58 - 1;
        if ( !v59 )
        {
          v42 = RtlAddAccessDeniedObjectAce(*a3, 4u, v95, AccessMask, p_Guid, v104, P);
          goto LABEL_63;
        }
        v60 = v59 - 1;
        if ( !v60 )
        {
          v42 = RtlAddAuditAccessObjectAce(*a3, 4u, v95, AccessMask, p_Guid, v104, P, v95 & 0x40, v95 & 0x80);
          goto LABEL_63;
        }
        if ( v60 != 2 )
          goto LABEL_178;
      }
LABEL_214:
      if ( v39 >= 0xFFFF )
        goto LABEL_246;
      v70 = (char *)SddlpAlloc(v39);
      if ( v70 )
      {
        v78 = AccessMask;
        v79 = P;
        v80 = P;
        *v70 = v97;
        v70[1] = v95;
        *((_WORD *)v70 + 1) = v39;
        *((_DWORD *)v70 + 1) = v78;
        v81 = RtlLengthSid(v80);
        RtlCopySid(v81, v70 + 8, v79);
        if ( !(_DWORD)v100 )
          goto LABEL_213;
        v75 = (unsigned int)v100;
        v76 = RtlLengthSid(v79);
        v77 = Src;
        goto LABEL_212;
      }
      goto LABEL_218;
    }
    v62 = v37 - 11;
    if ( v62 )
    {
      v63 = v62 - 2;
      if ( !v63 )
        goto LABEL_214;
      v64 = v63 - 4;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
        {
          if ( v39 < 0xFFFF && (v95 & 0xE0) == 0 && !AccessMask )
          {
            v69 = *(_DWORD *)((char *)P + 2) - v115;
            if ( !v69 )
              v69 = *((unsigned __int16 *)P + 3) - v116;
            if ( !v69 && *((_BYTE *)P + 1) == 1 && !*((_DWORD *)P + 2) )
            {
              v70 = (char *)SddlpAlloc(v39);
              if ( v70 )
              {
                v71 = v97;
                *((_DWORD *)v70 + 1) = 0;
                v72 = P;
                v73 = P;
                *v70 = v71;
                v70[1] = v95;
                *((_WORD *)v70 + 1) = v39;
                v74 = RtlLengthSid(v73);
                RtlCopySid(v74, v70 + 8, v72);
                if ( !HIDWORD(v100) )
                {
LABEL_213:
                  v43 = RtlAddAce(*a3, 2u, 0xFFFFFFFF, v70, v39);
                  ExFreePoolWithTag(v70, 0);
                  goto LABEL_64;
                }
                v75 = HIDWORD(v100);
                v76 = RtlLengthSid(v72);
                v77 = v110;
LABEL_212:
                memmove(&v70[v76 + 8], v77, v75);
                goto LABEL_213;
              }
LABEL_218:
              v43 = -1073741801;
              goto LABEL_64;
            }
          }
LABEL_246:
          v43 = -1073741705;
          goto LABEL_247;
        }
        v66 = v65 - 1;
        if ( v66 )
        {
          v67 = v66 - 1;
          if ( v67 )
          {
            if ( v67 == 1 )
            {
              if ( v35 >= 0xFFFF )
                goto LABEL_246;
              v68 = SddlAddAccessFilterAce(*a3, (int)ObjectTypeGuid, AccessMask, Src, v35);
              goto LABEL_211;
            }
LABEL_178:
            v43 = -1073741811;
LABEL_247:
            v89 = RtlNtStatusToDosError(v43);
            v18 = P;
            AceCount = v89;
LABEL_74:
            v16 = v101;
            goto LABEL_75;
          }
          v68 = SddlAddProcessTrustLabelAce(*a3, (int)ObjectTypeGuid, AccessMask);
        }
        else
        {
          v68 = SddlAddScopedPolicyIDAce(*a3, P);
        }
      }
      else
      {
        v68 = SddlAddMandatoryAce(*a3, (int)ObjectTypeGuid, AccessMask);
      }
LABEL_211:
      v43 = v68;
      goto LABEL_64;
    }
    if ( v39 >= 0xFFFF )
      goto LABEL_246;
    v44 = P;
    v43 = RtlAddAccessAllowedObjectAce(*a3, 4u, v95, AccessMask, p_Guid, v104, P);
    if ( v43 < 0 )
      goto LABEL_247;
    v43 = RtlGetAce(*a3, (*a3)->AceCount - 1, &Ace);
    if ( v43 < 0 )
      goto LABEL_247;
    v82 = Ace;
    v83 = 9;
    if ( *(_BYTE *)Ace == 5 )
      v83 = 11;
    *(_BYTE *)Ace = v83;
    v82[1] = v39;
    if ( (_DWORD)v100 )
    {
      v84 = (unsigned int)v100;
      if ( *(_BYTE *)v82 == 11 )
      {
        v85 = *((_DWORD *)v82 + 2);
        v86 = RtlLengthSid(P);
        memmove((char *)&v82[8 * (v85 & 1) + 6 + 4 * (v85 & 2)] + v86, Src, (unsigned int)v84);
        v44 = P;
      }
      else
      {
        v87 = RtlLengthSid(v44);
        memmove((char *)v82 + v87 + 8, Src, v84);
      }
    }
LABEL_66:
    if ( v96 == 1 && v44 )
      ExFreePoolWithTag(v44, 0);
    v18 = 0LL;
    Sid = 0LL;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    LODWORD(v100) = 0;
    if ( v110 )
    {
      ExFreePoolWithTag(v110, 0);
      v110 = 0LL;
    }
    HIDWORD(v100) = 0;
    if ( *v7 == 40 )
      ++v7;
    if ( ++Size_4 >= v103 )
      goto LABEL_74;
  }
  v51 = v39 * (unsigned __int64)(v103 - Size_4);
  if ( v51 > 0xFFFFFFFF )
    goto LABEL_229;
  v52 = v51 + Size;
  if ( (unsigned int)v51 + Size < (unsigned int)v51 )
    goto LABEL_229;
  v53 = (ACL *)SddlpAlloc(v52);
  v54 = *a3;
  v55 = v53;
  if ( v53 )
  {
    memmove(v53, *a3, Size);
    v55->AclSize = v52;
    if ( *a3 )
      ExFreePoolWithTag(*a3, 0);
    *a3 = v55;
    v35 = v100;
    Size = v52;
    goto LABEL_57;
  }
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  v88 = v96 == 1;
  *a3 = 0LL;
  if ( v88 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    v18 = 0LL;
    v96 = 0;
  }
  else
  {
    v18 = P;
  }
  AceCount = 8;
LABEL_238:
  v45 = *a3;
LABEL_231:
  if ( v45 )
    ExFreePoolWithTag(v45, 0);
  *a3 = 0LL;
LABEL_77:
  if ( v96 && v18 )
    ExFreePoolWithTag(v18, 0);
LABEL_78:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v110 )
    ExFreePoolWithTag(v110, 0);
  return AceCount;
}
