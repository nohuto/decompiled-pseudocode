/*
 * XREFs of KeSetSystemAffinityThreadEx @ 0x1403DEA20
 * Callers:
 *     KeSetSystemAffinityThread @ 0x1403DEA00 (KeSetSystemAffinityThread.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 */

KAFFINITY __stdcall KeSetSystemAffinityThreadEx(KAFFINITY Affinity)
{
  WORD v1; // ax
  _GROUP_AFFINITY Affinitya; // [rsp+20h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_QWORD *)&Affinitya.Group = 0LL;
  Affinitya.Mask = Affinity;
  PreviousAffinity = 0LL;
  if ( byte_140D068FB )
    v1 = word_140D05014 - 1;
  Affinitya.Group = v1;
  KeSetSystemGroupAffinityThread(&Affinitya, &PreviousAffinity);
  return PreviousAffinity.Mask;
}
