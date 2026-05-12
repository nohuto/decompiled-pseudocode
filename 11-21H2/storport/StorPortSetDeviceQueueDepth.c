/*
 * XREFs of StorPortSetDeviceQueueDepth @ 0x1C0015750
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1C0041D18 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 */

char __fastcall StorPortSetDeviceQueueDepth(__int64 a1, char a2, char a3, char a4, unsigned int a5)
{
  char v5; // bl
  _DWORD *Adapter; // rax
  char v10; // r9
  __int64 Unit; // rax
  unsigned int v12; // edx
  int v13; // r8d
  unsigned int v15; // [rsp+60h] [rbp-18h]

  v5 = 0;
  HIBYTE(v15) = 0;
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 0;
  BYTE2(v15) = v10;
  LOBYTE(v15) = a2;
  BYTE1(v15) = a3;
  Unit = RaidAdapterFindUnit((__int64)Adapter, v15);
  if ( !Unit )
    return 0;
  v12 = *(_DWORD *)(Unit + 808);
  if ( a5 > v12 )
    return 0;
  v13 = *(_DWORD *)(Unit + 660);
  if ( v13 == a5 )
    return 1;
  if ( a5 )
  {
    *(_DWORD *)(Unit + 660) = a5;
    v5 = 1;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zquuuqqqt_EtwWriteTransfer(
        *(_DWORD *)(*(_QWORD *)(Unit + 24) + 56LL),
        v12,
        v13,
        *(_QWORD *)(*(_QWORD *)(Unit + 24) + 48LL),
        *(_DWORD *)(*(_QWORD *)(Unit + 24) + 56LL),
        a2,
        a3,
        a4,
        v13,
        a5,
        v12,
        1);
  }
  return v5;
}
