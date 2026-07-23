/*
 * XREFs of ApiSetSchemaExpander_MigrateSchemaData @ 0x1404190B0
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

void *__fastcall ApiSetSchemaExpander_MigrateSchemaData(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 32);
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 16) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 16) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    *(unsigned int *)(v1 + 20));
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 24) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 24) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    *(unsigned int *)(v1 + 28));
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 32) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 32) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    *(unsigned int *)(v1 + 28));
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 40) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 40) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    (unsigned int)(32 * *(_DWORD *)(v1 + 44)));
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 52) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 52) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    (unsigned int)(28 * *(_DWORD *)(v1 + 56)));
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 76) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 76) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    (unsigned int)(20 * *(_DWORD *)(v1 + 80)));
  memmove(
    (void *)(v2 + *(unsigned int *)(v2 + 64) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
    (const void *)(v1 + *(unsigned int *)(v1 + 64) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
    (unsigned int)(16 * *(_DWORD *)(v1 + 68)));
  return memmove(
           (void *)(v2 + *(unsigned int *)(v2 + 88) - (unsigned __int64)*(unsigned __int16 *)(v2 + 6)),
           (const void *)(v1 + *(unsigned int *)(v1 + 88) - (unsigned __int64)*(unsigned __int16 *)(v1 + 6)),
           *(unsigned int *)(v1 + 92));
}
