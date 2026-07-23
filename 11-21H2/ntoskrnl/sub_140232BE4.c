/*
 * XREFs of sub_140232BE4 @ 0x140232BE4
 * Callers:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140232BE4(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r11
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r11
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+88h] [rbp+10h]

  v4 = a2[4];
  v5 = a2[1];
  v6 = 2LL * a2[3];
  v7 = a2[2];
  v25 = a2[3];
  v10 = *(_QWORD *)(v5 + 8 * v6) + (v4 << 12);
  v26 = v4;
  v24 = v7;
  sub_140232E08(a2);
  v12 = a2[3];
  v13 = 1LL;
  if ( v12 < v7 )
  {
    v28 = 0;
    v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v15 = 256LL;
    if ( a4 && *(unsigned int *)(a1 + 1180) < 0x100uLL )
      v15 = *(unsigned int *)(a1 + 1180);
    if ( a3 )
    {
      v16 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v10 >> 12) + 1;
      if ( v15 <= v16 )
        v16 = v15;
      v15 = v16;
      v17 = *(unsigned int *)(a3 + 52);
      LODWORD(v17) = v17 & 0x7FFFFFFF;
      if ( v17 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        v28 = 1;
      }
    }
    if ( v15 > 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v14 & 0xFFF) == 0 || (v20 = sub_140317A10(v14), v23 = v20, v21 = v20, (v20 & 1) != 0) )
          {
LABEL_13:
            v11 = v25;
            v4 = v26;
            break;
          }
          v22 = v20 & 0x400;
          if ( v28 )
          {
            if ( !v22 )
              goto LABEL_13;
          }
          else if ( v22
                 || (v21 & 0x800) != 0
                 || !(unsigned int)sub_1402E76C0(&v23)
                 || a4 != (unsigned int)sub_140232E74(a1, v21) )
          {
            goto LABEL_13;
          }
          v14 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16 * v12) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v13;
          sub_140232E08(a2);
          v12 = a2[3];
          if ( v12 != v24 )
          {
            v10 = v18;
            if ( v13 < v15 )
              continue;
          }
        }
        goto LABEL_13;
      }
    }
  }
  a2[4] = v4;
  result = (unsigned int)v13;
  a2[3] = v11;
  return result;
}
