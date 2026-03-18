/*
 * XREFs of ViThunkGetWdmThunk @ 0x140A93F9C
 * Callers:
 *     ViThunkFindAllThunkedImports @ 0x140A93CE4 (ViThunkFindAllThunkedImports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 */

__int64 __fastcall ViThunkGetWdmThunk(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  char v5; // si
  int v6; // eax
  __int64 v7; // rax

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
    return 0LL;
  if ( *a2 )
  {
    while ( a1 != v3[2] )
    {
      v3 += 7;
      if ( !*v3 )
        return v2;
    }
    v5 = BYTE4(VfRuleClasses);
    if ( (VfRuleClasses & 0x800000000LL) == 0
      || (unsigned int)VfIsVerifierEnabled() && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v5 & 2) != 0) )
    {
      return v3[1];
    }
    v6 = *((_DWORD *)v3 + 8);
    if ( (v6 & 1) != 0 )
    {
      if ( (v6 & 4) == 0 )
      {
        v7 = v3[5];
        if ( *(_QWORD *)v7 )
          return *(_QWORD *)v7;
        return v2;
      }
      return v3[1];
    }
  }
  return v2;
}
