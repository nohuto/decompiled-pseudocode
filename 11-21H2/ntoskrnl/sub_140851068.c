/*
 * XREFs of sub_140851068 @ 0x140851068
 * Callers:
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_140841858 @ 0x140841858 (sub_140841858.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 *     sub_140964B50 @ 0x140964B50 (sub_140964B50.c)
 *     sub_140A111BC @ 0x140A111BC (sub_140A111BC.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 *     sub_140A17490 @ 0x140A17490 (sub_140A17490.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 */

__int64 __fastcall sub_140851068(__int16 *a1, _WORD *a2)
{
  __int16 *v3; // rdi
  __int16 v4; // dx
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  unsigned __int16 v7; // dx
  _QWORD *v8; // rax
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  __int16 v11; // r10
  _WORD *v13; // r11
  _QWORD *v14; // rax
  unsigned __int16 v15; // dx
  _QWORD *v16; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int16 v19; // r10

  v3 = a1;
  v4 = *a1;
  v5 = 0;
  while ( v4 || *a2 )
  {
    if ( v4 == 63 )
      goto LABEL_8;
    if ( v4 != 42 )
    {
      if ( v4 != *a2 )
      {
        v6 = sub_140347DB0();
        sub_1403477B0(v6[154], v7);
        v8 = sub_140347DB0();
        v10 = sub_1403477B0(v8[154], v9);
        if ( v11 != v10 )
          return v5;
      }
LABEL_8:
      ++v3;
      goto LABEL_9;
    }
    v13 = v3 + 1;
    v4 = v3[1];
    if ( v4 == 42 )
    {
      ++v3;
    }
    else
    {
      if ( !v4 )
        return 1;
      if ( v4 == *a2
        || (v14 = sub_140347DB0(),
            sub_1403477B0(v14[154], v15),
            v16 = sub_140347DB0(),
            v18 = sub_1403477B0(v16[154], v17),
            v19 == v18) )
      {
        if ( (unsigned int)sub_140851068(v13, a2) )
          return 1;
      }
LABEL_9:
      if ( !*a2 )
        return v5;
      v4 = *v3;
      ++a2;
    }
  }
  return 1;
}
