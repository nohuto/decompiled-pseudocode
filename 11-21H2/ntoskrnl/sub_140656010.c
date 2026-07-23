/*
 * XREFs of sub_140656010 @ 0x140656010
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

bool __fastcall sub_140656010(_QWORD *a1, __int64 a2)
{
  char v2; // al
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( *a1 )
    {
      LOBYTE(a2) = 5;
      v2 = sub_14042A5E0(a1, a2);
      if ( v2 != -1 && (v2 & 1) != 0 )
        return 1;
    }
  }
  return result;
}
