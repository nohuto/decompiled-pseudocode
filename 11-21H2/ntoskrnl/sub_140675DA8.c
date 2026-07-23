/*
 * XREFs of sub_140675DA8 @ 0x140675DA8
 * Callers:
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 *     sub_1406773CC @ 0x1406773CC (sub_1406773CC.c)
 *     sub_1406774E8 @ 0x1406774E8 (sub_1406774E8.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_140677764 @ 0x140677764 (sub_140677764.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     sub_1406C4594 @ 0x1406C4594 (sub_1406C4594.c)
 *     sub_1406C4600 @ 0x1406C4600 (sub_1406C4600.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     sub_140882C7A @ 0x140882C7A (sub_140882C7A.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409B7D90 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409B7DF0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409B80E0 (RtlAddAuditAccessObjectAce.c)
 *     sub_1409CF980 @ 0x1409CF980 (sub_1409CF980.c)
 *     sub_1409CFB98 @ 0x1409CFB98 (sub_1409CFB98.c)
 *     sub_1409CFCF8 @ 0x1409CFCF8 (sub_1409CFCF8.c)
 *     sub_1409CFF00 @ 0x1409CFF00 (sub_1409CFF00.c)
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140675DA8(wchar_t *Str, char a2, PACL *a3, wchar_t **a4)
{
  wchar_t *v7; // r12
  unsigned int v8; // esi
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
  unsigned int v31; // eax
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
  bool v48; // zf
  unsigned int v49; // eax
  bool v50; // cf
  int v51; // edx
  unsigned __int64 v52; // rcx
  unsigned int v53; // edi
  ACL *v54; // rax
  PACL v55; // rcx
  ACL *v56; // r15
  int v57; // edx
  _WORD *v58; // r15
  char v59; // al
  size_t v60; // rbx
  int v61; // edi
  ULONG v62; // eax
  ULONG v63; // eax
  unsigned int v64; // ebx
  unsigned int v65; // ebx
  unsigned int v66; // ebx
  unsigned int v67; // ebx
  unsigned int v68; // ebx
  PVOID v69; // r15
  int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rdi
  ULONG v73; // eax
  size_t v74; // rbx
  ULONG v75; // eax
  PVOID v76; // rdx
  __int64 v77; // rax
  PVOID v78; // r15
  PVOID v79; // rcx
  ULONG v80; // eax
  ULONG v81; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  char InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v84; // [rsp+50h] [rbp-B0h]
  char v85; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v86; // [rsp+52h] [rbp-AEh]
  ACCESS_MASK AccessMask; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  size_t v89; // [rsp+60h] [rbp-A0h] BYREF
  int v90; // [rsp+68h] [rbp-98h]
  PVOID Src; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v92; // [rsp+78h] [rbp-88h] BYREF
  PGUID v93; // [rsp+80h] [rbp-80h]
  _WORD *v94; // [rsp+88h] [rbp-78h] BYREF
  PGUID p_Guid; // [rsp+90h] [rbp-70h]
  int v96; // [rsp+98h] [rbp-68h]
  unsigned int Size; // [rsp+9Ch] [rbp-64h]
  int Size_4; // [rsp+A0h] [rbp-60h]
  PVOID v99; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sid; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t *EndPtr; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Ace; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t **v103; // [rsp+C8h] [rbp-38h]
  int v104; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v105; // [rsp+D4h] [rbp-2Ch]
  GUID Guid; // [rsp+D8h] [rbp-28h] BYREF
  GUID v107; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v103 = a4;
  v92 = 0;
  EndPtr = 0LL;
  v85 = 0;
  P = 0LL;
  v7 = Str;
  Sid = 0LL;
  v8 = 0;
  Src = 0LL;
  v89 = 0LL;
  v99 = 0LL;
  Ace = 0LL;
  v94 = 0LL;
  v104 = 0;
  v105 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v7 + 17;
    goto LABEL_79;
  }
  v96 = 2 - (a2 != 0);
  result = sub_1406C4594(v7);
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
  v8 = sub_1406C4600(v7, v12, &v92);
  if ( v8 )
    goto LABEL_79;
  v13 = v92;
  if ( !v92 )
  {
    v47 = (ACL *)sub_14067757C(8uLL);
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
    return v8;
  }
  v14 = 84 * v92 + 8;
  if ( v14 > 0xFFFF )
    v14 = 0xFFFF;
  Size = v14;
  v15 = (ACL *)sub_14067757C(v14);
  *a3 = v15;
  if ( !v15 )
  {
    v8 = 8;
    goto LABEL_79;
  }
  v15->AclRevision = 2;
  v16 = 8;
  v17 = *a3;
  Size_4 = 0;
  v90 = 8;
  v17->Sbz1 = 0;
  (*a3)->AclSize = v14;
  (*a3)->AceCount = 0;
  (*a3)->Sbz2 = 0;
  v18 = P;
  if ( !v13 )
  {
LABEL_76:
    v45 = *a3;
    if ( v8 )
      goto LABEL_121;
    v45->AclSize = v16;
    goto LABEL_78;
  }
  while ( 1 )
  {
    v84 = 0;
    AccessMask = 0;
    Guid = 0LL;
    v19 = 0;
    p_Guid = 0LL;
    v107 = 0LL;
    v93 = 0LL;
    while ( *v7 == 32 )
      ++v7;
    if ( *v7 == 40 )
    {
      v48 = v7[1] == 32;
      ++v7;
      if ( v48 )
      {
        do
          ++v7;
        while ( *v7 == 32 );
      }
    }
    v20 = sub_1406774E8(v7);
    if ( !v20 )
    {
      v8 = 1804;
      goto LABEL_228;
    }
    v21 = *(unsigned __int8 *)(v20 + 12);
    v22 = *(unsigned int *)(v20 + 8);
    v86 = v21;
    v23 = &v7[v22];
    if ( *v23 != 59 && *v23 != 32 )
    {
LABEL_102:
      v8 = 1336;
LABEL_228:
      v45 = *a3;
      goto LABEL_121;
    }
    v24 = v23 + 1;
    if ( (unsigned __int8)(v21 - 5) <= 3u || (_BYTE)v21 == 11 )
      (*a3)->AclRevision = 4;
    while ( *v24 == 32 )
      ++v24;
    v25 = v103;
    while ( v24 != *v25 )
    {
      if ( *v24 == 59 )
        goto LABEL_29;
      for ( ; *v24 == 32; ++v24 )
        ;
      v46 = sub_140677764(v24);
      if ( !v46 )
      {
        v8 = 1004;
        goto LABEL_228;
      }
      v84 |= *(_BYTE *)(v46 + 12);
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
      v27 = sub_1406773CC(v24);
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
          goto LABEL_230;
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
          goto LABEL_230;
        wcsncpy_s(Dst, 0x25uLL, v24, 0x24uLL);
        Dst[36] = 0;
        if ( v29 )
        {
          if ( !(unsigned int)sub_1409CFF00(Dst, &v107) )
            goto LABEL_119;
          v93 = &v107;
        }
        else
        {
          if ( !(unsigned int)sub_1409CFF00(Dst, &Guid) )
            goto LABEL_119;
          p_Guid = &Guid;
        }
        v24 += 36;
        if ( *v24 != 59 && *v24 != 32 )
        {
LABEL_119:
          v8 = 1705;
          goto LABEL_120;
        }
      }
      ++v24;
      ++v29;
    }
    while ( v29 < 2 );
    for ( i = p_Guid; *v24 == 32; ++v24 )
      ;
    v31 = sub_140675CC0(v24, &Sid, &v94, &v85);
    v18 = Sid;
    v8 = v31;
    if ( v31 )
      goto LABEL_75;
    v32 = v94;
    if ( !v94 )
      goto LABEL_230;
    P = Sid;
    if ( !Sid )
      goto LABEL_230;
    for ( j = v94; *j == 32; ++j )
      ;
    if ( (unsigned __int8)v21 > 0x15u || (v34 = 2371072, !_bittest(&v34, v21)) )
    {
      v35 = v89;
      v36 = HIDWORD(v89);
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
        LODWORD(v89) = 0;
        if ( v99 )
        {
          ExFreePoolWithTag(v99, 0);
          v99 = 0LL;
        }
        HIDWORD(v89) = 0;
        if ( (_BYTE)v21 == 18 )
        {
          v8 = sub_1409D23E8((_DWORD)j, (unsigned int)&v94, (unsigned int)&v99, (unsigned int)&v89 + 4, 0LL, 0, 0, 0);
          if ( v8 )
            goto LABEL_120;
        }
        else
        {
          ObjectTypeGuid = 0;
          v8 = sub_1409D1D04(j, &v94, &Src, &v89);
        }
        v32 = v94;
      }
      else
      {
        v32 = j;
        v94 = j;
      }
    }
    v35 = v89;
    v36 = HIDWORD(v89);
    if ( !v89 )
      goto LABEL_230;
    if ( v8 )
      goto LABEL_120;
LABEL_48:
    while ( *v32 == 32 )
      v94 = ++v32;
    if ( *v32 != 41 )
    {
LABEL_230:
      v8 = 1336;
      goto LABEL_120;
    }
    v37 = v86;
    v7 = v32 + 1;
    if ( v86 <= 0x11u )
    {
      if ( v86 == 17 || v86 <= 3u )
        goto LABEL_53;
      if ( v86 <= 4u )
        goto LABEL_102;
      if ( v86 <= 8u )
      {
        v38 = i != 0LL ? 32 : 16;
        if ( v93 )
          v38 += 16;
        goto LABEL_54;
      }
      if ( v86 <= 0xAu )
        goto LABEL_151;
      if ( v86 == 11 )
      {
        v51 = i != 0LL ? 48 : 32;
        if ( !v93 )
          v51 = i != 0LL ? 32 : 16;
        if ( v35 > 0xFFFFFFFC )
        {
LABEL_231:
          v8 = 534;
          goto LABEL_79;
        }
        v49 = (v35 + 3) & 0xFFFFFFFC;
        v38 = v51 + v49;
        goto LABEL_153;
      }
      v48 = v86 == 13;
LABEL_150:
      if ( !v48 )
        goto LABEL_102;
LABEL_151:
      if ( v35 > 0xFFFFFFFC )
        goto LABEL_231;
      v49 = (v35 + 3) & 0xFFFFFFFC;
      v38 = v49 + 12;
LABEL_153:
      v50 = v38 < v49;
      goto LABEL_165;
    }
    if ( v86 != 18 )
    {
      if ( v86 == 19 || v86 == 20 )
      {
LABEL_53:
        v38 = 12;
        goto LABEL_54;
      }
      v48 = v86 == 21;
      goto LABEL_150;
    }
    v38 = v36 + 12;
    v50 = v36 + 12 < v36;
LABEL_165:
    if ( v50 )
    {
      v8 = 534;
      goto LABEL_228;
    }
LABEL_54:
    v39 = v38 + RtlLengthSid(v18) - 4;
    if ( v39 < v38 || (v40 = v39 + v90, v90 = v40, v40 < v39) )
    {
LABEL_227:
      v18 = P;
      v8 = 534;
      goto LABEL_228;
    }
    if ( v40 > Size )
      break;
LABEL_57:
    if ( v37 > 0xB )
    {
      v64 = v37 - 13;
      if ( v64 )
      {
        v65 = v64 - 4;
        if ( !v65 )
        {
          v42 = sub_140882C7A(*a3, ObjectTypeGuid, AccessMask);
          goto LABEL_63;
        }
        v66 = v65 - 1;
        if ( v66 )
        {
          v67 = v66 - 1;
          if ( !v67 )
          {
            v42 = sub_1409CFCF8(*a3, P);
            goto LABEL_63;
          }
          v68 = v67 - 1;
          if ( !v68 )
          {
            v42 = sub_1409CFB98(*a3, ObjectTypeGuid, AccessMask);
            goto LABEL_63;
          }
          if ( v68 == 1 )
          {
            if ( v35 >= 0xFFFF )
              goto LABEL_241;
            v42 = sub_1409CF980(*a3, ObjectTypeGuid, AccessMask, Src, v35);
            goto LABEL_63;
          }
LABEL_179:
          v43 = -1073741811;
        }
        else
        {
          if ( v39 < 0xFFFF && (v84 & 0xE0) == 0 && !AccessMask )
          {
            v69 = P;
            v70 = *(_DWORD *)((char *)P + 2) - v104;
            if ( !v70 )
              v70 = *((unsigned __int16 *)P + 3) - v105;
            if ( !v70 && *((_BYTE *)P + 1) == 1 && !*((_DWORD *)P + 2) )
            {
              v71 = sub_14067757C(v39);
              v72 = v71;
              if ( !v71 )
              {
                v43 = -1073741801;
                goto LABEL_64;
              }
              *(_BYTE *)v71 = v86;
              *(_DWORD *)(v71 + 4) = 0;
              *(_BYTE *)(v71 + 1) = v84;
              *(_WORD *)(v71 + 2) = v39;
              v73 = RtlLengthSid(v69);
              RtlCopySid(v73, (PSID)(v72 + 8), v69);
              if ( HIDWORD(v89) )
              {
                v74 = HIDWORD(v89);
                v75 = RtlLengthSid(v69);
                v76 = v99;
LABEL_225:
                memmove((void *)(v72 + v75 + 8LL), v76, v74);
              }
LABEL_226:
              v43 = RtlAddAce(*a3, 2u, 0xFFFFFFFF, (PVOID)v72, v39);
              ExFreePoolWithTag((PVOID)v72, 0);
LABEL_64:
              if ( v43 < 0 )
                goto LABEL_242;
LABEL_65:
              v44 = P;
              goto LABEL_66;
            }
          }
LABEL_241:
          v43 = -1073741705;
        }
LABEL_242:
        v81 = RtlNtStatusToDosError(v43);
        v18 = P;
        v8 = v81;
LABEL_75:
        v16 = v90;
        goto LABEL_76;
      }
LABEL_221:
      if ( v39 >= 0xFFFF )
        goto LABEL_241;
      v77 = sub_14067757C(v39);
      v72 = v77;
      if ( v77 )
      {
        v78 = P;
        v79 = P;
        *(_BYTE *)v77 = v86;
        *(_DWORD *)(v77 + 4) = AccessMask;
        *(_BYTE *)(v77 + 1) = v84;
        *(_WORD *)(v77 + 2) = v39;
        v80 = RtlLengthSid(v79);
        RtlCopySid(v80, (PSID)(v72 + 8), v78);
        if ( (_DWORD)v89 )
        {
          v74 = (unsigned int)v89;
          v75 = RtlLengthSid(v78);
          v76 = Src;
          goto LABEL_225;
        }
        goto LABEL_226;
      }
      v43 = -1073741801;
      goto LABEL_242;
    }
    if ( v37 != 11 )
    {
      switch ( v37 )
      {
        case 0u:
          InheritedObjectTypeGuid = 0;
LABEL_61:
          v41 = v84;
LABEL_62:
          v42 = sub_1407B4900((int)*a3, 2, v41, AccessMask, P, InheritedObjectTypeGuid);
LABEL_63:
          v43 = v42;
          goto LABEL_64;
        case 1u:
          InheritedObjectTypeGuid = 1;
          goto LABEL_61;
        case 2u:
          InheritedObjectTypeGuid = 2;
          v57 = v84 & 0x3F | 0x40;
          if ( (v84 & 0x40) == 0 )
            v57 = v84 & 0x3F;
          v41 = v57 | 0x80;
          if ( (v84 & 0x80u) == 0 )
            v41 = v57;
          goto LABEL_62;
        case 5u:
          v42 = RtlAddAccessAllowedObjectAce(*a3, 4u, v84, AccessMask, p_Guid, v93, P);
          goto LABEL_63;
        case 6u:
          v42 = RtlAddAccessDeniedObjectAce(*a3, 4u, v84, AccessMask, p_Guid, v93, P);
          goto LABEL_63;
        case 7u:
          v42 = RtlAddAuditAccessObjectAce(*a3, 4u, v84, AccessMask, p_Guid, v93, P, v84 & 0x40, v84 & 0x80);
          goto LABEL_63;
      }
      if ( v37 <= 8 )
        goto LABEL_179;
      goto LABEL_221;
    }
    if ( v39 >= 0xFFFF )
      goto LABEL_241;
    v44 = P;
    v43 = RtlAddAccessAllowedObjectAce(*a3, 4u, v84, AccessMask, p_Guid, v93, P);
    if ( v43 < 0 )
      goto LABEL_242;
    v43 = RtlGetAce(*a3, (*a3)->AceCount - 1, &Ace);
    if ( v43 < 0 )
      goto LABEL_242;
    v58 = Ace;
    v59 = 9;
    if ( *(_BYTE *)Ace == 5 )
      v59 = 11;
    *(_BYTE *)Ace = v59;
    v58[1] = v39;
    if ( (_DWORD)v89 )
    {
      v60 = (unsigned int)v89;
      if ( *(_BYTE *)v58 != 11 )
      {
        v63 = RtlLengthSid(v44);
        memmove((char *)v58 + v63 + 8, Src, v60);
        goto LABEL_66;
      }
      v61 = *((_DWORD *)v58 + 2);
      v62 = RtlLengthSid(P);
      memmove((char *)&v58[8 * (v61 & 1) + 6 + 4 * (v61 & 2)] + v62, Src, (unsigned int)v60);
      goto LABEL_65;
    }
LABEL_66:
    if ( v85 == 1 )
      ExFreePoolWithTag(v44, 0);
    v18 = 0LL;
    Sid = 0LL;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    LODWORD(v89) = 0;
    if ( v99 )
    {
      ExFreePoolWithTag(v99, 0);
      v99 = 0LL;
    }
    HIDWORD(v89) = 0;
    if ( *v7 == 40 )
      ++v7;
    if ( ++Size_4 >= v92 )
      goto LABEL_75;
  }
  v52 = v39 * (unsigned __int64)(v92 - Size_4);
  if ( v52 > 0xFFFFFFFF )
    goto LABEL_227;
  v53 = v52 + Size;
  if ( (unsigned int)v52 + Size < (unsigned int)v52 )
    goto LABEL_227;
  v54 = (ACL *)sub_14067757C(v53);
  v55 = *a3;
  v56 = v54;
  if ( v54 )
  {
    memmove(v54, *a3, Size);
    v56->AclSize = v53;
    if ( *a3 )
      ExFreePoolWithTag(*a3, 0);
    *a3 = v56;
    v35 = v89;
    Size = v53;
    goto LABEL_57;
  }
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  v48 = v85 == 1;
  *a3 = 0LL;
  if ( v48 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    v18 = 0LL;
    v85 = 0;
  }
  else
  {
    v18 = P;
  }
  v8 = 8;
LABEL_120:
  v45 = *a3;
LABEL_121:
  if ( v45 )
    ExFreePoolWithTag(v45, 0);
  *a3 = 0LL;
LABEL_78:
  if ( v85 && v18 )
    ExFreePoolWithTag(v18, 0);
LABEL_79:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v99 )
    ExFreePoolWithTag(v99, 0);
  return v8;
}
