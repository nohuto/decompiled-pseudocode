/*
 * XREFs of sub_1403507F0 @ 0x1403507F0
 * Callers:
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140350700 @ 0x140350700 (sub_140350700.c)
 *     sub_140350FA0 @ 0x140350FA0 (sub_140350FA0.c)
 *     sub_140365610 @ 0x140365610 (sub_140365610.c)
 *     sub_14036F520 @ 0x14036F520 (sub_14036F520.c)
 * Callees:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_140351C40 @ 0x140351C40 (sub_140351C40.c)
 */

__int64 __fastcall sub_1403507F0(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rbp
  int v9; // r13d
  int v10; // edx
  unsigned int v12; // esi
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // r11d
  char v17; // cl
  unsigned __int64 v18; // r10
  int v19; // r9d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r10
  unsigned int v22; // edx
  int v23; // ebx
  unsigned __int64 v24; // rbp
  unsigned int v25; // ecx
  int v26; // edx
  unsigned __int64 v27; // rbp
  int v28; // ecx
  unsigned int v29; // r8d
  int v30; // edx
  unsigned int v31; // r11d
  __int64 result; // rax
  unsigned int v33; // r8d
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // r8d
  unsigned int v42; // edx
  int v43; // ebx
  int v44; // r8d
  unsigned int v45; // [rsp+40h] [rbp-58h]
  unsigned int v46; // [rsp+44h] [rbp-54h]
  int v47; // [rsp+48h] [rbp-50h]
  int v48; // [rsp+A0h] [rbp+8h]
  unsigned int v50; // [rsp+B0h] [rbp+18h] BYREF
  int v51; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a3 + a4;
  v7 = a2;
  v9 = (a5 >> 22) & 2;
  v10 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v10 = 0x7FFF;
  v12 = a3;
  v47 = v10;
  v13 = (unsigned int)((v7 - (v7 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v6 = a3 - a4;
  v14 = 0;
  v48 = 0;
  if ( a3 >= v6 )
    goto LABEL_16;
  while ( 1 )
  {
    v15 = v10 - (v10 & (v12 + v13)) + 1;
    if ( v15 >= v6 - v12 )
      v15 = v6 - v12;
    v16 = 1 << *(_BYTE *)(a1 + 9);
    v17 = *(_BYTE *)(a1 + 9);
    v46 = v15;
    v18 = (unsigned __int64)v12 >> v17;
    v19 = -1;
    v20 = v7 + 32 * v18;
    v21 = v18 << v17;
    v51 = -1;
    v50 = v12 & (v16 - 1);
    v22 = v15 - 1 + v50;
    v23 = 0;
    v24 = (unsigned __int64)v22 >> v17;
    v25 = v50;
    v26 = ((v16 - 1) & v22) + 1;
    v27 = v20 + 32 * v24;
    v45 = v26;
    if ( v50 )
    {
      v41 = v16;
      if ( v20 == v27 )
        v41 = v26;
      v42 = *(unsigned __int8 *)(v20 + 25);
      if ( a4 <= 0 )
      {
        if ( v42 > v50 )
        {
          v43 = v12 & (v16 - 1);
          v41 = *(unsigned __int8 *)(v20 + 25);
          goto LABEL_59;
        }
      }
      else if ( v42 < v41 )
      {
        v43 = v41;
        v25 = *(unsigned __int8 *)(v20 + 25);
LABEL_59:
        v44 = v21 + v41;
        v23 = v43 - v42;
        v51 = v44;
        v19 = v21 + v25;
        if ( v23 )
        {
          v51 = v44;
          if ( a4 <= 0 )
          {
            v51 = v44;
            *(_BYTE *)(v20 + 25) = v23 + v42;
          }
        }
      }
      v20 += 32LL;
      LODWORD(v21) = v16 + v21;
    }
    for ( ; v20 < v27; LODWORD(v21) = v16 + v21 )
    {
      v33 = *(unsigned __int8 *)(v20 + 25);
      v34 = 0;
      v35 = v19;
      if ( a4 <= 0 )
      {
        if ( *(_BYTE *)(v20 + 25) )
        {
          v38 = v21;
          v34 = -v33;
          if ( v19 != -1 )
            v38 = v19;
          v19 = v38;
          v36 = *(unsigned __int8 *)(v20 + 25);
          goto LABEL_27;
        }
      }
      else if ( v33 < v16 )
      {
        v19 = v33 + v21;
        v34 = v16 - v33;
        if ( v35 != -1 )
          v19 = v35;
        v36 = v16;
LABEL_27:
        v37 = v21 + v36;
        v51 = v37;
        if ( v34 )
        {
          v51 = v37;
          if ( a4 <= 0 )
          {
            v51 = v37;
            *(_BYTE *)(v20 + 25) = v34 + v33;
          }
        }
      }
      v23 += v34;
      v20 += 32LL;
    }
    v28 = v19;
    if ( v20 != v27 )
      goto LABEL_14;
    v29 = *(unsigned __int8 *)(v20 + 25);
    v30 = 0;
    if ( a4 <= 0 )
    {
      if ( !*(_BYTE *)(v20 + 25) )
        goto LABEL_13;
      v40 = v21;
      v30 = -v29;
      v31 = *(unsigned __int8 *)(v20 + 25);
      if ( v19 != -1 )
        v40 = v19;
      v19 = v40;
LABEL_43:
      v51 = v21 + v31;
      if ( v30 )
      {
        v51 = v21 + v31;
        if ( a4 <= 0 )
        {
          v51 = v21 + v31;
          *(_BYTE *)(v20 + 25) = v30 + v29;
        }
      }
      goto LABEL_13;
    }
    v31 = v45;
    if ( v29 < v45 )
    {
      v19 = v21 + v29;
      v30 = v45 - v29;
      if ( v28 != -1 )
        v19 = v28;
      goto LABEL_43;
    }
LABEL_13:
    v23 += v30;
LABEL_14:
    v7 = a2;
    if ( !v23 )
      goto LABEL_15;
    v50 = v19;
    v51 -= v19;
    if ( v23 <= 0 )
    {
      v39 = 0x4000;
    }
    else
    {
      v39 = 4096;
      if ( (a5 & 2) != 0 )
        v39 = 1073745920;
    }
    result = sub_140351880(a1, v23, v39, v9);
    if ( (int)result < 0 )
      return result;
    if ( v23 > 0 )
      sub_140351C40(a1, a2, (unsigned int)&v50, (unsigned int)&v51, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v23);
    *(_WORD *)(a2 + 28) = ~(v23 + ~*(_WORD *)(a2 + 28));
LABEL_15:
    v12 += v46;
    v14 = v23 + v48;
    v48 += v23;
    if ( v12 >= v6 )
    {
LABEL_16:
      if ( a6 )
        *a6 = v14;
      return 0LL;
    }
    v10 = v47;
  }
}
