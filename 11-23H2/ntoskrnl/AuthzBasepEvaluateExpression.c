/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x14030C134
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022C050 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepEvaluateSetRelationship @ 0x14030C048 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C3E8 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x14030CE08 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14066F7B0 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14066FA3C (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14066FB60 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebp
  unsigned int v4; // r14d
  bool v5; // zf
  unsigned __int16 *v6; // r9
  unsigned int v9; // ebx
  int v10; // r15d
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax

  v3 = 0;
  v4 = a1;
  v5 = *(_DWORD *)(a2 + 12) == 1;
  v6 = (unsigned __int16 *)(a2 + 40);
  *a3 = 0;
  if ( !v5 )
    v6 = (unsigned __int16 *)a2;
  v9 = 0;
  v10 = *v6;
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2) )
    goto LABEL_9;
  if ( v4 > 0x85 )
  {
    if ( v4 == 134 )
    {
LABEL_6:
      v11 = AuthzBasepEvaluateSetRelationship(1, a2, a3);
      goto LABEL_7;
    }
    if ( v4 != 136 )
    {
      if ( v4 == 142 )
        goto LABEL_6;
      if ( v4 != 143 )
        return v9;
    }
    v9 = AuthzBasepEvaluateSetRelationship(2, a2, a3);
    if ( (v9 & 0x80000000) == 0 )
      return v9;
    goto LABEL_10;
  }
  if ( v4 == 133 )
  {
LABEL_16:
    v13 = (unsigned int)(v10 - 1);
    if ( v10 == 1 || (v13 = (unsigned int)(v10 - 2), v10 == 2) )
    {
      LOBYTE(v13) = v4;
      v17 = AuthzBasepCompareIntegerOperands(v13, a2);
      goto LABEL_28;
    }
    v14 = (unsigned int)(v10 - 3);
    if ( v10 == 3 )
    {
      LODWORD(v14) = (unsigned __int8)v4;
      v11 = AuthzBasepCompareUnicodeStringOperands(v14, a2, a3);
    }
    else
    {
      v15 = (unsigned int)(v10 - 4);
      if ( v10 != 4 )
      {
        v16 = (unsigned int)(v10 - 5);
        if ( v10 == 5 || v10 == 16 )
        {
          LOBYTE(v16) = v4;
          v17 = AuthzBasepCompareOctetStringOperands(v16, a2);
LABEL_28:
          *a3 = v17;
          return v9;
        }
LABEL_9:
        v9 = -1073741406;
        goto LABEL_10;
      }
      LODWORD(v15) = (unsigned __int8)v4;
      v11 = AuthzBasepCompareFQBNOperands(v15, a2, a3);
    }
LABEL_7:
    v9 = v11;
    if ( v11 >= 0 )
      return v9;
LABEL_10:
    *a3 = -1;
    return v9;
  }
  if ( v4 == 128 || v4 == 129 )
  {
    v9 = AuthzBasepEvaluateSetRelationship(0, a2, a3);
    if ( (v9 & 0x80000000) != 0 )
      goto LABEL_10;
    if ( (_BYTE)v4 == 0x81 && *a3 != -1 )
    {
      LOBYTE(v3) = *a3 == 0;
      *a3 = v3;
    }
  }
  else if ( v4 == 130 || v4 - 131 <= 1 )
  {
    goto LABEL_16;
  }
  return v9;
}
