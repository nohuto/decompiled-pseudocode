/*
 * XREFs of RaidInitializeDeviceQueue @ 0x1C001A08C
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C0018AC4 (RaidUnitAllocateResources.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

void __fastcall RaidInitializeDeviceQueue(_DWORD *a1, __int64 a2, int a3)
{
  memset_0(a1, 0, 0xC0uLL);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 10);
  InitializeSListHead((PSLIST_HEADER)a1 + 6);
  InitializeSListHead((PSLIST_HEADER)a1 + 7);
  *((_QWORD *)a1 + 17) = a1 + 32;
  *((_QWORD *)a1 + 16) = a1 + 32;
  *((_QWORD *)a1 + 19) = a1 + 36;
  *((_QWORD *)a1 + 18) = a1 + 36;
  *((_QWORD *)a1 + 21) = a1 + 40;
  *((_QWORD *)a1 + 20) = a1 + 40;
  KeInitializeEvent((PRKEVENT)a1 + 2, NotificationEvent, 0);
  a1[1] = a3;
  *((_QWORD *)a1 + 1) = a2;
  *a1 = 12583170;
}
