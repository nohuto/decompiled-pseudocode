/*
 * XREFs of sub_18002C3A0 @ 0x18002C3A0
 * Callers:
 *     LanguageEnumProc @ 0x18002C000 (LanguageEnumProc.c)
 *     sub_18002C0EC @ 0x18002C0EC (sub_18002C0EC.c)
 *     sub_18002C8A4 @ 0x18002C8A4 (sub_18002C8A4.c)
 * Callees:
 *     sub_18002BE20 @ 0x18002BE20 (sub_18002BE20.c)
 *     sub_18002C574 @ 0x18002C574 (sub_18002C574.c)
 */

__int64 *__fastcall sub_18002C3A0(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v6; // rax
  __int64 i; // rcx

  v6 = (__int64 *)sub_18002C574();
  for ( i = *v6; i != v6[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3); i += 16LL )
    ;
  *a2 = sub_18002BE20(i);
  return a2;
}
