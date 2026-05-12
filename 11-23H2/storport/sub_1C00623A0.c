/*
 * XREFs of sub_1C00623A0 @ 0x1C00623A0
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 */

__int64 __fastcall sub_1C00623A0(__int64 a1, unsigned int a2, PIO_WORKITEM *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  v5 = sub_1C00081BC(a1, a2);
  if ( v5 && (*(_BYTE *)(v5 + 448) & 4) != 0 && (*(_DWORD *)(v5 + 1872) & 4) != 0 )
  {
    if ( a3 && *a3 )
      IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)sub_1C005D5F0, CriticalWorkQueue, a3);
    else
      return (unsigned int)-1056964602;
  }
  else
  {
    return (unsigned int)-1056964601;
  }
  return v4;
}
