/*
 * XREFs of sub_1409E93FC @ 0x1409E93FC
 * Callers:
 *     sub_140960D50 @ 0x140960D50 (sub_140960D50.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 */

LONG sub_1409E93FC()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&stru_140C16120, Executive, 0, 0, 0LL);
  if ( !--dword_140D3B0C8 )
  {
    v0 = qword_140D05008;
    *(_DWORD *)(qword_140D05008 + 4544) &= ~0x200000u;
    sub_1406D520C(v0, 0, 8u);
  }
  return KeReleaseMutex(&stru_140C16120, 0);
}
