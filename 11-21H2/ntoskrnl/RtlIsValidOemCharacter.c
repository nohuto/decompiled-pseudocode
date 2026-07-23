/*
 * XREFs of RtlIsValidOemCharacter @ 0x1409BBB30
 * Callers:
 *     sub_1406AA3A0 @ 0x1406AA3A0 (sub_1406AA3A0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  char *v4; // rax
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // rcx
  WCHAR v9; // dx
  __int16 v10; // r11
  __int64 v11; // r10
  __int16 v12; // ax
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned __int16 v15; // dx
  __int64 v16; // r10
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  sub_1407CDA20();
  _InterlockedOr(v18, 0);
  v2 = sub_140347DB0();
  v3 = v2[154];
  v4 = (char *)(v2 + 133);
  if ( v5 != 1 )
  {
    v6 = *((_QWORD *)v4 + 12);
    v7 = *((_QWORD *)v4 + 13);
    v8 = *Char;
    if ( *((_WORD *)v4 + 38) )
    {
      v13 = *(unsigned __int16 *)(v7 + 2 * v8);
      v14 = *(unsigned __int16 *)(*((_QWORD *)v4 + 19) + 2 * ((unsigned __int64)v13 >> 8));
      if ( (_WORD)v14 )
        v15 = *(_WORD *)(*((_QWORD *)v4 + 15) + 2 * (v14 + (unsigned __int8)v13));
      else
        v15 = *(_WORD *)(v6 + 2LL * (unsigned __int8)v13);
      v9 = sub_1403477B0(v3, v15);
      v12 = *(_WORD *)(v16 + 2LL * v9);
    }
    else
    {
      v9 = sub_1403477B0(v3, *(_WORD *)(v6 + 2LL * *(unsigned __int8 *)(v8 + v7)));
      v12 = *(char *)(v9 + v11);
    }
    if ( v12 != v10 )
    {
      *Char = v9;
      return 1;
    }
    return 0;
  }
  if ( *Char > 0x7Fu )
    return 0;
  *Char = sub_1403477B0(v3, *Char);
  return 1;
}
