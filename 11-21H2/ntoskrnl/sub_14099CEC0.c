/*
 * XREFs of sub_14099CEC0 @ 0x14099CEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1409941B8 @ 0x1409941B8 (sub_1409941B8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14099CEC0(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _DWORD v4[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v5[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v6; // [rsp+48h] [rbp-18h]

  sub_140A48330(a1);
  sub_1409941B8();
  dword_140C22710 = 0;
  v6 = 0LL;
  if ( dword_140C22728 == 1 )
    goto LABEL_10;
  if ( dword_140C22728 != 2 )
  {
    if ( dword_140C22728 == 3 )
    {
      v5[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140C22728 == 4 )
    {
      v5[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v5[0] = 6;
    goto LABEL_11;
  }
  v5[0] = 11;
  if ( qword_140C22818
    && MEMORY[0xFFFFF78000000008] - qword_140C22818 > 10000000 * (unsigned __int64)(unsigned int)dword_140D052C4 )
  {
    v5[0] = 12;
  }
LABEL_11:
  v4[2] = 0;
  v5[1] = 128;
  v4[0] = 3;
  v4[1] = -2147483612;
  sub_1407FEC6C(v5, 0, v4, 5, 1u);
  sub_140A47CF8(v2, v1);
  _InterlockedAnd(&dword_140C2272C, 0);
  return sub_1402D6004(4u);
}
