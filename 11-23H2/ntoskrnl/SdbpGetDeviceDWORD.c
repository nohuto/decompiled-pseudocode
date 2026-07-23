/*
 * XREFs of SdbpGetDeviceDWORD @ 0x140A510C8
 * Callers:
 *     SdbpMatchDeviceDWORD @ 0x140A51874 (SdbpMatchDeviceDWORD.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x140755648 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
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
