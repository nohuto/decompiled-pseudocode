/*
 * XREFs of sub_1402D301C @ 0x1402D301C
 * Callers:
 *     sub_1402D2F74 @ 0x1402D2F74 (sub_1402D2F74.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402D301C(__int64 a1, _GROUP_AFFINITY *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r8d
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF

  Affinity = 0LL;
  if ( !a1 )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v3 )
    return 0LL;
  v4 = *(_DWORD *)(v3 + 660);
  if ( v4 > 0xFFFFFFFD )
    return 0LL;
  if ( v4 >= (unsigned __int16)word_140D05000 )
    return 0LL;
  KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 660), &Affinity, 0LL);
  KeAndGroupAffinityEx(&dword_140D06E40, (__int64)&Affinity, (char *)&Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
