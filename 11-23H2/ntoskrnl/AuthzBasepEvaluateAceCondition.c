/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x14022C050
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x14022A270 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14022ABF8 (SepNormalAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepFilterCheck @ 0x1402B5F30 (SepFilterCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403CDE50 (SepMaximumAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B86B4 (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x1408A64A0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CE8B4 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepIsValidExpression @ 0x14022BBE4 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepPushResult @ 0x14022BD54 (AuthzBasepPushResult.c)
 *     AuthzBasepResetOperands @ 0x14022C6D0 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14022C994 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepPotentialGlobalTableAttribute @ 0x14022CF64 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14022D2A0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateExpression @ 0x14030C134 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x14034FE40 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepGetConstantOperand @ 0x140355910 (AuthzBasepGetConstantOperand.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FE63C (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B9A9C (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x14066FD74 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x14066FDFC (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14066FF40 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x140670068 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        _DWORD *a1,
        void *a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  _DWORD *v12; // r14
  int ConstantOperand; // r15d
  char v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // r8d
  int v19; // edi
  int v20; // r8d
  int v21; // edi
  int v22; // r8d
  __int64 v23; // rbx
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // r14
  PVOID *v27; // r14
  void *v28; // rax
  PVOID *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rdi
  int v35; // eax
  _BYTE *v36; // rbx
  PVOID *v37; // rdi
  bool v39; // zf
  int v40; // r8d
  _BYTE *v41; // rax
  int v42; // eax
  __int64 v43; // r10
  int v44; // r8d
  int v45; // eax
  int v46; // r10d
  int v47; // r8d
  int v48; // r8d
  int v49; // eax
  char v50; // al
  char v51; // al
  char v52; // di
  char v53; // al
  char v54; // al
  __int64 v55; // r10
  int v56; // eax
  PVOID v57; // rbx
  char v58; // [rsp+30h] [rbp-D0h]
  _BYTE v59[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v60[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v61; // [rsp+38h] [rbp-C8h] BYREF
  char v62; // [rsp+3Ch] [rbp-C4h] BYREF
  char v63; // [rsp+3Dh] [rbp-C3h]
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  _DWORD *v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  char v67; // [rsp+54h] [rbp-ACh]
  bool v68; // [rsp+55h] [rbp-ABh]
  int v69; // [rsp+58h] [rbp-A8h] BYREF
  int v70; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v71; // [rsp+60h] [rbp-A0h]
  _OWORD v72[5]; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v74; // [rsp+C8h] [rbp-38h]
  unsigned int v75; // [rsp+D0h] [rbp-30h]
  void *v76; // [rsp+D8h] [rbp-28h]
  PVOID v77; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  void *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  __int64 v83; // [rsp+110h] [rbp+10h]
  void *v84; // [rsp+118h] [rbp+18h]
  PCUNICODE_STRING String2; // [rsp+120h] [rbp+20h]
  __int128 v86; // [rsp+128h] [rbp+28h] BYREF
  __int128 v87; // [rsp+138h] [rbp+38h]
  char *v88; // [rsp+148h] [rbp+48h]
  __int128 v89; // [rsp+150h] [rbp+50h] BYREF
  PVOID P[16]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v91[256]; // [rsp+1E0h] [rbp+E0h] BYREF

  v12 = a12;
  ConstantOperand = 0;
  v80 = a5;
  v83 = a6;
  v84 = a3;
  v76 = a2;
  v74 = a1;
  v82 = a7;
  v81 = a4;
  v65 = a12;
  v66 = 0;
  LODWORD(v89) = 0;
  *((_QWORD *)&v89 + 1) = 0LL;
  memset(P, 0, sizeof(P));
  LOWORD(v72[0]) = 0;
  BYTE4(v72[0]) = 0;
  memset((char *)v72 + 5, 0, 0x4BuLL);
  v61 = -1;
  v88 = 0LL;
  v15 = 0;
  v78 = -1LL;
  v69 = 0;
  v70 = 0;
  v16 = 2LL;
  v73 = 0;
  v60[0] = 0;
  v63 = 0;
  v62 = 0;
  v59[0] = 0;
  v67 = 0;
  v58 = 0;
  v77 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  v86 = 0LL;
  HIDWORD(v86) = 1;
  v87 = 0LL;
  if ( !a1 || !a8 )
  {
    ConstantOperand = -1073741811;
    goto LABEL_40;
  }
  v68 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    ConstantOperand = -2147483601;
    goto LABEL_174;
  }
  AuthzBasepResetOperands(v72, v60);
  LODWORD(v17) = 4;
  v64 = 0;
  v18 = 0;
  if ( a9 <= 4 )
  {
LABEL_174:
    v15 = 0;
    goto LABEL_40;
  }
  while ( 1 )
  {
    v19 = *((unsigned __int8 *)a8 + (unsigned int)v17);
    if ( v19 != 248 )
    {
      if ( v19 == 162 )
      {
        LODWORD(v17) = v17 + 1;
        if ( !AuthzBasepIsValidExpression(162LL, (__int64)v72, v18, v59) )
          break;
        if ( v20 == 1 )
        {
          v61 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
          v21 = v61;
          AuthzBasepResetOperands(v72, v60);
        }
        else
        {
          ConstantOperand = AuthzBasepPopResult(v91, &v66, &v61);
          if ( ConstantOperand < 0 )
            goto LABEL_73;
          v21 = v61;
        }
        if ( v21 == -1 )
          v22 = -1;
        else
          v22 = v21 == 0;
LABEL_13:
        ConstantOperand = AuthzBasepPushResult((__int64)v91, &v66, v22);
        if ( ConstantOperand < 0 )
          goto LABEL_73;
      }
      else
      {
        switch ( *((_BYTE *)a8 + (unsigned int)v17) )
        {
          case 0:
            while ( 1 )
            {
              v17 = (unsigned int)(v17 + 1);
              v39 = (_DWORD)v17 == a9;
              if ( (unsigned int)v17 >= a9 )
                break;
              if ( *((_BYTE *)a8 + v17) )
              {
                v39 = (_DWORD)v17 == a9;
                break;
              }
            }
            if ( !v39 )
              goto LABEL_170;
            goto LABEL_38;
          case 1:
          case 2:
          case 3:
          case 4:
          case 0x10:
          case 0x18:
          case 0x50:
          case 0x51:
            if ( v18 != 2 )
              goto LABEL_55;
            if ( HIDWORD(v72[0]) == 1 )
              goto LABEL_170;
            v61 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
            ConstantOperand = AuthzBasepPushResult((__int64)v91, &v66, v61);
            if ( ConstantOperand < 0 )
              goto LABEL_73;
            if ( LOBYTE(v60[0]) )
              ExFreePoolWithTag(*(PVOID *)(v43 + 24), 0);
            v89 = *(_OWORD *)&P[7];
            *(_OWORD *)P = *(_OWORD *)&P[9];
            *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
            P[6] = P[15];
            *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
            *(_OWORD *)((char *)&v72[1] + 8) = v72[4];
            *(_QWORD *)&v72[1] = &v89;
            v60[0] = HIBYTE(v60[0]);
            v72[0] = *(_OWORD *)((char *)&v72[2] + 8);
            *(_OWORD *)((char *)&v72[2] + 8) = 0LL;
            *((_QWORD *)&v72[4] + 1) = 0LL;
            *(_OWORD *)((char *)&v72[3] + 8) = 0LL;
            memset(&P[7], 0, 0x48uLL);
            v18 = 1;
            v64 = 1;
LABEL_55:
            ConstantOperand = AuthzBasepGetConstantOperand(
                                (char *)a8 + (unsigned int)v17,
                                a9 - (unsigned int)v17,
                                (char *)v72 + 40 * v18,
                                &v73);
            if ( ConstantOperand < 0 )
              goto LABEL_73;
            v18 = v64 + 1;
            LODWORD(v17) = v73 + v17;
            goto LABEL_36;
          case 0x80:
          case 0x81:
          case 0x82:
          case 0x83:
          case 0x84:
          case 0x85:
          case 0x86:
          case 0x88:
          case 0x8E:
          case 0x8F:
            LODWORD(v17) = v17 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v19, (__int64)v72, v18, v59) )
            {
              ConstantOperand = -1073741406;
              if ( !v59[0] )
                goto LABEL_73;
LABEL_102:
              v40 = -1;
              v61 = -1;
              goto LABEL_60;
            }
            if ( v59[0] )
              goto LABEL_102;
            AuthzBasepEvaluateExpression((unsigned __int8)v19, v72, &v61);
            v40 = v61;
            if ( ((_BYTE)v19 == 0x8E || (_BYTE)v19 == 0x8F) && v61 != -1 )
            {
              v40 = v61 == 0;
              v61 = v40;
            }
LABEL_60:
            ConstantOperand = AuthzBasepPushResult((__int64)v91, &v66, v40);
            if ( ConstantOperand < 0 )
              goto LABEL_73;
            break;
          case 0x87:
          case 0x8D:
            LODWORD(v17) = v17 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v19, (__int64)v72, v18, v59) )
              goto LABEL_170;
            v22 = *(_QWORD *)&v72[1] != 0LL;
            v61 = v22;
            if ( (_BYTE)v19 == 0x8D )
            {
              v22 = *(_QWORD *)&v72[1] == 0LL;
              v61 = v22;
            }
            goto LABEL_13;
          case 0x89:
          case 0x8B:
          case 0x90:
          case 0x92:
            LODWORD(v17) = v17 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v19, (__int64)v72, v18, v59) )
            {
              ConstantOperand = -1073741406;
              if ( !v59[0] )
                goto LABEL_73;
LABEL_115:
              v22 = -1;
              v61 = -1;
              v49 = -1;
              goto LABEL_127;
            }
            if ( v59[0] )
            {
              v51 = v63;
            }
            else
            {
              v50 = (_BYTE)v19 == 0x89 || (_BYTE)v19 == 0x90;
              ConstantOperand = AuthzBasepMemberOf((unsigned int)v72, (_DWORD)v74, a10, a11, v50, (__int64)&v62);
              v51 = v62;
              v63 = v62;
            }
            if ( ConstantOperand < 0 )
              goto LABEL_115;
            if ( v51 )
            {
              v49 = 1;
              v22 = 1;
              v61 = 1;
            }
            else
            {
              v22 = 0;
              v61 = 0;
              v49 = 0;
            }
LABEL_127:
            v52 = v19 + 112;
            goto LABEL_130;
          case 0x8A:
          case 0x8C:
          case 0x91:
          case 0x93:
            LODWORD(v17) = v17 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v19, (__int64)v72, v18, v59) )
            {
              ConstantOperand = -1073741406;
              if ( !v59[0] )
                goto LABEL_73;
LABEL_135:
              v22 = -1;
              v61 = -1;
              v49 = -1;
              goto LABEL_129;
            }
            if ( v59[0] )
            {
              v54 = v63;
            }
            else
            {
              v53 = (_BYTE)v19 == 0x8A || (_BYTE)v19 == 0x91;
              ConstantOperand = AuthzBasepDeviceMemberOf((unsigned int)v72, (_DWORD)v74, a10, a11, v53, (__int64)&v62);
              v54 = v62;
              v63 = v62;
            }
            if ( ConstantOperand < 0 )
              goto LABEL_135;
            if ( v54 )
            {
              v49 = 1;
              v22 = 1;
              v61 = 1;
            }
            else
            {
              v22 = 0;
              v61 = 0;
              v49 = 0;
            }
LABEL_129:
            v52 = v19 + 111;
LABEL_130:
            if ( (v52 & 0xFD) == 0 && v49 != -1 )
            {
              v22 = v49 == 0;
              v61 = v22;
            }
            goto LABEL_13;
          case 0xA0:
          case 0xA1:
            LODWORD(v17) = v17 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v19, (__int64)v72, v18, v59) )
              goto LABEL_170;
            if ( v44 == 2 )
            {
              v69 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
              v45 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v72[3] + 1));
              v70 = v45;
            }
            else
            {
              if ( v44 == 1 )
              {
                v69 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
              }
              else
              {
                ConstantOperand = AuthzBasepPopResult(v91, &v66, &v69);
                if ( ConstantOperand < 0 )
                  goto LABEL_73;
              }
              ConstantOperand = AuthzBasepPopResult(v91, &v66, &v70);
              if ( ConstantOperand < 0 )
                goto LABEL_73;
              v45 = v70;
            }
            if ( (_BYTE)v19 == 0xA0 )
            {
              if ( !v46 || !v45 )
                goto LABEL_97;
              if ( v46 == -1 || v45 == -1 )
                goto LABEL_92;
            }
            else if ( v46 != 1 && v45 != 1 )
            {
              if ( v46 == -1 || v45 == -1 )
              {
LABEL_92:
                v47 = -1;
                v61 = -1;
                goto LABEL_99;
              }
LABEL_97:
              v47 = 0;
              v61 = 0;
              goto LABEL_99;
            }
            v61 = 1;
            v47 = 1;
LABEL_99:
            ConstantOperand = AuthzBasepPushResult((__int64)v91, &v66, v47);
            if ( ConstantOperand < 0 )
              goto LABEL_73;
            break;
          case 0xA3:
            LODWORD(v17) = v17 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v19, (__int64)v72, v18, v59) )
            {
              ConstantOperand = -1073741406;
              if ( !v59[0] )
                goto LABEL_73;
LABEL_107:
              v48 = -1;
              goto LABEL_108;
            }
            if ( v59[0] )
              goto LABEL_107;
            AuthzBasepComputeExpression((unsigned __int8)v19, v72, &v78);
            if ( v78 == -1 )
              goto LABEL_107;
            v48 = v78 != 0;
LABEL_108:
            v61 = v48;
            ConstantOperand = AuthzBasepPushResult((__int64)v91, &v66, v48);
            if ( ConstantOperand < 0 )
              goto LABEL_73;
            AuthzBasepResetOperands(v72, v60);
            v18 = v64;
            goto LABEL_37;
          case 0xF9:
          case 0xFA:
          case 0xFB:
          case 0xFC:
            goto LABEL_15;
          default:
            goto LABEL_170;
        }
      }
      AuthzBasepResetOperands(v72, v60);
      v18 = 0;
      v64 = 0;
      goto LABEL_37;
    }
LABEL_15:
    v23 = (unsigned int)(v17 + 1);
    if ( v18 == 2 )
    {
      if ( HIDWORD(v72[0]) == 1 )
        break;
      v61 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
      ConstantOperand = AuthzBasepPushResult((__int64)v91, &v66, v61);
      if ( ConstantOperand < 0 )
        goto LABEL_73;
      if ( LOBYTE(v60[0]) )
        ExFreePoolWithTag(*(PVOID *)(v55 + 24), 0);
      v89 = *(_OWORD *)&P[7];
      *(_OWORD *)P = *(_OWORD *)&P[9];
      *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
      P[6] = P[15];
      *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
      *(_OWORD *)((char *)&v72[1] + 8) = v72[4];
      *(_QWORD *)&v72[1] = &v89;
      v60[0] = HIBYTE(v60[0]);
      v72[0] = *(_OWORD *)((char *)&v72[2] + 8);
      *(_OWORD *)((char *)&v72[2] + 8) = 0LL;
      *((_QWORD *)&v72[4] + 1) = 0LL;
      *(_OWORD *)((char *)&v72[3] + 8) = 0LL;
      memset(&P[7], 0, 0x48uLL);
      v18 = 1;
      v64 = 1;
    }
    if ( a9 - (unsigned int)v23 < 4 )
      break;
    v24 = *(_DWORD *)((char *)a8 + v23);
    v25 = v23 + 4;
    v75 = v24;
    if ( a9 - v25 < v24 )
      break;
    if ( v24 > 0xFFFE )
    {
      ConstantOperand = -1073741562;
LABEL_73:
      v12 = v65;
      v15 = v58;
      goto LABEL_40;
    }
    DWORD2(v87) = v24;
    v88 = (char *)a8 + v25;
    v79 = (char *)v60 + v18;
    v26 = 9LL * v18;
    v71 = v26 * 8;
    String2 = (PCUNICODE_STRING)&P[v26];
    ConstantOperand = AuthzBasepUnicodeStringFromOperandValue(&v86, 0LL, &P[v26], v79);
    if ( ConstantOperand < 0 )
      goto LABEL_73;
    if ( (_BYTE)v19 == 0xF9 )
    {
      v27 = &P[v26 - 2];
      v28 = (void *)v80;
      if ( !a11 )
        v28 = v81;
      *(_DWORD *)v27 = 3;
    }
    else if ( (_BYTE)v19 == 0xFB )
    {
      v27 = &P[v26 - 2];
      v28 = (void *)v82;
      if ( !a11 )
        v28 = (void *)v83;
      *(_DWORD *)v27 = 5;
    }
    else
    {
      v27 = &P[v26 - 2];
      if ( (_BYTE)v19 == 0xFA )
      {
        v28 = v84;
        *(_DWORD *)v27 = 4;
      }
      else if ( (_BYTE)v19 == 0xFC )
      {
        v28 = v74;
        *(_DWORD *)v27 = 6;
      }
      else
      {
        v28 = v76;
        *(_DWORD *)v27 = 2;
      }
    }
    v29 = (PVOID *)((char *)&P[-1] + v71);
    v30 = v64;
    *(PVOID *)((char *)&P[-1] + v71) = v28;
    v31 = 9 * v30;
    P[v31 + 5] = 0LL;
    P[v31 + 6] = 0LL;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v27);
    if ( ConstantOperand != -1073741275 )
      goto LABEL_33;
    if ( *(_DWORD *)v27 == 2
      && (SepSingletonGlobal[4] & 1) != 0
      && (v74[50] & 0x20000) == 0
      && (unsigned __int8)SepPotentialGlobalTableAttribute(String2)
      && !v67 )
    {
      if ( v58 )
        goto LABEL_166;
      v56 = SepValidateAndCopyGlobalEntry(v76, &v77);
      ConstantOperand = v56;
      if ( v56 >= 0 )
      {
        v58 = 1;
LABEL_166:
        *v29 = v77;
        ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v27);
        if ( ConstantOperand != -1073741275 )
          goto LABEL_33;
        *v29 = v76;
        goto LABEL_30;
      }
      v67 = 1;
      if ( v56 != -1073741275 )
        goto LABEL_62;
    }
LABEL_30:
    if ( !v68 && *(_DWORD *)v27 == 2 )
    {
      *(_DWORD *)v27 = 7;
      *v29 = 0LL;
      ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v27);
LABEL_33:
      if ( ConstantOperand >= 0 )
      {
        v32 = v71;
        v33 = v64;
        v34 = 40LL * v64;
        *(_WORD *)((char *)v72 + v34) = *(_WORD *)((char *)&P[2] + v71);
        *(_DWORD *)((char *)v72 + v34 + 4) = *(_DWORD *)((char *)&P[3] + v32);
        *(_QWORD *)((char *)&v72[1] + v34) = v27;
        goto LABEL_35;
      }
LABEL_62:
      if ( ConstantOperand != -1073741275 )
        goto LABEL_73;
    }
    v33 = v64;
    ConstantOperand = 0;
    v34 = 40LL * v64;
    v41 = v79;
    *(_WORD *)((char *)v72 + v34) = 0;
    *(_DWORD *)((char *)v72 + v34 + 4) = 0;
    *(_QWORD *)((char *)&v72[1] + v34) = 0LL;
    if ( *v41 )
    {
      ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v71), 0);
      v33 = v64;
      if ( v64 >= 2 )
        _report_rangecheckfailure();
      *v79 = 0;
    }
LABEL_35:
    v35 = *(_DWORD *)v27;
    v18 = v33 + 1;
    LODWORD(v17) = v75 + v25;
    *(_DWORD *)((char *)&v72[1] + v34 + 8) = 0;
    *(_QWORD *)((char *)&v72[2] + v34) = 0LL;
    *(_DWORD *)((char *)v72 + v34 + 8) = 0;
    *(_DWORD *)((char *)v72 + v34 + 12) = v35;
LABEL_36:
    v64 = v18;
LABEL_37:
    if ( (unsigned int)v17 >= a9 )
    {
LABEL_38:
      if ( v66 == 1 )
      {
        v12 = v65;
        v15 = v58;
        *v65 = v91[0];
        goto LABEL_40;
      }
      if ( !v66 && v18 == 1 )
      {
        v42 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
        v12 = v65;
        v15 = v58;
        *v65 = v42;
        goto LABEL_40;
      }
      goto LABEL_73;
    }
  }
LABEL_170:
  v12 = v65;
  ConstantOperand = -1073741406;
  v15 = v58;
LABEL_40:
  v36 = v60;
  v37 = &P[1];
  do
  {
    if ( *v36 )
      ExFreePoolWithTag(*v37, 0);
    ++v36;
    v37 += 9;
    --v16;
  }
  while ( v16 );
  if ( v15 )
  {
    v57 = v77;
    if ( v77 )
    {
      AuthzBasepFreeSecurityAttributesList(v77);
      ExFreePoolWithTag(v57, 0x74416553u);
    }
  }
  if ( ConstantOperand < 0 )
    *v12 = -1;
  return (unsigned int)ConstantOperand;
}
