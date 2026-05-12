/*
 * XREFs of GenDataBytes @ 0x1C00806B8
 * Callers:
 *     GenAssignNamespaceParams @ 0x1C007AB90 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x1C007ABF0 (GenDeassignNamespaceParams.c)
 *     GenSetTableColumnParams @ 0x1C007C100 (GenSetTableColumnParams.c)
 *     GenSetACEBooleanExpr @ 0x1C007CE10 (GenSetACEBooleanExpr.c)
 *     GenAuthenticateParams @ 0x1C007E170 (GenAuthenticateParams.c)
 *     GenSetTPerPropertiesParams @ 0x1C007E1E0 (GenSetTPerPropertiesParams.c)
 *     GenStartSessionParams @ 0x1C007E3E0 (GenStartSessionParams.c)
 *     GenCallMethodBegin @ 0x1C0080564 (GenCallMethodBegin.c)
 *     GenDataBytes @ 0x1C00806B8 (GenDataBytes.c)
 *     GenNamedValueBytes @ 0x1C0080908 (GenNamedValueBytes.c)
 * Callees:
 *     GenDataBytes @ 0x1C00806B8 (GenDataBytes.c)
 *     GenLongDataBytes @ 0x1C0080740 (GenLongDataBytes.c)
 *     GenMediumDataBytes @ 0x1C0080810 (GenMediumDataBytes.c)
 *     GenShortDataBytes @ 0x1C0080ADC (GenShortDataBytes.c)
 */

__int64 __fastcall GenDataBytes(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a3 <= 0xF )
    return GenShortDataBytes();
  if ( a3 <= 0x7FF )
    return GenMediumDataBytes();
  if ( a3 <= 0xFFFFFF )
    return GenLongDataBytes(a1, a2, a3, 0LL);
  LOBYTE(a4) = 1;
  result = GenLongDataBytes(a1, a2, 0xFFFFFFLL, a4);
  if ( (int)result >= 0 )
    return GenDataBytes(a1, a2 + 0xFFFFFF, a3 - 0xFFFFFF);
  return result;
}
