/*
 * XREFs of sub_180002E34 @ 0x180002E34
 * Callers:
 *     RmAccessCheck @ 0x180002EA0 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18001CA90 (RmAccessCheckOnSelf.c)
 *     RmAcquireResources @ 0x18001CAD0 (RmAcquireResources.c)
 *     RmAvailabilityCheck @ 0x18001CB90 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18001CC10 (RmGetNotification.c)
 *     RmRegisterResource @ 0x18001CC60 (RmRegisterResource.c)
 *     RmReleaseResources @ 0x18001CCC0 (RmReleaseResources.c)
 * Callees:
 *     sub_180002EE0 @ 0x180002EE0 (sub_180002EE0.c)
 */

__int64 __fastcall sub_180002E34(__int64 *a1)
{
  __int64 v2; // rax
  int v3; // ebx

  RtlEnterCriticalSection(&CriticalSection);
  v2 = qword_180032A18;
  if ( qword_180032A18 )
    goto LABEL_4;
  v3 = sub_180002EE0();
  if ( v3 >= 0 )
  {
    v2 = qword_180032A18;
LABEL_4:
    *a1 = v2;
    v3 = 0;
  }
  RtlLeaveCriticalSection(&CriticalSection);
  return (unsigned int)v3;
}
