/*
 * XREFs of sub_14090C1BC @ 0x14090C1BC
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 * Callees:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_140917DC4 @ 0x140917DC4 (sub_140917DC4.c)
 *     sub_1409180B0 @ 0x1409180B0 (sub_1409180B0.c)
 *     sub_1409220A0 @ 0x1409220A0 (sub_1409220A0.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4464 @ 0x140AB4464 (sub_140AB4464.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 *     sub_140AB4A00 @ 0x140AB4A00 (sub_140AB4A00.c)
 *     sub_140AB4A4C @ 0x140AB4A4C (sub_140AB4A4C.c)
 *     sub_140AB4C18 @ 0x140AB4C18 (sub_140AB4C18.c)
 */

__int64 __fastcall sub_14090C1BC(__int64 a1, __int64 a2, void *a3)
{
  char v4; // r14
  __int64 v6; // rbx
  char v7; // bp
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v26[2]; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = 0;
  v4 = a2;
  v27 = 0;
  *(_QWORD *)v26 = 0LL;
  sub_140AB4370(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 1;
  sub_140AB42D0(v6);
  v8 = sub_140AB4A00(a1, v6);
  if ( v8 < 0 )
    goto LABEL_13;
  if ( *(_WORD *)(v6 + 66) )
  {
    sub_140AB4300(v6);
    sub_140AB4260(v10, v9, v11, v12);
    return (unsigned int)sub_14065A44C(a1, (__int64)a3, 5, v4);
  }
  sub_140AB41FC(*(_QWORD *)(v6 + 32));
  sub_140AB4464(*(_QWORD *)(v6 + 32));
  v8 = sub_140AB4A4C(*(_QWORD *)(v6 + 32), 3);
  sub_140AB4484(*(_QWORD *)(v6 + 32));
  if ( v8 < 0 )
    goto LABEL_12;
  v13 = sub_1409220A0(*(_QWORD *)(v6 + 32), &v27, v26, &v28);
  v15 = *(_QWORD *)v26;
  v8 = v13;
  if ( v13 >= 0 )
  {
    v8 = sub_140AB4C18(*(_QWORD *)(v6 + 32), v14, *(_QWORD *)v26);
    if ( v8 >= 0 )
    {
      sub_140AB41E0(*(_QWORD *)(v6 + 32));
      sub_140AB4300(v6);
      sub_140AB4260(v17, v16, v18, v19);
      v7 = 0;
      v8 = sub_1409180B0(v20, v27, v15, v28, a3);
      if ( v8 >= 0 )
        v8 = 0;
    }
  }
  if ( v15 )
    sub_140917DC4((unsigned int)v27, v15);
  if ( v7 )
  {
LABEL_12:
    sub_140AB41E0(*(_QWORD *)(v6 + 32));
LABEL_13:
    sub_140AB4300(v6);
    sub_140AB4260(v22, v21, v23, v24);
  }
  return (unsigned int)v8;
}
