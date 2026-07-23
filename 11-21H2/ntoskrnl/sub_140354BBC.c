/*
 * XREFs of sub_140354BBC @ 0x140354BBC
 * Callers:
 *     sub_140354A90 @ 0x140354A90 (sub_140354A90.c)
 *     sub_1405D4D6C @ 0x1405D4D6C (sub_1405D4D6C.c)
 *     sub_1405D5360 @ 0x1405D5360 (sub_1405D5360.c)
 *     sub_140824268 @ 0x140824268 (sub_140824268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140354BBC(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v4; // zf

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !byte_140C20B28 && *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24 * v2 + 8) <= a2 )
        break;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  return (unsigned int)v2;
}
