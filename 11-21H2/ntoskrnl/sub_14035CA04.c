/*
 * XREFs of sub_14035CA04 @ 0x14035CA04
 * Callers:
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_14035CE74 @ 0x14035CE74 (sub_14035CE74.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14035CA04(PGROUP_AFFINITY Affinity)
{
  bool v1; // zf
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  unsigned int FirstSetRightGroupAffinity; // eax
  int v6; // esi
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0;
  v1 = Affinity->Mask == 0;
  PreviousAffinity = 0LL;
  if ( v1 )
    return 0xFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v4 = KeQueryPriorityThread(CurrentThread) >= 16 ? -1 : KeSetPriorityThread(CurrentThread, 16);
  KeSetSystemGroupAffinityThread(Affinity, &PreviousAffinity);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)Affinity);
  v6 = sub_14035CE74(CurrentThread, FirstSetRightGroupAffinity, &v8);
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v6 < 0 )
    return 0xFFFFFFFFLL;
  else
    return v8;
}
