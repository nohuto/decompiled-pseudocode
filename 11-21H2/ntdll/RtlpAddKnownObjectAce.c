/*
 * XREFs of RtlpAddKnownObjectAce @ 0x1800F4AB0
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800F3FD0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F4040 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F42C0 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlCopySid @ 0x18000F120 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180048120 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180048180 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180048720 (RtlValidSid.c)
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
  unsigned int v13; // r11d
  unsigned __int16 v14; // r8
  int v15; // r9d
  __int64 v16; // rdx
  _OWORD *v17; // rdx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v18) )
    return 3221225591LL;
  v13 = 4 * a7[1] + 8;
  v14 = 4 * a7[1] + 8 + (a5 != 0LL ? 28 : 12);
  v15 = a5 != 0LL;
  if ( a6 )
  {
    v15 |= 2u;
    v14 += 16;
  }
  v16 = v18[0];
  if ( !v18[0] || v18[0] + (unsigned __int64)v14 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v18[0] + 1LL) = a3;
  *(_BYTE *)v16 = a8;
  *(_WORD *)(v16 + 2) = v14;
  *(_DWORD *)(v16 + 4) = a4;
  *(_DWORD *)(v16 + 8) = v15;
  v17 = (_OWORD *)(v16 + 12);
  if ( a5 )
    *v17++ = *a5;
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(v13, v17, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
