/*
 * XREFs of sub_140A61A60 @ 0x140A61A60
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 */

__int64 sub_140A61A60()
{
  int LockArray_high; // edx

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( !LockArray_high )
  {
    *(__int64 *)((char *)&qword_140C4D044 + 4) = 0LL;
    dword_140C4D058 = 0;
    qword_140C4D050 = (__int64)qword_14003A150;
    qword_140C08A98 = (__int64)&qword_140C4D0C0;
    qword_140C08AA0 = (__int64)&qword_140C4D0C0;
    qword_140C4D0C0 = (__int64)&qword_140C08A98;
    qword_140C4D0C8 = (__int64)&qword_140C08A98;
    qword_140C4C1E8 = (__int64)&unk_140C4C1C0;
    qword_140C4D0A8 = (__int64)&qword_140C4C1E8;
    dword_140C4D0A0 = 1;
    dword_140C4D0D0 = 1;
    qword_140C4D044 = 1LL;
    dword_140C4C1D8 = 3;
  }
  return KeAddProcessorAffinityEx(word_140C08AB0, LockArray_high);
}
