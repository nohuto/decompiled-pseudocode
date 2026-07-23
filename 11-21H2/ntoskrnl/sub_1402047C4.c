/*
 * XREFs of sub_1402047C4 @ 0x1402047C4
 * Callers:
 *     sub_140204758 @ 0x140204758 (sub_140204758.c)
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 * Callees:
 *     sub_140204954 @ 0x140204954 (sub_140204954.c)
 *     sub_140204DA0 @ 0x140204DA0 (sub_140204DA0.c)
 *     sub_140205370 @ 0x140205370 (sub_140205370.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 */

__int64 __fastcall sub_1402047C4(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r11
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  SourceString = 0LL;
  if ( v2 )
    return 3221225485LL;
  SourceString.Length = *(_WORD *)a2;
  SourceString.MaximumLength = SourceString.Length;
  SourceString.Buffer = *(wchar_t **)(a2 + 8);
  v5 = sub_1403008B0(a1, &SourceString);
  v7 = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 56) &= ~4u;
    goto LABEL_5;
  }
  v8 = sub_140204DA0(&SourceString);
  v7 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v8 + 48) = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v6) = 1;
    sub_140205370(a1, v7, 0LL, v6);
    return sub_140204954(v9, a2);
  }
  return 3221225626LL;
}
