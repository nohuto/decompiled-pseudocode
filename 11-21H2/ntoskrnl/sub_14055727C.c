/*
 * XREFs of sub_14055727C @ 0x14055727C
 * Callers:
 *     sub_140556AEC @ 0x140556AEC (sub_140556AEC.c)
 * Callees:
 *     sub_1402A4064 @ 0x1402A4064 (sub_1402A4064.c)
 */

char __fastcall sub_14055727C(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // r8

  for ( i = sub_1402A4064(a1); i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)(i + 8) == v2 )
    {
      LOBYTE(i) = 1;
      return i;
    }
  }
  return i;
}
