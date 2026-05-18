/*
 * XREFs of sub_18003F750 @ 0x18003F750
 * Callers:
 *     sub_1800419A0 @ 0x1800419A0 (sub_1800419A0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_18003F494 @ 0x18003F494 (sub_18003F494.c)
 *     sub_18003F604 @ 0x18003F604 (sub_18003F604.c)
 *     sub_18003FE7C @ 0x18003FE7C (sub_18003FE7C.c)
 *     sub_180042890 @ 0x180042890 (sub_180042890.c)
 *     sub_1800429B0 @ 0x1800429B0 (sub_1800429B0.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003F750(float *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = sub_18003F604((__int64)a3);
  sub_18003F494(a1, v17, a3, v6);
  if ( *((_QWORD *)&v17[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v16[0] = a1 + 2;
    v7 = sub_180029054(1uLL);
    v8 = (_QWORD *)sub_18001090C(v7);
    v16[1] = v8;
    v8[2] = *a3;
    v8[3] = 0LL;
    v8[4] = 0LL;
    v8[3] = a3[1];
    v8[4] = a3[2];
    a3[1] = 0LL;
    a3[2] = 0LL;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *a1 )
    {
      v14 = sub_180042890(a1);
      sub_1800429B0(a1, v14);
      v17[0] = *(_OWORD *)sub_18003F494(a1, v17, v8 + 2, v6);
    }
    *(_QWORD *)a2 = sub_180042B30(a1, v6, *(_QWORD *)&v17[0], v8, v16[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18003FE7C(v16);
  }
  return a2;
}
