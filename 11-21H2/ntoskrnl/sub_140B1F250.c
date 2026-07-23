/*
 * XREFs of sub_140B1F250 @ 0x140B1F250
 * Callers:
 *     sub_140B1E170 @ 0x140B1E170 (sub_140B1E170.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 */

__int64 sub_140B1F250()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C5B010);
  qword_140C5B078 = 0LL;
  qword_140C5AFF8 = (__int64)&qword_140C5AFF0;
  qword_140C5AFF0 = (__int64)&qword_140C5AFF0;
  qword_140C5B0C8 = (__int64)ExFreePoolWithTag;
  qword_140C5B008 = (__int64)&qword_140C5B000;
  qword_140C5B000 = (__int64)&qword_140C5B000;
  qword_140C5B0C0 = (__int64)sub_1403DA1F0;
  word_140C5B0D0 = 3;
  ExInitializeResourceLite(&stru_140C5AEE0);
  qword_140C5AF98 = (__int64)ExFreePoolWithTag;
  qword_140C5AEC8 = (__int64)&qword_140C5AEC0;
  qword_140C5AEC0 = (__int64)&qword_140C5AEC0;
  result = 1LL;
  word_140C5AFA0 = 1;
  return result;
}
