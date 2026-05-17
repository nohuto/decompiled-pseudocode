/*
 * XREFs of RtlpAddKnownObjectAce @ 0x1800F5C00
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800F5120 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F5190 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F5410 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x18001B170 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800691F0 (RtlCopySid.c)
 */

__int64 RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *a7,
        char a8,
        ...)
{
  __int64 result; // rax
  char v13; // di
  unsigned int v14; // r11d
  unsigned __int16 v15; // r8
  int v16; // r9d
  __int64 v17; // rdx
  _OWORD *v18; // rdx
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  v13 = 4;
  if ( *(_BYTE *)a1 > 4u )
    v13 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v19) )
    return 3221225591LL;
  v14 = 4 * a7[1] + 8;
  v15 = 4 * a7[1] + 8 + (a5 != 0LL ? 28 : 12);
  v16 = a5 != 0LL;
  if ( a6 )
  {
    v16 |= 2u;
    v15 += 16;
  }
  v17 = v19[0];
  if ( !v19[0] || v19[0] + (unsigned __int64)v15 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v19[0] + 1LL) = a3;
  *(_BYTE *)v17 = a8;
  *(_WORD *)(v17 + 2) = v15;
  *(_DWORD *)(v17 + 4) = a4;
  *(_DWORD *)(v17 + 8) = v16;
  v18 = (_OWORD *)(v17 + 12);
  if ( a5 )
    *v18++ = *a5;
  if ( a6 )
    *v18++ = *a6;
  RtlCopySid(v14, v18, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v13;
  return result;
}
