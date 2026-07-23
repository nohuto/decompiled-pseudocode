/*
 * XREFs of ntoskrnl_17 @ 0x1406EB3B0
 * Callers:
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 */

char *ntoskrnl_17()
{
  __int64 HostSilo; // rax

  HostSilo = PsGetHostSilo();
  return (char *)sub_140204738(HostSilo) + 1264;
}
