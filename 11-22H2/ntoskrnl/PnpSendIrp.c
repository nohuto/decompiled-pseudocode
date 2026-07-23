/*
 * XREFs of PnpSendIrp @ 0x1403225B8
 * Callers:
 *     PnpStartDevice @ 0x140321868 (PnpStartDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x1403224B8 (PnpGetRelatedTargetDevice.c)
 *     PnpQueryDeviceRelations @ 0x140795430 (PnpQueryDeviceRelations.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305CD0 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140322660 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x1407954A4 (PnpAsynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  PreviousAffinity = 0LL;
  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v9 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v9 = IopSynchronousCall(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
