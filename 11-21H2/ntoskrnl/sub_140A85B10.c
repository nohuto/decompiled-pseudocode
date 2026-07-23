/*
 * XREFs of sub_140A85B10 @ 0x140A85B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     IoGetDmaAdapter @ 0x1408462A0 (IoGetDmaAdapter.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A83FCC @ 0x140A83FCC (sub_140A83FCC.c)
 *     sub_140A86488 @ 0x140A86488 (sub_140A86488.c)
 *     sub_140A88B74 @ 0x140A88B74 (sub_140A88B74.c)
 *     sub_140A89224 @ 0x140A89224 (sub_140A89224.c)
 */

struct _DMA_ADAPTER *__fastcall sub_140A85B10(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  __int64 v6; // rdx
  _LIST_ENTRY *v7; // rax
  int v8; // eax
  void *v9; // rax
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  ULONG Type; // [rsp+40h] [rbp-28h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-24h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int Data; // [rsp+88h] [rbp+20h] BYREF

  Data = 0;
  RequiredSize[0] = 0;
  Type = 0;
  if ( !dword_140C1AE0C || dword_140D575F4 == 1 || (unsigned int)sub_140A86488() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (dword_140C29FC0 & 0x20000) == 0 )
    sub_140A83CA4(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v7 = sub_140A83FCC((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v7 )
        break;
      sub_140A89224((__int64)v7);
    }
  }
  if ( *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v8 = sub_14042A5E0(KeGetCurrentThread(), v6);
  if ( v8 < 0 && v8 != -1073741275 )
    return 0LL;
  v9 = (void *)sub_14042A5E0(PhysicalDeviceObject, DeviceDescription);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = sub_140A88B74(v9);
  v13 = v11;
  if ( !v11 )
  {
    sub_14042A5E0(v10, v12);
    return 0LL;
  }
  *(_QWORD *)(v11 + 24) = PhysicalDeviceObject;
  *(_QWORD *)(v11 + 40) = retaddr;
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &stru_14000E0D8, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v13 + 35) = 1;
  }
  return (struct _DMA_ADAPTER *)v10;
}
