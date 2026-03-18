/*
 * XREFs of AslStringPatternMatchExW @ 0x140851068
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14075B48C (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpCheckAttribute @ 0x140841858 (SdbpCheckAttribute.c)
 *     AslStringPatternMatchExW @ 0x140851068 (AslStringPatternMatchExW.c)
 *     KseLookupHardwareId @ 0x140964B50 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A111BC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckPackageAttributes @ 0x140A11F60 (SdbpCheckPackageAttributes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140A146FC (SdbpFindNextIndexedWildCardTag.c)
 *     AslpProcessMatchRegNode @ 0x140A17490 (AslpProcessMatchRegNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     AslStringPatternMatchExW @ 0x140851068 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(__int16 *a1, _WORD *a2)
{
  __int16 *v3; // rdi
  __int16 v4; // dx
  unsigned int v5; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v7; // dx
  _QWORD *v8; // rax
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  __int16 v11; // r10
  _WORD *v13; // r11
  _QWORD *v14; // rax
  unsigned __int16 v15; // dx
  _QWORD *v16; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int16 v19; // r10

  v3 = a1;
  v4 = *a1;
  v5 = 0;
  while ( v4 || *a2 )
  {
    if ( v4 == 63 )
      goto LABEL_8;
    if ( v4 != 42 )
    {
      if ( v4 != *a2 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        NLS_UPCASE(CurrentServerSiloGlobals[154], v7);
        v8 = PsGetCurrentServerSiloGlobals();
        v10 = NLS_UPCASE(v8[154], v9);
        if ( v11 != v10 )
          return v5;
      }
LABEL_8:
      ++v3;
      goto LABEL_9;
    }
    v13 = v3 + 1;
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
        if ( (unsigned int)AslStringPatternMatchExW(v13, a2) )
          return 1;
      }
LABEL_9:
      if ( !*a2 )
        return v5;
      v4 = *v3;
      ++a2;
    }
  }
  return 1;
}
