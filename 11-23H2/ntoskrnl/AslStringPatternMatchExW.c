/*
 * XREFs of AslStringPatternMatchExW @ 0x1407C686C
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1407570E8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407589F0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpCheckAttribute @ 0x140758F80 (SdbpCheckAttribute.c)
 *     AslStringPatternMatchExW @ 0x1407C686C (AslStringPatternMatchExW.c)
 *     AslStringPatternMatchW @ 0x1408AC1E6 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x140977388 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FAFC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51B40 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C20 (SdbpFindNextNamedTagHelper.c)
 *     AslpProcessMatchRegNode @ 0x140A56AE0 (AslpProcessMatchRegNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D310 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     AslStringPatternMatchExW @ 0x1407C686C (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(__int16 *a1, _WORD *a2)
{
  __int16 *v3; // rdi
  __int16 v4; // dx
  unsigned int v5; // ebx
  _WORD *v6; // r10
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v9; // dx
  _QWORD *v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int16 v13; // r9
  _QWORD *v14; // rax
  unsigned __int16 v15; // dx
  _QWORD *v16; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int16 v19; // r9

  v3 = a1;
  v4 = *a1;
  v5 = 0;
  while ( v4 || *a2 )
  {
    if ( v4 == 63 )
      goto LABEL_11;
    if ( v4 != 42 )
    {
      if ( v4 != *a2 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        NLS_UPCASE(CurrentServerSiloGlobals[154], v9);
        v10 = PsGetCurrentServerSiloGlobals();
        v12 = NLS_UPCASE(v10[154], v11);
        if ( v13 != v12 )
          return v5;
      }
LABEL_11:
      ++v3;
      goto LABEL_12;
    }
    v6 = v3 + 1;
    v4 = v3[1];
    if ( v4 == 42 )
    {
      ++v3;
    }
    else
    {
      if ( !v4 )
        return 1;
      if ( v4 == *a2
        || (v14 = PsGetCurrentServerSiloGlobals(),
            NLS_UPCASE(v14[154], v15),
            v16 = PsGetCurrentServerSiloGlobals(),
            v18 = NLS_UPCASE(v16[154], v17),
            v19 == v18) )
      {
        if ( (unsigned int)AslStringPatternMatchExW(v6, a2) )
          return 1;
      }
LABEL_12:
      if ( !*a2 )
        return v5;
      v4 = *v3;
      ++a2;
    }
  }
  return 1;
}
