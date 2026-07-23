/*
 * XREFs of sub_140653374 @ 0x140653374
 * Callers:
 *     sub_140652F10 @ 0x140652F10 (sub_140652F10.c)
 * Callees:
 *     sub_140652C28 @ 0x140652C28 (sub_140652C28.c)
 *     sub_140652C64 @ 0x140652C64 (sub_140652C64.c)
 *     sub_14065355C @ 0x14065355C (sub_14065355C.c)
 *     sub_1406537D4 @ 0x1406537D4 (sub_1406537D4.c)
 */

__int64 __fastcall sub_140653374(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned __int16 v7; // si
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int8 v10; // al
  __int64 v11; // rcx
  signed __int8 v12; // al
  signed __int8 v13; // al
  __int64 v14; // rcx
  unsigned int v15; // r9d

  dword_140C10CF4 = 7;
  v7 = 0;
  if ( (unsigned int)sub_14065355C(a1, a4, 2LL) )
    goto LABEL_22;
  sub_140652C28(v8, 0);
  dword_140C10CF4 = 0;
  sub_140652C64(v9, 1u, 0x61u);
  if ( (dword_140C10CC0 & 1) != 0 )
  {
    if ( (unsigned int)sub_1406537D4(v8, a4) )
      goto LABEL_22;
  }
  if ( (unsigned int)sub_14065355C(v8, a4, 2LL) )
    goto LABEL_22;
  v10 = sub_140652C28(v8, 1u);
  if ( v10 >= 0 || (v10 & 0x40) != 0 )
    goto LABEL_22;
  sub_140652C28(v8, 0);
  dword_140C10CF4 = 1;
  while ( a3 > 1u )
  {
    sub_140652C64(v11, 0, *(_BYTE *)(v7 + a2));
    if ( (dword_140C10CC0 & 1) != 0 && (unsigned int)sub_1406537D4(v8, a4) )
      goto LABEL_22;
    if ( (unsigned int)sub_14065355C(v8, a4, 2LL) )
      goto LABEL_22;
    v12 = sub_140652C28(v8, 1u);
    if ( v12 >= 0 || (v12 & 0x40) != 0 )
      goto LABEL_22;
    sub_140652C28(v8, 0);
    ++v7;
    --a3;
  }
  if ( (sub_140652C64(v11, 1u, 0x62u), dword_140C10CF4 = 2, (dword_140C10CC0 & 1) != 0)
    && (unsigned int)sub_1406537D4(v8, a4)
    || (unsigned int)sub_14065355C(v8, a4, 2LL)
    || (v13 = sub_140652C28(v8, 1u), v13 >= 0)
    || (v13 & 0x40) != 0 )
  {
LABEL_22:
    sub_140652C64(v8, 1u, 0x60u);
  }
  else
  {
    sub_140652C28(v8, 0);
    sub_140652C64(v14, 0, *(_BYTE *)(v7 + a2));
    dword_140C10CF4 = 3;
    return 0;
  }
  return v15;
}
