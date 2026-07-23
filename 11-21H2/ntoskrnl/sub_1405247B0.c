/*
 * XREFs of sub_1405247B0 @ 0x1405247B0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14051040C @ 0x14051040C (sub_14051040C.c)
 */

__int64 sub_1405247B0()
{
  char v1; // di
  unsigned int v2; // edx
  unsigned int v3; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !byte_140C4BFC8 )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    v2 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
    Affinity.Mask = 1LL << (v2 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v3 = sub_14051040C();
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v3;
}
