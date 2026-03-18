/*
 * XREFs of PpmResetProfileSettings @ 0x1403D6EC0
 * Callers:
 *     PpmRegisterProfiles @ 0x140854E78 (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x14099D66C (PpmDisableProfile.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

_QWORD *__fastcall PpmResetProfileSettings(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 40);
  memmove((void *)(a1 + 40), &unk_140C1D088, 0x10B0uLL);
  memmove((void *)(a1 + 4312), &unk_140C1E138, 0x10B0uLL);
  v3 = 2LL;
  do
  {
    result = v1;
    v5 = 2LL;
    do
    {
      *result = 0LL;
      result += 534;
      --v5;
    }
    while ( v5 );
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
