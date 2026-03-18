/*
 * XREFs of RtlAddMandatoryAce @ 0x1407F2E70
 * Callers:
 *     IopCreateSecurityDescriptorPerType @ 0x14076B5C0 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2BF0 (ObpVerifyAccessToBoundaryEntry.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408851B8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x140B64194 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140B6D860 (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlCopySid @ 0x140714F70 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140736880 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1407373A0 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1407F2FF0 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5, int a6)
{
  int v10; // ecx
  unsigned __int8 v11; // si
  __int64 v12; // r8
  unsigned __int16 v13; // dx
  char v14; // cl
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  unsigned __int16 v18; // [rsp+2Ch] [rbp-3Ch]

  v16 = 0LL;
  v17 = 0;
  v18 = 4096;
  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2) - v17;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - v18;
  if ( v10 )
    return 3221225485LL;
  v11 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, &v16) )
    return 3221225591LL;
  v12 = v16;
  v13 = 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( !v16 || v16 + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v16 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 17;
  *(_DWORD *)(v12 + 4) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, (PSID)(v12 + 8), (PSID)a4);
  ++*(_WORD *)(a1 + 4);
  v14 = v11;
  if ( v11 <= (unsigned __int8)a2 )
    v14 = a2;
  result = 0LL;
  *(_BYTE *)a1 = v14;
  return result;
}
