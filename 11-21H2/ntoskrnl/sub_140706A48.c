/*
 * XREFs of sub_140706A48 @ 0x140706A48
 * Callers:
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140706A48(unsigned int *a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v5; // r10d
  __int64 v6; // rcx

  result = *a1;
  v5 = 0;
  if ( (result & 1) != 0 )
  {
    *a3 = 1;
    a2[1] = sub_14068FEF0;
    v5 = 1;
    a2[2] = sub_14068FF20;
    result = *a1;
    if ( (result & 8) != 0 )
    {
      a3[1] = 4;
      v5 = 2;
      a2[6] = 0LL;
      a2[7] = 0LL;
      result = *a1;
    }
    if ( (result & 0x80u) != 0LL )
    {
      result = v5++;
      v6 = 5 * result;
      a3[result] = 8;
      a2[v6 + 1] = 0LL;
      a2[v6 + 2] = 0LL;
    }
  }
  *a4 = v5;
  return result;
}
