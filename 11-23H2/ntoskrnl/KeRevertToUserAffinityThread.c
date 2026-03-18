/*
 * XREFs of KeRevertToUserAffinityThread @ 0x14056EF70
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305E00 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
