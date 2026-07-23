/*
 * XREFs of sub_1406E1C0C @ 0x1406E1C0C
 * Callers:
 *     sub_14070E104 @ 0x14070E104 (sub_14070E104.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406E1C0C(_DWORD *a1)
{
  char v1; // dl
  int v2; // ecx

  v1 = 0;
  switch ( *a1 & 3 )
  {
    case 1:
      v1 = 13;
      break;
    case 2:
      v1 = 58;
      break;
    case 3:
      v1 = 9;
      break;
  }
  v2 = ((*(_QWORD *)a1 >> 4) & 3) - 1;
  if ( !v2 )
    return v1 | 8;
  if ( v2 == 1 )
    return v1 | 0x48;
  return v1;
}
