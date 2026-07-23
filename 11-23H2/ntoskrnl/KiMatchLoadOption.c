/*
 * XREFs of KiMatchLoadOption @ 0x140A90140
 * Callers:
 *     KiParseLoadOptions @ 0x140A900BC (KiParseLoadOptions.c)
 * Callees:
 *     strstr @ 0x1403D93B0 (strstr.c)
 *     _atoi64 @ 0x1403D9410 (_atoi64.c)
 */

char __fastcall KiMatchLoadOption(const char *a1, const char *a2, __int64 a3, __int64 *a4)
{
  char *v6; // rax

  v6 = strstr(a1, a2);
  if ( !v6 || v6[a3] != 61 )
    return 0;
  *a4 = atoi64(&v6[a3 + 1]);
  return 1;
}
