/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x140225344
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x14022A270 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14022ABF8 (SepNormalAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepFilterCheck @ 0x1402B5F30 (SepFilterCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403CDE50 (SepMaximumAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x1408A64A0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CE8B4 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224DF8 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x14022599C (AuthzBasepMemAlloc.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14022CC80 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066EACC (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  int v11; // eax
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = a2;
  v17 = 2;
  v16 = 0;
  v15 = 256;
  v3 = 0;
  v18 = 0LL;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  *(_DWORD *)(v6 + 24) = 0;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_12;
  do
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v15 = 256;
    v4 = P;
    if ( *(_BYTE *)v7 != 18 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_7;
    v11 = 4 * *(unsigned __int8 *)(v7 + 9);
    v12 = *(unsigned __int16 *)(v7 + 2) - v11;
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + (unsigned int)(v11 + 8),
           (unsigned int)(v12 - 16),
           P,
           &v15);
    if ( v3 == -1073741789 )
    {
      v4 = (_BYTE *)AuthzBasepMemAlloc(v15, v13, 1950442835LL);
      if ( !v4 )
      {
        v3 = -1073741801;
LABEL_29:
        AuthzBasepFreeSecurityAttributesList(v6);
        ExFreePoolWithTag((PVOID)v6, 0);
        return (unsigned int)v3;
      }
      v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
             v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL),
             (unsigned int)(v12 - 16),
             v4,
             &v15);
    }
    if ( v3 < 0 )
      break;
    *((_QWORD *)&v18 + 1) = v4;
    LOWORD(v18) = 1;
    DWORD1(v18) = 1;
    v14 = AuthzBasepQuerySecurityAttributesToken(v6, v4, 1LL, 0LL, 0, &v16);
    v3 = v14;
    if ( v14 == -1073741789 || v14 == -1073741275 )
    {
      v3 = 0;
    }
    else if ( v14 < 0 )
    {
      break;
    }
    if ( v16 <= 0x10 )
    {
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v17, (__int64)&v18);
      if ( v3 < 0 )
        break;
    }
LABEL_7:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
  }
  while ( v9 < *(unsigned __int16 *)(a1 + 4) );
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
    goto LABEL_29;
LABEL_12:
  *v19 = v6;
  return (unsigned int)v3;
}
