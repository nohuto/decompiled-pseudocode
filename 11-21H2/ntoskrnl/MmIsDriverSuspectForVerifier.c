/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x140A816C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140A821E0 @ 0x140A821E0 (sub_140A821E0.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ebx

  if ( !(unsigned int)sub_1402DA4B0() )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 || (qword_140D01450 & 0x400000) != 0 )
    return 0LL;
  sub_140A89D58();
  v3 = sub_140A821E0(v2);
  qword_140C1AD40 = 0LL;
  v4 = v3;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return v4;
}
