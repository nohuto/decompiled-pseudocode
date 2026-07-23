/*
 * XREFs of sub_1407F3230 @ 0x1407F3230
 * Callers:
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 */

__int64 __fastcall sub_1407F3230(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, __int64 a4)
{
  unsigned __int8 v6; // bl
  int v7; // ebp
  __int64 **i; // r14
  __int64 v9; // rcx

  *(_BYTE *)(a4 + 52) = a3;
  if ( !a3 )
    return 1LL;
  v6 = 1;
  *(_DWORD *)(a4 + 32) = 1;
  *(_DWORD *)(a4 + 36) = 1;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)a4);
  v7 = 0;
  *(_BYTE *)(a4 + 53) = 0;
  for ( i = &off_140A38B40; ; ++i )
  {
    v9 = **i;
    *(_DWORD *)(a4 + 48) = 0;
    *(_QWORD *)(a4 + 40) = v9;
    if ( SePrivilegeCheck((PPRIVILEGE_SET)(a4 + 32), (PSECURITY_SUBJECT_CONTEXT)a4, a3) == 1 )
      break;
    if ( (unsigned int)++v7 >= 2 )
      return *(unsigned __int8 *)(a4 + 53);
  }
  *(_BYTE *)(a4 + 53) = 1;
  return v6;
}
