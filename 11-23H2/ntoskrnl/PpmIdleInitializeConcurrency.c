/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x14082C104
 * Callers:
 *     PpmParkRegisterParking @ 0x140391AA0 (PpmParkRegisterParking.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x1402C0450 (KeCountSetBitsAffinityEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x140309370 (KeFirstGroupAffinityEx.c)
 *     PpmQueryTime @ 0x140391A88 (PpmQueryTime.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  int v6; // esi
  unsigned int GroupAffinity; // ebp
  __int64 Pool2; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v6 = KeCountSetBitsAffinityEx(a1);
  GroupAffinity = KeFirstGroupAffinityEx((__int64)&Affinity, a1);
  if ( a3 && v6 == *(_DWORD *)(a3 + 8) )
  {
    Pool2 = a3;
  }
  else
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v6 + 336), 1884115024LL);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_DWORD *)(Pool2 + 8) = v6;
      PpmQueryTime();
    }
    GroupAffinity = -1073741670;
  }
  *a2 = Pool2;
  return GroupAffinity;
}
