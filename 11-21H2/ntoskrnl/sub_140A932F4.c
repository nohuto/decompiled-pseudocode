/*
 * XREFs of sub_140A932F4 @ 0x140A932F4
 * Callers:
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A93B28 @ 0x140A93B28 (sub_140A93B28.c)
 */

__int64 __fastcall sub_140A932F4(void *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (qword_140D01450 & 0x800000000LL) != 0 && (qword_140D01450 & 0x400000) != 0 )
    return 3221225659LL;
  v2 = (_QWORD *)sub_140A93B28(a1);
  if ( !v2 )
    return 3221225626LL;
  sub_140A89D58();
  byte_140C1AFA0 = 1;
  _InterlockedOr(v4, 0);
  v3 = (_QWORD *)*((_QWORD *)&xmmword_140C1B2B0 + 1);
  ++dword_140C1AFA8;
  if ( **((__int128 ***)&xmmword_140C1B2B0 + 1) != &xmmword_140C1B2B0 )
    __fastfail(3u);
  *v2 = &xmmword_140C1B2B0;
  v2[1] = v3;
  *v3 = v2;
  *((_QWORD *)&xmmword_140C1B2B0 + 1) = v2;
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return 0LL;
}
