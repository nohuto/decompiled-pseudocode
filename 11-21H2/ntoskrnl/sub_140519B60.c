/*
 * XREFs of sub_140519B60 @ 0x140519B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140519B60(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    *(_BYTE *)(a1 + 216) = 1;
    return sub_14042A5E0(*(_QWORD *)(a1 + 64), a2);
  }
  else
  {
    *(_BYTE *)(a1 + 216) = 0;
  }
  return result;
}
