/*
 * XREFs of sub_140996C60 @ 0x140996C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_140995B08 @ 0x140995B08 (sub_140995B08.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140996C60(int a1)
{
  char v1; // di
  int v2; // ebx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  sub_140A48330(a1);
  v2 = 0;
  if ( byte_140D048DC || byte_140C0C644 == v1 )
  {
LABEL_6:
    v3 = v1 == 0;
    goto LABEL_7;
  }
  byte_140C0C644 = v1;
  v3 = v1 == 0;
  if ( !v1 )
  {
    if ( byte_140C5AC3C )
      sub_140995B08(4u);
    goto LABEL_6;
  }
LABEL_7:
  LOBYTE(v2) = !v3;
  v7 = v2;
  sub_1407525EC(&stru_140026EF8, 4u, &v7);
  return sub_140A47CF8(v5, v4);
}
