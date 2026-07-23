/*
 * XREFs of SepExamineSaclEx @ 0x1409CE8B4
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1405B942C (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140225344 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022C050 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepSidInToken @ 0x14035C35C (SepSidInToken.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14066F5D0 (AuthzBasepObjectInTypeList.c)
 *     SepSetAuditInfoForObjectType @ 0x1409CEFE0 (SepSetAuditInfoForObjectType.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        unsigned __int8 *a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r12
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  int *v20; // r15
  char v21; // r13
  PSID v22; // rdx
  _WORD *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  char *v26; // r14
  char v27; // bp
  char v28; // al
  int v29; // ecx
  int v30; // edi
  bool v31; // zf
  unsigned int j; // ebx
  int v33; // r15d
  __int64 v34; // rbx
  __int64 v35; // rdi
  unsigned __int8 *v36; // rbx
  _DWORD *v37; // rdi
  int v38; // ecx
  unsigned int v39; // ebx
  char v40; // al
  int *v41; // rdi
  int v42; // eax
  _WORD *v43; // rbx
  unsigned int v44; // edi
  _QWORD *v45; // rax
  void *v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // ecx
  unsigned int i; // ebx
  int v52; // ecx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v55; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v57; // [rsp+70h] [rbp-68h]
  _DWORD *v58; // [rsp+78h] [rbp-60h] BYREF
  char *v59; // [rsp+80h] [rbp-58h]
  unsigned int v60; // [rsp+E0h] [rbp+8h]

  v56 = -1;
  v13 = 0LL;
  v14 = a3;
  v58 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v57 = *(unsigned __int16 *)(a1 + 4);
    if ( v57 )
    {
      v20 = a8;
      v21 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        Size_4 = v21;
      }
      v22 = SeAnonymousLogonSid;
      v23 = **(_WORD ***)(v14 + 152);
      if ( *v23 == *(_WORD *)SeAnonymousLogonSid )
      {
        v24 = memcmp(v23, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v24 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v25 = 0;
      v26 = (char *)(a1 + 8);
      v60 = 0;
      v59 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_80:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13, (__int64)v22, (__int64)v19, (__int64)v16);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v27 = v26[1];
        if ( (v27 & 8) != 0 )
          goto LABEL_79;
        v55 = -1;
        v28 = *v26;
        if ( *v26 == 2 )
          break;
        if ( v28 == 7 )
        {
          v33 = *((_DWORD *)v26 + 1);
          v34 = *((_DWORD *)v26 + 2) & 1;
          v35 = -(__int64)((_DWORD)v34 != 0);
          v36 = (unsigned __int8 *)&v26[16 * v34 + ((8LL * (*((_DWORD *)v26 + 2) & 2)) | 0xC)];
          v37 = (_DWORD *)((unsigned __int64)(v26 + 12) & v35);
          if ( v37 )
          {
            if ( SepSidInToken(v14, a10, v36, 1, 0, a11)
              || Size && *(_WORD *)SeWorldSid == *(_WORD *)v36 && !memcmp(SeWorldSid, v36, Size) )
            {
              v40 = AuthzBasepObjectInTypeList(v37, a5, a6, &v55);
              v41 = a8;
              if ( !v40 )
                goto LABEL_73;
              v42 = v55;
              goto LABEL_74;
            }
            goto LABEL_76;
          }
          if ( !SepSidInToken(v14, a10, v36, 1, 0, a11)
            && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)v36 || memcmp(SeWorldSid, v36, Size)) )
          {
            goto LABEL_76;
          }
          v39 = 0;
          if ( !a6 )
            goto LABEL_76;
          do
          {
            LOBYTE(v38) = v27;
            SepSetAuditInfoForObjectType(
              v38,
              v33,
              a4,
              a5,
              a6,
              a7,
              v39++,
              (__int64)a8,
              (__int64)a9,
              (__int64)a12,
              (__int64)a13);
          }
          while ( v39 < a6 );
LABEL_33:
          v26 = v59;
          v13 = v58;
          v21 = Size_4;
          goto LABEL_76;
        }
        if ( v28 == 13 )
        {
          v33 = *((_DWORD *)v26 + 1);
          v43 = v26 + 8;
          v44 = 4 * (unsigned __int8)v26[9] + 8;
          if ( v17 && !v13 )
          {
            AuthzBasepInitializeResourceClaimsFromSacl(v17, (__int64 *)&v58);
            v19 = a12;
            v25 = v60;
            v13 = v58;
          }
          if ( (int)(*((unsigned __int16 *)v26 + 1) - v44 - 8) <= 0 )
            goto LABEL_78;
          v45 = *(_QWORD **)(a3 + 1096);
          if ( v45 )
          {
            v46 = (void *)v45[72];
            v47 = v45[74];
            v48 = v45[73];
            v49 = v45[75];
          }
          else
          {
            v46 = 0LL;
            v47 = 0LL;
            v48 = 0LL;
            v49 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)a3,
            *(void **)(a3 + 776),
            v13,
            v46,
            v47,
            v48,
            v49,
            (_WORD *)((char *)v43 + v44),
            *((unsigned __int16 *)v26 + 1) - v44 - 8,
            1u,
            0,
            &v56);
          if ( v56 != 1
            || !SepSidInToken(a3, a10, (unsigned __int8 *)v26 + 8, 1, 0, a11)
            && (!Size || *(_WORD *)SeWorldSid != *v43 || memcmp(SeWorldSid, v26 + 8, Size)) )
          {
            goto LABEL_76;
          }
          v41 = a8;
          if ( a6 )
          {
            for ( i = 0; i < a6; ++i )
            {
              LOBYTE(v50) = v27;
              SepSetAuditInfoForObjectType(
                v50,
                v33,
                a4,
                a5,
                a6,
                a7,
                i,
                (__int64)a8,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
            v26 = v59;
            v13 = v58;
            v21 = Size_4;
LABEL_73:
            v42 = -1;
LABEL_74:
            if ( v42 != -1 )
            {
              v52 = (int)a9;
              LOBYTE(v52) = v27;
              SepSetAuditInfoForObjectType(
                v52,
                v33,
                a4,
                a5,
                a6,
                a7,
                v42,
                (__int64)v41,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
LABEL_76:
            v19 = a12;
LABEL_77:
            v25 = v60;
LABEL_78:
            v16 = a13;
            goto LABEL_79;
          }
          if ( *a8 >= 0 )
          {
            if ( (v27 & 0x40) == 0 || (v33 & *a9) == 0 && v21 != 64 )
              goto LABEL_76;
            goto LABEL_67;
          }
          if ( v27 >= 0 )
            goto LABEL_76;
          v31 = (v33 & a4) == 0;
LABEL_28:
          if ( v31 && v21 != (char)0x80 )
            goto LABEL_76;
          v16 = a13;
          v19 = a12;
          v25 = v60;
          *a13 = 1;
        }
LABEL_79:
        ++v25;
        v20 = a8;
        v26 += *((unsigned __int16 *)v26 + 1);
        v14 = a3;
        v17 = a2;
        v60 = v25;
        v59 = v26;
        if ( v25 >= v57 )
          goto LABEL_80;
      }
      if ( !SepSidInToken(v14, a10, (unsigned __int8 *)v26 + 8, 1, 0, a11)
        && (!Size || *(_WORD *)SeWorldSid != *((_WORD *)v26 + 4) || memcmp(SeWorldSid, v26 + 8, Size)) )
      {
        goto LABEL_76;
      }
      v30 = *((_DWORD *)v26 + 1);
      if ( a6 )
      {
        for ( j = 0; j < a6; ++j )
        {
          LOBYTE(v29) = v27;
          SepSetAuditInfoForObjectType(
            v29,
            v30,
            a4,
            a5,
            a6,
            a7,
            j,
            (__int64)v20,
            (__int64)a9,
            (__int64)a12,
            (__int64)a13);
        }
        goto LABEL_33;
      }
      if ( *v20 >= 0 )
      {
        if ( (v27 & 0x40) == 0 || (v30 & *a9) == 0 && v21 != 64 )
          goto LABEL_76;
LABEL_67:
        v19 = a12;
        *a12 = 1;
        goto LABEL_77;
      }
      if ( v27 >= 0 )
        goto LABEL_76;
      v31 = (v30 & a4) == 0;
      goto LABEL_28;
    }
  }
}
