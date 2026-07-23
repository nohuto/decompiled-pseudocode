/*
 * XREFs of sub_140B2B9A0 @ 0x140B2B9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DB0A0 @ 0x1403DB0A0 (sub_1403DB0A0.c)
 */

__int64 __fastcall sub_140B2B9A0(unsigned int a1, _DWORD *a2, unsigned int *a3, PVOID **a4)
{
  __int64 *v4; // r10
  unsigned int v6; // r11d
  PVOID *v7; // rax
  __int64 *v9; // rbx

  v4 = (__int64 *)qword_140C4BCE0;
  v6 = -1;
  while ( v4 != &qword_140C4BCE0 )
  {
    v9 = v4;
    v4 = (__int64 *)*v4;
    if ( (v9[59] & 0x20) != 0 && *((_DWORD *)v9 + 128) < v6 )
      v6 = *((_DWORD *)v9 + 128);
  }
  *a2 = dword_140C4BCB4;
  *a3 = v6;
  v7 = sub_1403DB0A0(a1);
  *a4 = v7;
  return v7 == 0LL ? 0xC000009A : 0;
}
