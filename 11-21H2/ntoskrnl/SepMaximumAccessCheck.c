/*
 * XREFs of SepMaximumAccessCheck @ 0x1402F9680
 * Callers:
 *     SepAccessCheck @ 0x1402FA820 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140218B60 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x14022D208 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x14023BDE8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14023E074 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140244144 (SepMatchCapability.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1402FD65C (SepSidInTokenSidHash.c)
 *     SepMatchPackage @ 0x1402FDE54 (SepMatchPackage.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14064A78C (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // r10d
  __int64 v14; // rbp
  int v15; // esi
  char v16; // di
  __int64 v17; // r13
  __int64 result; // rax
  char *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r12
  char v22; // r15
  char v23; // al
  unsigned __int8 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int16 v27; // r13
  size_t v28; // r8
  unsigned __int64 v29; // rax
  int v30; // ecx
  unsigned __int64 v31; // rbp
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // r15
  unsigned int v35; // ebp
  __int64 v36; // rdx
  unsigned int *v37; // rcx
  _DWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rcx
  unsigned __int16 v43; // cx
  unsigned int v44; // edi
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r10
  void *v49; // r11
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r12d
  int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // r8d
  __int64 v57; // rcx
  char v58; // al
  __int64 v59; // rdx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  char v62; // al
  __int64 v63; // rcx
  unsigned int v64; // r8d
  __int64 v65; // rcx
  int v66; // [rsp+20h] [rbp-B8h]
  int v67; // [rsp+28h] [rbp-B0h]
  int v68; // [rsp+28h] [rbp-B0h]
  int v69; // [rsp+60h] [rbp-78h]
  unsigned int v70; // [rsp+64h] [rbp-74h] BYREF
  unsigned int Size; // [rsp+68h] [rbp-70h]
  int Size_4; // [rsp+6Ch] [rbp-6Ch] BYREF
  int v73; // [rsp+70h] [rbp-68h]
  int v74; // [rsp+74h] [rbp-64h]
  unsigned int v75; // [rsp+78h] [rbp-60h]
  __int64 v76; // [rsp+80h] [rbp-58h]
  char v79; // [rsp+F0h] [rbp+18h]
  __int64 v80; // [rsp+F0h] [rbp+18h]
  __int64 v81; // [rsp+F8h] [rbp+20h]

  v81 = a4;
  v13 = a7;
  v14 = a1;
  v15 = *(_DWORD *)(a1 + 200) & 0x2000;
  v16 = a11;
  v17 = a2;
  v70 = 0;
  v69 = v15;
  Size_4 = -1;
  if ( a11 && a7 )
  {
    v36 = a7;
    v37 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v37 - 1) = *v37;
      v37 += 12;
      --v36;
    }
    while ( v36 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v20 = 0;
  v75 = result;
  if ( !(_DWORD)result )
    goto LABEL_34;
  v21 = a6;
  v22 = a12;
  do
  {
    if ( (v19[1] & 8) != 0 )
      goto LABEL_33;
    v23 = *v19;
    if ( *v19 )
    {
      if ( v23 == 5 )
      {
        v54 = *((_DWORD *)v19 + 2);
        if ( (v54 & 1) != 0 )
        {
          if ( v19 != (char *)-12LL )
          {
            if ( a9 )
            {
              v55 = 504LL;
              LOBYTE(v67) = v22;
              LOBYTE(v66) = a11;
              if ( !a11 )
                v55 = 232LL;
              if ( (unsigned __int8)SepSidInTokenSidHash(
                                      v14 + v55,
                                      v21,
                                      &v19[16 * (v54 & 1) + ((8LL * (v54 & 2)) | 0xC)],
                                      0LL,
                                      v66,
                                      v67) )
              {
                if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v19 + 12, a8, a7, &v70) )
                {
                  v16 = a11;
                  v13 = v56;
                  goto LABEL_32;
                }
                AuthzBasepAddAccessTypeList(a8, a7, v70, v20, *((_DWORD *)v19 + 1), 1);
              }
              v16 = a11;
              goto LABEL_31;
            }
            goto LABEL_132;
          }
          v16 = a11;
        }
        v57 = 504LL;
        LOBYTE(v67) = a12;
        LOBYTE(v66) = v16;
        if ( !v16 )
          v57 = 232LL;
        v58 = SepSidInTokenSidHash(v14 + v57, v21, &v19[16 * (v54 & 1) + ((8LL * (v54 & 2)) | 0xC)], 0LL, v66, v67);
        v13 = a7;
        if ( v58 )
        {
          v42 = a8;
          if ( a7 == 1 )
          {
            v22 = a12;
            *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
            goto LABEL_32;
          }
          v68 = 1;
          goto LABEL_98;
        }
        goto LABEL_23;
      }
      if ( v23 != 4 )
      {
        if ( v23 == 1 )
        {
          LOBYTE(v67) = a12;
          v40 = 504LL;
          LOBYTE(v66) = v16;
          if ( !v16 )
            v40 = 232LL;
          LOBYTE(a4) = 1;
          v41 = SepSidInTokenSidHash(v14 + v40, v21, v19 + 8, a4, v66, v67);
          v13 = a7;
          if ( v41 )
          {
LABEL_62:
            v42 = a8;
            if ( v13 == 1 )
            {
              v22 = a12;
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_32;
            }
            v68 = 2;
LABEL_98:
            v59 = v13;
LABEL_99:
            v60 = 0;
            goto LABEL_101;
          }
LABEL_23:
          v22 = a12;
          goto LABEL_32;
        }
        if ( v23 == 6 )
        {
          v63 = 504LL;
          LOBYTE(a4) = 1;
          LOBYTE(v67) = a12;
          LOBYTE(v66) = v16;
          if ( !v16 )
            v63 = 232LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash(
                                   v14 + v63,
                                   v21,
                                   &v19[16 * (*((_DWORD *)v19 + 2) & 1) + ((8LL * (*((_DWORD *)v19 + 2) & 2)) | 0xC)],
                                   a4,
                                   v66,
                                   v67) )
            goto LABEL_30;
          if ( (*((_DWORD *)v19 + 2) & 1) != 0 && v19 != (char *)-12LL )
          {
            if ( !a9 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_30;
            }
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v19 + 12, a8, a7, &v70) )
            {
              v22 = a12;
              v13 = v64;
              goto LABEL_32;
            }
            v60 = v70;
            v42 = a8;
            v59 = a7;
            v68 = 2;
LABEL_101:
            AuthzBasepAddAccessTypeList(v42, v59, v60, v20, *((_DWORD *)v19 + 1), v68);
            goto LABEL_30;
          }
          v13 = a7;
          goto LABEL_62;
        }
        if ( v23 != 9 )
          goto LABEL_33;
        v43 = *((_WORD *)v19 + 1);
        v44 = 4 * (unsigned __int8)v19[9] + 8;
        if ( (int)(v43 - v44 - 8) > 0 )
        {
          if ( a4 && !*a5 )
          {
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
            v43 = *((_WORD *)v19 + 1);
          }
          v45 = *(_QWORD **)(v14 + 1096);
          if ( v45 )
          {
            v46 = v45[75];
            v47 = v45[73];
            v48 = v45[74];
            v49 = (void *)v45[72];
          }
          else
          {
            v46 = 0LL;
            v47 = 0LL;
            v48 = 0LL;
            v49 = 0LL;
          }
          v50 = v43 - v44 - 8;
          v51 = v44;
          v16 = a11;
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)v14,
            *(void **)(v14 + 776),
            (void *)*a5,
            v49,
            v48,
            v47,
            v46,
            &v19[v51 + 8],
            v50,
            0,
            a11,
            &Size_4);
          if ( Size_4 != 1 )
            goto LABEL_31;
          if ( !v15 && !a11 )
          {
            if ( SepIsPackageSid((__int64)(v19 + 8)) )
            {
LABEL_125:
              SepMatchPackage(
                v14,
                0xFFFFFFFFLL,
                v19 + 8,
                *((unsigned int *)v19 + 1),
                a13 + 21,
                a13 + 4,
                a13 + 20,
                a13 + 16,
                a13 + 24);
              v16 = a11;
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
              v15 = v69;
              goto LABEL_31;
            }
            if ( SepIsCapabilitySid((__int64)(v19 + 8)) )
            {
LABEL_47:
              SepMatchCapability(
                v14,
                -1,
                (__int64)(v19 + 8),
                *((_DWORD *)v19 + 1),
                (_BYTE *)(a13 + 22),
                (_DWORD *)(a13 + 8));
              v16 = a11;
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
              v15 = v69;
              goto LABEL_31;
            }
            v15 = v69;
          }
          v65 = 504LL;
          if ( !a11 )
            v65 = 232LL;
          LOBYTE(v67) = a12;
          LOBYTE(v66) = a11;
          if ( !(unsigned __int8)SepSidInTokenSidHash(v14 + v65, v21, v19 + 8, 0LL, v66, v67) )
            goto LABEL_30;
          v59 = a7;
          v42 = a8;
          v68 = 1;
          goto LABEL_99;
        }
LABEL_132:
        v16 = a11;
        goto LABEL_33;
      }
      v61 = 504LL;
      if ( !v16 )
        v61 = 232LL;
      LOBYTE(v67) = a12;
      LOBYTE(v66) = v16;
      if ( (unsigned __int8)SepSidInTokenSidHash(v14 + v61, v21, &v19[4 * (unsigned __int8)v19[13] + 20], 0LL, v66, v67) )
      {
        LOBYTE(v67) = a12;
        LOBYTE(v66) = 0;
        v62 = SepSidInTokenSidHash(v17 + 232, 0LL, v19 + 12, 0LL, v66, v67);
        v13 = a7;
        if ( !v62 )
        {
LABEL_108:
          v22 = a12;
          goto LABEL_32;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_108;
        }
        AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
      }
      v22 = a12;
      goto LABEL_31;
    }
    if ( !v15 && !v16 )
    {
      if ( SepIsPackageSid((__int64)(v19 + 8)) )
        goto LABEL_125;
      if ( SepIsCapabilitySid((__int64)(v19 + 8)) )
        goto LABEL_47;
    }
    v24 = (unsigned __int8 *)(v19 + 8);
    v25 = 504LL;
    if ( !v16 )
      v25 = 232LL;
    v26 = v25 + v14;
    if ( v21 && RtlEqualSid(SePrincipalSelfSid, v19 + 8) )
      v24 = (unsigned __int8 *)v21;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v24) )
    {
LABEL_21:
      v13 = a7;
      if ( a7 != 1 )
      {
        AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
        goto LABEL_29;
      }
      v16 = a11;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
      v15 = v69;
      goto LABEL_23;
    }
    if ( !v26 || !v24 )
      goto LABEL_29;
    v27 = *(_WORD *)v24;
    v28 = 4 * (unsigned int)v24[1] + 8;
    v29 = (unsigned __int64)*(unsigned __int16 *)v24 >> 8;
    Size = 4 * v24[1] + 8;
    LOBYTE(v30) = 0;
    v79 = 0;
    v31 = *(_QWORD *)(v26 + 8LL * (v24[4 * v29 + 4] & 0xF) + 16) & *(_QWORD *)(v26
                                                                             + 8
                                                                             * ((unsigned __int64)v24[4 * v29 + 4] >> 4)
                                                                             + 144);
    if ( !v31 )
    {
LABEL_28:
      v35 = *(_DWORD *)v26;
      if ( *(_DWORD *)v26 > 0x40u )
      {
        v52 = *(_QWORD *)(v26 + 8);
        v53 = 64;
        v80 = v52;
        do
        {
          v34 = v52 + 16LL * v53;
          if ( **(_WORD **)v34 == v27 )
          {
            if ( !memcmp(v24, *(const void **)v34, v28) )
              goto LABEL_18;
            v28 = Size;
            v52 = v80;
          }
          ++v53;
        }
        while ( v53 < v35 );
      }
      goto LABEL_29;
    }
    while ( 1 )
    {
      LOBYTE(v32) = v31;
      if ( (_BYTE)v31 )
        break;
LABEL_27:
      LOBYTE(v30) = v30 + 8;
      v31 >>= 8;
      v79 = v30;
      if ( !v31 )
        goto LABEL_28;
    }
    v33 = *(_QWORD *)(v26 + 8);
    v30 = (unsigned __int8)v30;
    v76 = v33;
    v73 = (unsigned __int8)v30;
    while ( 1 )
    {
      v74 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v32);
      v34 = v33 + 16LL * (unsigned int)(v30 + v74);
      if ( **(_WORD **)v34 == v27 )
        break;
LABEL_25:
      v33 = v76;
      v32 = (unsigned __int8)v32 ^ (1 << v74);
      if ( !(_BYTE)v32 )
      {
        LOBYTE(v30) = v79;
        goto LABEL_27;
      }
    }
    if ( memcmp(v24, *(const void **)v34, v28) )
    {
      v28 = Size;
      v30 = v73;
      goto LABEL_25;
    }
LABEL_18:
    if ( !a11 && v34 == *(_QWORD *)(v26 + 8) && (*(_DWORD *)(v34 + 8) & 0x10) == 0 || (*(_DWORD *)(v34 + 8) & 4) != 0 )
      goto LABEL_21;
LABEL_29:
    v16 = a11;
    v15 = v69;
LABEL_30:
    v22 = a12;
LABEL_31:
    v13 = a7;
LABEL_32:
    a4 = v81;
LABEL_33:
    result = *((unsigned __int16 *)v19 + 1);
    ++v20;
    v14 = a1;
    v19 += result;
    v21 = a6;
    v17 = a2;
  }
  while ( v20 < v75 );
LABEL_34:
  if ( v16 && v13 )
  {
    v38 = (_DWORD *)(a8 + 28);
    v39 = v13;
    do
    {
      result = *(v38 - 1) & (*v38 | (unsigned int)~a10);
      *v38 = result;
      v38 += 12;
      --v39;
    }
    while ( v39 );
  }
  return result;
}
