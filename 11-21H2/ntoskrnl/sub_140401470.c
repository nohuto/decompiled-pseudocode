/*
 * XREFs of sub_140401470 @ 0x140401470
 * Callers:
 *     sub_140A374B0 @ 0x140A374B0 (sub_140A374B0.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_1404000F0 @ 0x1404000F0 (sub_1404000F0.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400CA8 @ 0x140400CA8 (sub_140400CA8.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400DE4 @ 0x140400DE4 (sub_140400DE4.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_140400FB0 @ 0x140400FB0 (sub_140400FB0.c)
 *     sub_1404010DC @ 0x1404010DC (sub_1404010DC.c)
 *     sub_140401198 @ 0x140401198 (sub_140401198.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_140401398 @ 0x140401398 (sub_140401398.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140406980 @ 0x140406980 (sub_140406980.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 *     sub_14040A64C @ 0x14040A64C (sub_14040A64C.c)
 *     sub_14040A67C @ 0x14040A67C (sub_14040A67C.c)
 *     sub_140656B70 @ 0x140656B70 (sub_140656B70.c)
 *     sub_140656BA8 @ 0x140656BA8 (sub_140656BA8.c)
 */

__int64 __fastcall sub_140401470(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned int v10; // r15d
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // r10d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // r15
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r12
  unsigned int v30; // ebx
  int v31; // eax
  unsigned __int64 v33; // [rsp+50h] [rbp-B8h]
  unsigned int v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  unsigned int v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  unsigned int v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int128 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  v9 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  if ( (a7 & 0xFFFFFFF7) == 0 )
  {
    v10 = *(_DWORD *)(v7 + 16);
    if ( v10 <= *(_DWORD *)(v7 + 28) )
      v10 = *(_DWORD *)(v7 + 28);
    if ( v10 <= (unsigned int)sub_140400AB4() )
      sub_140400AB4();
    sub_1404000A8(v7);
    v11 = (unsigned int)sub_140401350();
    v38 = sub_140401350();
    v34 = sub_140407254(v7);
    v36 = sub_140401368(*(_QWORD *)(v7 + 624));
    v12 = sub_1404000F0(v7);
    v13 = *(_DWORD *)(v7 + 28);
    v14 = *(unsigned int *)(v7 + 44);
    v15 = (unsigned int)(*(_DWORD *)(v7 + 48) + 2 * *(_DWORD *)(v7 + 52));
    v40 = v12;
    v16 = (unsigned int)((v13 << 8) + 64);
    if ( v15 <= v16 )
      v15 = (unsigned int)v16;
    v17 = (unsigned int)((*(_DWORD *)(v7 + 16) << 8) + 64);
    if ( v15 > v17 )
      v17 = (unsigned int)v15;
    v18 = (unsigned int)v11;
    v19 = v16 + (unsigned int)(v13 << 6) + 64LL + 2 * ((unsigned int)(v13 << 6) + 64LL) + (unsigned int)(v13 << 8);
    if ( v17 > v19 )
      v19 = v17;
    if ( v19 <= *(unsigned int *)(v7 + 56) )
      v19 = *(unsigned int *)(v7 + 56);
    if ( v19 > v14 )
      v14 = v19;
    v20 = v14 + v12 + 4 * v36 + v11 + 2 * v34 + 2 * v38;
    v33 = v20;
    v21 = sub_140656B70(v20);
    v8 = v21;
    if ( v21 )
    {
      v22 = v14 + v21;
      v23 = sub_140400BBC();
      *(_QWORD *)&v41 = sub_140400BBC();
      v24 = v38 + v38 + v18 + v22;
      *((_QWORD *)&v41 + 1) = sub_140400BBC();
      v25 = sub_1404068E0(v24, v34, v7);
      v26 = v34 + v24;
      v42 = v25;
      sub_1404068E0(v26, v34, v7);
      v27 = v36;
      v28 = v36 + v34 + v26;
      v37 = sub_140400F4C();
      v39 = sub_140400F4C();
      v29 = sub_140400F4C();
      v35 = sub_140400F4C();
      if ( (unsigned int)sub_140400D10() )
        goto LABEL_32;
      sub_140400C30();
      if ( !(unsigned int)sub_140400CA8() )
        goto LABEL_32;
      sub_140400DE4(v23, *(_QWORD *)(v7 + 624), v39, v8, v14);
      if ( (unsigned int)sub_140400FB0() )
        goto LABEL_32;
      if ( (unsigned int)sub_140400D10() )
        goto LABEL_32;
      sub_140400C30();
      if ( !(unsigned int)sub_140400CA8() )
        goto LABEL_32;
      sub_140400DE4(v23, *(_QWORD *)(v7 + 624), v29, v8, v14);
      if ( (unsigned int)sub_140400FB0()
        || (unsigned int)sub_140401198(*(_DWORD **)(v7 + 624), v29)
        || (unsigned int)sub_140401398(v7, a2, a3, a7, v37, v23, v8, v14)
        || (sub_1404011D4(*(_DWORD **)(v7 + 624), v37),
            sub_1404011D4(*(_DWORD **)(v7 + 624), v39),
            sub_1404010DC(*(_DWORD **)(v7 + 624), v37, v41, v8, v14),
            sub_1404010DC(*(_DWORD **)(v7 + 624), v35, SDWORD2(v41), v8, v14),
            *((_QWORD *)&v44 + 1) = *(_QWORD *)(a1 + 16),
            v43 = v41,
            (unsigned int)sub_14040A67C(v7, (unsigned int)&v43, (unsigned int)&v44, 2, 1, v42, v8, v14))
        || (unsigned int)sub_14040A64C(v7, v42)
        || (unsigned int)sub_140406980(v7, v42, 2, 1, v27 + v27 + v27 + v28, v40, 1, v8, v14)
        || (v30 = sub_140400D10()) != 0 )
      {
LABEL_32:
        v9 = v33;
      }
      else
      {
        sub_140400DE4(v23, *(_QWORD *)(v7 + 624), v35, v8, v14);
        v31 = sub_140400F98();
        v9 = v33;
        if ( v31 )
        {
LABEL_34:
          sub_1403FDDE8(v8, v9);
          sub_140656BA8(v8);
          return v30;
        }
      }
    }
    else
    {
      v9 = v20;
    }
  }
  v30 = 209715728;
  if ( v8 )
    goto LABEL_34;
  return v30;
}
