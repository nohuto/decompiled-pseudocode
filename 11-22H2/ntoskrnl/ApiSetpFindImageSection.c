/*
 * XREFs of ApiSetpFindImageSection @ 0x140A09FEC
 * Callers:
 *     ApiSetLoadSchemaEx @ 0x140A09D9C (ApiSetLoadSchemaEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     strncmp @ 0x1403D8830 (strncmp.c)
 */

const char *__fastcall ApiSetpFindImageSection(void *a1)
{
  PIMAGE_NT_HEADERS v1; // rax
  PIMAGE_NT_HEADERS v2; // rdi
  const char *v3; // rbx
  __int64 v4; // rsi

  v1 = RtlImageNtHeader(a1);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v3 = (char *)&v1->OptionalHeader + v1->FileHeader.SizeOfOptionalHeader;
  v4 = 0LL;
  if ( !v1->FileHeader.NumberOfSections )
    return 0LL;
  while ( strncmp(v3, ".apiset", 8uLL) )
  {
    v3 += 40;
    if ( ++v4 >= (unsigned __int64)v2->FileHeader.NumberOfSections )
      return 0LL;
  }
  return v3;
}
