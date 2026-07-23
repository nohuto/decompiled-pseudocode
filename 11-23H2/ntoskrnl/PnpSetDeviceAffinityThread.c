/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x140322AD0
 * Callers:
 *     PnpSendIrp @ 0x140322A28 (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x14079281C (PnpCallAddDevice.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeQueryNodeActiveAffinity @ 0x140305C40 (KeQueryNodeActiveAffinity.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpSetDeviceAffinityThread(__int64 a1, _GROUP_AFFINITY *a2)
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
  if ( v4 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 660), &Affinity, 0LL);
  KeAndGroupAffinityEx(KeActiveProcessors, (__int64)&Affinity, (char *)&Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
