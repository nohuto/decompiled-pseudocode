/*
 * XREFs of RaUnitSetQueueDepth @ 0x1C001CDF8
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidCreateUnit @ 0x1C001CC08 (RaidCreateUnit.c)
 *     RaidStartUnit @ 0x1C001EBDC (RaidStartUnit.c)
 * Callees:
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1C0041D18 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaUnitSetQueueDepth(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v3; // rax
  int v5; // ecx
  unsigned int v6; // ebx

  v3 = (unsigned int *)(a1 + 660);
  v5 = *(_DWORD *)(a1 + 660);
  v6 = -1073741823;
  if ( a2 && a2 <= a3 )
  {
    *v3 = a2;
  }
  else if ( a2 != v5 )
  {
    return v6;
  }
  v6 = 0;
  *(_DWORD *)(a1 + 808) = a3;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zquuuqqqt_EtwWriteTransfer(
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      v5,
      a2,
      a3,
      0);
  return v6;
}
