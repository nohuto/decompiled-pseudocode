/*
 * XREFs of sub_1403008B0 @ 0x1403008B0
 * Callers:
 *     sub_1402047C4 @ 0x1402047C4 (sub_1402047C4.c)
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 *     sub_140231BF8 @ 0x140231BF8 (sub_140231BF8.c)
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     sub_140300720 @ 0x140300720 (sub_140300720.c)
 *     sub_14030097C @ 0x14030097C (sub_14030097C.c)
 *     sub_140695FFC @ 0x140695FFC (sub_140695FFC.c)
 *     sub_140A1A65C @ 0x140A1A65C (sub_140A1A65C.c)
 * Callees:
 *     sub_1402053BC @ 0x1402053BC (sub_1402053BC.c)
 *     sub_140253C50 @ 0x140253C50 (sub_140253C50.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall sub_1403008B0(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  char v5; // r12
  const UNICODE_STRING *v8; // rsi
  const void **v9; // rcx
  char v10; // al
  __int64 *v11; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (_QWORD *)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = (const UNICODE_STRING *)(v11 - 2);
      if ( (v11[5] & 1) == 0 )
      {
        if ( sub_1402053BC(v8 + 2, a2) )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == (__int64 *)(a1 + 32) )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = (const UNICODE_STRING *)v2;
      v9 = (const void **)(v2 + 4);
      v10 = KeGetCurrentIrql() >= 2u
          ? sub_140253C50(v9, (__int64)a2)
          : RtlEqualUnicodeString((PCUNICODE_STRING)v9, a2, 1u);
      if ( v10 )
        break;
      v2 = (_QWORD *)*v2;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (const UNICODE_STRING *)v4;
}
