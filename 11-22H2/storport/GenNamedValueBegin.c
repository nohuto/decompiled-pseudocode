/*
 * XREFs of GenNamedValueBegin @ 0x1C00808C0
 * Callers:
 *     GenNamedValueBytes @ 0x1C0080908 (GenNamedValueBytes.c)
 *     GenNamedValueInt @ 0x1C0080970 (GenNamedValueInt.c)
 *     GenNamedValueListBegin @ 0x1C00809D8 (GenNamedValueListBegin.c)
 * Callees:
 *     GenShortInteger @ 0x1C0080B80 (GenShortInteger.c)
 *     GenTinyInteger @ 0x1C0080D78 (GenTinyInteger.c)
 */

__int64 __fastcall GenNamedValueBegin(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -14;
  ++*(_DWORD *)(a1 + 12);
  if ( a2 >= 0x40 )
    return GenShortInteger(a1);
  else
    return GenTinyInteger(a1);
}
