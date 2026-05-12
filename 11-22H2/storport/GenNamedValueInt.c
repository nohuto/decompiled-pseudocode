/*
 * XREFs of GenNamedValueInt @ 0x1C0080970
 * Callers:
 *     GenAssignNamespaceParams @ 0x1C007AB90 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x1C007ABF0 (GenDeassignNamespaceParams.c)
 *     GenGetBandMetadataParams @ 0x1C007AC40 (GenGetBandMetadataParams.c)
 *     GenSetBandMetadataParams @ 0x1C007ACE0 (GenSetBandMetadataParams.c)
 *     GenGetTableColumnParams @ 0x1C007C070 (GenGetTableColumnParams.c)
 *     GenActivateParams @ 0x1C007CD40 (GenActivateParams.c)
 * Callees:
 *     GenNamedValueBegin @ 0x1C00808C0 (GenNamedValueBegin.c)
 *     GenShortInteger @ 0x1C0080B80 (GenShortInteger.c)
 *     GenTinyInteger @ 0x1C0080D78 (GenTinyInteger.c)
 */

__int64 __fastcall GenNamedValueInt(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = GenNamedValueBegin(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a3 >= 0x40 )
      result = GenShortInteger(a1);
    else
      result = GenTinyInteger(a1);
    if ( (int)result >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v6 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
