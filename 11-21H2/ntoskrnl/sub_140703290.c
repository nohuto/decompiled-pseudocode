/*
 * XREFs of sub_140703290 @ 0x140703290
 * Callers:
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 * Callees:
 *     sub_140294DD8 @ 0x140294DD8 (sub_140294DD8.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140703090 @ 0x140703090 (sub_140703090.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140703290(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int *a6)
{
  int v7; // r13d
  __int64 v8; // rsi
  int *v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rsi
  unsigned int v18; // edx
  unsigned int *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-88h]
  int v28; // [rsp+38h] [rbp-70h] BYREF
  int v29; // [rsp+3Ch] [rbp-6Ch]
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  _OWORD v32[2]; // [rsp+50h] [rbp-58h] BYREF

  v31 = a3;
  v28 = 0;
  v7 = 0;
  memset(v32, 0, sizeof(v32));
  v8 = 0LL;
  v30 = 0LL;
  v9 = (int *)v32;
  if ( a6 )
    v9 = a6;
  result = sub_140297F80(a4, &v28);
  if ( (int)result >= 0 )
  {
    v12 = v28;
    if ( (v28 & 4) != 0 )
      return 3221225659LL;
    result = sub_140703090(v11, a4, a5, v28, v9);
    v29 = result;
    if ( (int)result >= 0 )
    {
      if ( (a4 & 0x10000) != 0 )
      {
        v7 = 4;
        v8 = a5 + 716;
      }
      else
      {
        if ( (a4 & 0x100000) != 0 )
        {
          v8 = a5 + 1232;
        }
        else
        {
          if ( (a4 & 0x200000) != 0 )
          {
            v7 = 8;
            v8 = a5 + 416;
            goto LABEL_10;
          }
          if ( (a4 & 0x400000) == 0 )
            goto LABEL_11;
          v8 = a5 + 912;
        }
        v7 = 16;
      }
LABEL_10:
      v30 = v8;
LABEL_11:
      if ( (v12 & 1) != 0 )
      {
        v13 = (unsigned int)v9[3];
        if ( (_DWORD)v13 )
        {
          v14 = v9[2];
          if ( ((unsigned int)(v7 - 1) & (unsigned __int64)(v14 + v8)) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = v8 + v14 + v13;
          if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 + v8 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v16 = v12 & 2;
      if ( v16 )
      {
        v22 = (unsigned int)v9[5];
        if ( (_DWORD)v22 )
        {
          v23 = v9[4];
          v24 = v23 + v8;
          if ( (((_BYTE)v23 + (_BYTE)v8) & 0x3F) != 0 )
            ExRaiseDatatypeMisalignment();
          v25 = v8 + v22 + v23;
          if ( v25 > 0x7FFFFFFF0000LL || v25 < v24 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v26 = v8;
      v17 = v31;
      result = sub_140294DD8(a2, v31, 0LL, a4, v26, (__int64)v9);
      v18 = result;
      v29 = result;
      if ( (int)result < 0 )
        return result;
      v19 = (unsigned int *)(v17 + *(int *)(v17 + 8));
      if ( (a4 & 0x10000) == 0 )
      {
        if ( (a4 & 0x100000) != 0 )
        {
          v19[12] = a4;
LABEL_21:
          if ( v16 )
          {
            v20 = v17 + *(int *)(v17 + 16);
            v21 = *(_QWORD *)v20 & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
            *(_QWORD *)v20 = v21;
            if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            {
              *(_QWORD *)(v20 + 8) &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
              if ( (~*(_QWORD *)(v20 + 8) & v21) != 0 )
                return 3221225485LL;
            }
            else
            {
              *(_QWORD *)(v20 + 8) = 0LL;
            }
            *(_OWORD *)(v20 + 16) = 0LL;
            *(_OWORD *)(v20 + 32) = 0LL;
            *(_OWORD *)(v20 + 48) = 0LL;
          }
          return v18;
        }
        if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
          goto LABEL_21;
      }
      *v19 = a4;
      goto LABEL_21;
    }
  }
  return result;
}
