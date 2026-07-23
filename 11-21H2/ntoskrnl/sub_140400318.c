/*
 * XREFs of sub_140400318 @ 0x140400318
 * Callers:
 *     sub_140A374B0 @ 0x140A374B0 (sub_140A374B0.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_1404000F0 @ 0x1404000F0 (sub_1404000F0.c)
 *     sub_1404000FC @ 0x1404000FC (sub_1404000FC.c)
 *     sub_140400210 @ 0x140400210 (sub_140400210.c)
 *     sub_140400AE4 @ 0x140400AE4 (sub_140400AE4.c)
 *     sub_140400B8C @ 0x140400B8C (sub_140400B8C.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400BD4 @ 0x140400BD4 (sub_140400BD4.c)
 *     sub_140400C00 @ 0x140400C00 (sub_140400C00.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C60 @ 0x140400C60 (sub_140400C60.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400CA8 @ 0x140400CA8 (sub_140400CA8.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400DE4 @ 0x140400DE4 (sub_140400DE4.c)
 *     sub_140400EF0 @ 0x140400EF0 (sub_140400EF0.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_1404010DC @ 0x1404010DC (sub_1404010DC.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140406B10 @ 0x140406B10 (sub_140406B10.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 *     sub_14040A608 @ 0x14040A608 (sub_14040A608.c)
 *     sub_14040A750 @ 0x14040A750 (sub_14040A750.c)
 *     sub_140656B70 @ 0x140656B70 (sub_140656B70.c)
 *     sub_140656BA8 @ 0x140656BA8 (sub_140656BA8.c)
 */

__int64 __fastcall sub_140400318(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v12; // rsi
  int v13; // r13d
  unsigned int v14; // ebx
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // [rsp+20h] [rbp-98h]
  unsigned int v31; // [rsp+50h] [rbp-68h]
  unsigned int v32; // [rsp+50h] [rbp-68h]
  unsigned int v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  unsigned __int64 v35; // [rsp+60h] [rbp-58h]
  int v36; // [rsp+68h] [rbp-50h]
  int v40; // [rsp+D8h] [rbp+20h]
  int v41; // [rsp+F8h] [rbp+40h]

  v40 = a4;
  v9 = a4;
  v10 = a3;
  v12 = *(_QWORD *)(a8 + 8);
  v31 = *(_DWORD *)(v12 + 36);
  v33 = sub_1404000A8(v12);
  if ( (a7 & 0xFFFFFF8F) != 0 )
    return 209715726;
  v13 = a7 & 0x30;
  if ( a2 )
  {
    if ( a2 != (unsigned int)sub_1404000FC(*(_QWORD *)(a8 + 8)) )
      return 209715726;
    if ( !v9 )
    {
LABEL_9:
      v16 = *(unsigned int *)(v12 + 60);
      v17 = (unsigned int)v16;
      v35 = (unsigned int)v16;
      v19 = sub_140656B70(v16);
      if ( !v19 )
        return 209715727;
      if ( a1 )
      {
        v20 = (unsigned int)sub_140401350(v33, v18);
        v21 = sub_140400BBC(v19, v20, v33);
        v34 = v31 + v20 + v19;
        v36 = sub_140400F4C(v20 + v19, v31, *(_QWORD *)(v12 + 624));
        v32 = v16 - v31 - v20;
        v14 = sub_140400D10(a1, a2, a5, v21);
        if ( v14 )
          goto LABEL_46;
        if ( v13 != 16 )
        {
          if ( ((v13 - 32) & 0xFFFFFFEF) == 0 && *(_DWORD *)(v12 + 68) == 1 )
          {
            v22 = sub_140400C30(*(_QWORD *)(v12 + 624));
            if ( !(unsigned int)sub_140400CA8(v21, v22) )
              goto LABEL_17;
          }
          if ( *(_DWORD *)(v12 + 64) && *(_DWORD *)(v12 + 68) == 3 && (unsigned int)sub_140400C60(v21, 0LL)
            || *(_DWORD *)(v12 + 72)
            && (unsigned int)sub_140400C60(v21, *(unsigned int *)(v12 + 76)) != *(_DWORD *)(v12 + 80) )
          {
            goto LABEL_17;
          }
        }
        v23 = *(_DWORD *)(v12 + 64);
        if ( v23 )
        {
          v24 = *(_DWORD *)(v12 + 68);
          if ( v24 == 3 )
          {
            sub_140400C00(v21, v23, v21);
            v24 = *(_DWORD *)(v12 + 68);
          }
          v25 = v34;
          if ( v24 == 1 )
          {
            sub_140400DE4(v21, *(_QWORD *)(v12 + 624), v36, v34, v32);
            sub_140400EF0(*(_QWORD *)(v12 + 624), v36, *(_DWORD *)(v12 + 64), v36, v34, v32);
            sub_1404010DC(*(_QWORD *)(v12 + 624), v36, v21, v34, v32);
          }
        }
        else
        {
          v25 = v34;
        }
        v26 = sub_140400AE4(*(_QWORD *)(v12 + 624));
        sub_140400BD4(v21, v26, 0, v21, v25, v32);
        if ( v13 != 16 )
        {
          if ( (unsigned int)sub_140400C90(v21, 0LL) )
          {
LABEL_17:
            v14 = 209715726;
            goto LABEL_46;
          }
        }
        sub_140400B8C(v21, *(_QWORD *)(a8 + 24));
        LODWORD(v9) = v40;
        v17 = v16;
        v10 = a3;
        *(_BYTE *)a8 = 1;
      }
      if ( v10 )
      {
        LODWORD(v30) = a6;
        v14 = sub_140406B10(v12, v10, v9, a5, v30, *(_QWORD *)(a8 + 16), 1, v19, v17);
        if ( v14 )
          goto LABEL_46;
        if ( v13 != 16 )
        {
          v14 = sub_140400210(a8, a7, v19, v16);
          if ( v14 )
            goto LABEL_46;
        }
        if ( (a7 & 0x40) == 0 || !a1 )
          goto LABEL_46;
      }
      v27 = v19;
      v28 = *(_QWORD *)(a8 + 16);
      v41 = v28;
      if ( a3 )
      {
        v29 = (unsigned int)sub_140407254(v12);
        v28 = sub_1404068E0(v19, v29, v12);
        v41 = v28;
        v27 = v29 + v19;
        LODWORD(v16) = v16 - v29;
      }
      v14 = sub_14040A750(v12, *(_QWORD *)(a8 + 24), 0, 32, v28, v27, (unsigned int)v16);
      if ( v14 )
        goto LABEL_46;
      if ( !a3 )
      {
        if ( v13 != 16 )
          v14 = sub_140400210(a8, a7, v19, v35);
        goto LABEL_46;
      }
      if ( !(unsigned int)sub_14040A608(v12, v41, *(_QWORD *)(a8 + 16), 0, v27, (unsigned int)v16) )
        goto LABEL_17;
LABEL_46:
      sub_1403FDDE8(v19, v35);
      sub_140656BA8(v19);
      return v14;
    }
LABEL_8:
    if ( v9 != *((_DWORD *)qword_140014878 + a6) * (unsigned int)sub_1404000F0(*(_QWORD *)(a8 + 8)) )
      return 209715726;
    goto LABEL_9;
  }
  if ( v9 )
    goto LABEL_8;
  return 209715726;
}
