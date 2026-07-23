/*
 * XREFs of sub_140A16D28 @ 0x140A16D28
 * Callers:
 *     sub_140A11E1C @ 0x140A11E1C (sub_140A11E1C.c)
 *     sub_140A16C68 @ 0x140A16C68 (sub_140A16C68.c)
 * Callees:
 *     sub_140A17490 @ 0x140A17490 (sub_140A17490.c)
 */

__int64 __fastcall sub_140A16D28(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v6; // ecx

  v2 = (_QWORD *)a2[2];
  if ( !v2 )
    return 2147483674LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v2 == a2 )
      {
        v6 = -2147483622;
        v2 = 0LL;
        goto LABEL_9;
      }
      v6 = sub_140A17490(v2, a2);
      if ( v6 >= 0 )
        break;
      v2 = (_QWORD *)v2[1];
    }
    if ( (_QWORD *)*v2 == a2 )
      break;
    v2 = (_QWORD *)*v2;
  }
  *a1 = v2[4];
LABEL_9:
  a2[2] = v2;
  return (unsigned int)v6;
}
