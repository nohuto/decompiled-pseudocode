/*
 * XREFs of sub_140391B10 @ 0x140391B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140237E3C @ 0x140237E3C (sub_140237E3C.c)
 *     sub_140391B70 @ 0x140391B70 (sub_140391B70.c)
 *     sub_140391B9C @ 0x140391B9C (sub_140391B9C.c)
 */

void __fastcall sub_140391B10(_QWORD *a1)
{
  unsigned int v2; // edi

  *((_DWORD *)a1 + 6) = 0;
  v2 = sub_140391B9C(*a1, a1[1], a1[2]);
  sub_140237E3C((_SLIST_HEADER *)*a1, a1[2]);
  if ( v2 != -1073741550 )
  {
    sub_140391B70(*a1, a1[1], v2);
    *((_DWORD *)a1 + 6) = 1;
  }
}
