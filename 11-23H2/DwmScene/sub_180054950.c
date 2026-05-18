/*
 * XREFs of sub_180054950 @ 0x180054950
 * Callers:
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_18005A1F0 @ 0x18005A1F0 (sub_18005A1F0.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18006FA10 @ 0x18006FA10 (sub_18006FA10.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_18008E858 @ 0x18008E858 (sub_18008E858.c)
 *     sub_18008E95C @ 0x18008E95C (sub_18008E95C.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_1800961E0 @ 0x1800961E0 (sub_1800961E0.c)
 *     sub_18009A23C @ 0x18009A23C (sub_18009A23C.c)
 *     sub_18009CB54 @ 0x18009CB54 (sub_18009CB54.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_180054690 @ 0x180054690 (sub_180054690.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180054950(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // r9
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 *v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h]

  v4 = *(_DWORD **)(a1 + 112);
  *v4 = *a2;
  v4[1] = a2[1];
  v4[2] = a2[2];
  v4[3] = a2[3];
  v4[4] = a2[4];
  v4[5] = a2[5];
  v4[6] = a2[6];
  v4[7] = a2[7];
  v4[8] = a2[8];
  v4[9] = a2[9];
  v4[10] = a2[10];
  v4[11] = a2[11];
  v4[12] = a2[12];
  if ( a3 )
    sub_180029870(a1, 1, 1);
  result = sub_180029664(a1, 1);
  if ( result )
  {
    if ( v7 )
    {
      v8 = (__int64 *)sub_180011D4C(v7 + 8, &v15);
      sub_180054690(a1, v8);
      if ( v16 )
        sub_180010530(v16);
      sub_180029870(a1, 2, 0);
      return sub_180029870(v10, v9 + 4, v9);
    }
    else
    {
      v11 = sub_180029630(v6);
      sub_18003655C(v11, &v17);
      v12 = 0;
      v13 = v17;
      if ( (v18 - v17) >> 4 )
      {
        v14 = 0LL;
        do
        {
          sub_18001246C(&v15, (_QWORD *)(v13 + 16 * v14));
          sub_180054690(a1, &v15);
          if ( v16 )
            sub_180010530(v16);
          ++v12;
          v13 = v17;
          v14 = v12;
        }
        while ( v12 < (unsigned __int64)((v18 - v17) >> 4) );
      }
      return sub_180013300((__int64)&v17);
    }
  }
  return result;
}
