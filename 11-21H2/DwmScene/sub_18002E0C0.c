/*
 * XREFs of sub_18002E0C0 @ 0x18002E0C0
 * Callers:
 *     sub_18002F3B0 @ 0x18002F3B0 (sub_18002F3B0.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_18002CE1C @ 0x18002CE1C (sub_18002CE1C.c)
 *     sub_18002CE90 @ 0x18002CE90 (sub_18002CE90.c)
 *     sub_18002CF04 @ 0x18002CF04 (sub_18002CF04.c)
 *     sub_18002D448 @ 0x18002D448 (sub_18002D448.c)
 *     sub_18002D554 @ 0x18002D554 (sub_18002D554.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_1800B3360 @ 0x1800B3360 (sub_1800B3360.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18002E0C0(_QWORD *a1, __int64 *a2)
{
  bool i; // cf
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  char **v14; // r15
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  char **v29; // r15
  __int64 v30; // r13
  __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-E0h]
  _BYTE v35[136]; // [rsp+30h] [rbp-D0h] BYREF
  char *v36[3]; // [rsp+B8h] [rbp-48h] BYREF
  char *v37[26]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+1B0h] [rbp+B0h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v34 = 1;
  for ( i = a1[51] < a1[60]; i; i = a1[51] < a1[60] )
  {
    sub_18002D554((__int64)v35);
    v5 = sub_1800B3360(a1[55], a1[51], v35);
    if ( v5 )
    {
      if ( ((v5 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( ((v5 - 1) & 0xFFFFFFFD) == 0 )
        {
          sub_18002CCFC((__int64)v36, (__int64)v36, *((char **)v36[0] + 1));
          sub_180010884(v36[0], 0x58uLL);
          return a2;
        }
      }
      else
      {
        memset(v37, 0, 0x98uLL);
        v19 = sub_18002D554((__int64)v37);
        v38 = v19;
        v21 = a2[1];
        v22 = a2[2];
        if ( v21 == v22 )
        {
          v23 = (v21 - *a2) / 152;
          v24 = 0x86BCA1AF286BCA1BuLL * ((v21 - *a2) >> 3);
          if ( v24 == 0x1AF286BCA1AF286LL )
            sub_180012170();
          v25 = v24 + 1;
          v26 = 0x86BCA1AF286BCA1BuLL * ((v22 - *a2) >> 3);
          v27 = v26 >> 1;
          if ( v26 <= 0x1AF286BCA1AF286LL - (v26 >> 1) )
          {
            v28 = v24 + 1;
            if ( v27 + v26 >= v25 )
              v28 = v27 + v26;
            if ( v28 > 0x1AF286BCA1AF286LL )
              sub_1800120D4();
          }
          else
          {
            v28 = 0x1AF286BCA1AF286LL;
          }
          v29 = (char **)sub_180011088(152 * v28);
          v30 = (__int64)&v29[19 * v23];
          sub_18002CF04(v31, v30, v38);
          v32 = a2[1];
          v33 = *a2;
          if ( v21 == v32 )
          {
            sub_18002CE1C(v33, v32, v29);
          }
          else
          {
            sub_18002CE90(v33, v21, v29);
            sub_18002CE90(v21, a2[1], (char **)(v30 + 152));
          }
          sub_18002FB30(a2, v29, v25, v28, v34);
        }
        else
        {
          sub_18002CF04(v20, a2[1], v19);
          a2[1] += 152LL;
        }
        sub_18002CCFC((__int64)&v37[17], (__int64)&v37[17], *((char **)v37[17] + 1));
        sub_180010884(v37[17], 0x58uLL);
      }
    }
    else
    {
      v6 = a2[1];
      v7 = a2[2];
      if ( v6 == v7 )
      {
        v8 = (v6 - *a2) / 152;
        v9 = 0x86BCA1AF286BCA1BuLL * ((v6 - *a2) >> 3);
        if ( v9 == 0x1AF286BCA1AF286LL )
          sub_180012170();
        v10 = v9 + 1;
        v11 = 0x86BCA1AF286BCA1BuLL * ((v7 - *a2) >> 3);
        v12 = v11 >> 1;
        if ( v11 <= 0x1AF286BCA1AF286LL - (v11 >> 1) )
        {
          v13 = v9 + 1;
          if ( v12 + v11 >= v10 )
            v13 = v12 + v11;
          if ( v13 > 0x1AF286BCA1AF286LL )
            sub_1800120D4();
        }
        else
        {
          v13 = 0x1AF286BCA1AF286LL;
        }
        v14 = (char **)sub_180011088(152 * v13);
        v15 = (__int64)&v14[19 * v8];
        sub_18002D448(v15, (__int64)v35);
        v16 = a2[1];
        v17 = *a2;
        if ( v6 == v16 )
        {
          sub_18002CE1C(v17, v16, v14);
        }
        else
        {
          sub_18002CE90(v17, v6, v14);
          sub_18002CE90(v6, a2[1], (char **)(v15 + 152));
        }
        sub_18002FB30(a2, v14, v10, v13, v34);
      }
      else
      {
        sub_18002D448(v6, (__int64)v35);
        a2[1] += 152LL;
      }
    }
    ++a1[51];
    sub_18002CCFC((__int64)v36, (__int64)v36, *((char **)v36[0] + 1));
    sub_180010884(v36[0], 0x58uLL);
  }
  return a2;
}
