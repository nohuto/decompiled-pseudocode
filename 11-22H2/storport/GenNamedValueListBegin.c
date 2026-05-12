/*
 * XREFs of GenNamedValueListBegin @ 0x1C00809D8
 * Callers:
 *     GenSetTableColumnParams @ 0x1C007C100 (GenSetTableColumnParams.c)
 *     GenActivateParams @ 0x1C007CD40 (GenActivateParams.c)
 *     GenSetACEBooleanExpr @ 0x1C007CE10 (GenSetACEBooleanExpr.c)
 *     GenSetTPerPropertiesParams @ 0x1C007E1E0 (GenSetTPerPropertiesParams.c)
 * Callees:
 *     GenNamedValueBegin @ 0x1C00808C0 (GenNamedValueBegin.c)
 */

__int64 __fastcall GenNamedValueListBegin(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = GenNamedValueBegin(a1, a2);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)(v4 + 1) <= *(_DWORD *)(a1 + 8) )
    {
      *(_BYTE *)(v4 + *(_QWORD *)a1) = -16;
      ++*(_DWORD *)(a1 + 12);
      return 0LL;
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
