/*
 * XREFs of SdbpGetDeviceDWORD @ 0x140A12454
 * Callers:
 *     SdbpMatchDeviceDWORD @ 0x140A12BF8 (SdbpMatchDeviceDWORD.c)
 * Callees:
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpGetDeviceDWORD(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax

  v3 = a3;
  v5 = -1;
  FirstTag = SdbFindFirstTag(a1, a2, a3);
  if ( FirstTag )
    return (unsigned int)SdbReadDWORDTag(a1, FirstTag, v3);
  return v5;
}
