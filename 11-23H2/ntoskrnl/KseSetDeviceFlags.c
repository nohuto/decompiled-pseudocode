/*
 * XREFs of KseSetDeviceFlags @ 0x140976D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     KsepStringTransform @ 0x1408084F8 (KsepStringTransform.c)
 *     KsepRegistryCreateKey @ 0x1409779E8 (KsepRegistryCreateKey.c)
 */

__int64 __fastcall KseSetDeviceFlags(_WORD *a1, const WCHAR *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 Data; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Data = a3;
  v7 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( dword_140C64D34 != 2 || (KseEngine & 2) != 0 )
  {
    v4 = -1073741823;
  }
  else if ( a1 && a2 )
  {
    v4 = KsepStringTransform((__int64)&v7, a1);
    if ( v4 < 0 )
      goto LABEL_15;
    v5 = v8;
    v4 = KsepRegistryCreateKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
           v8,
           &Handle);
    if ( v4 == -1073741772 )
    {
      v4 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility",
             L"Device",
             &Handle);
      if ( v4 < 0 )
        goto LABEL_15;
      if ( Handle )
      {
        ZwClose(Handle);
        _InterlockedIncrement(dword_140C4071C);
        v5 = v8;
      }
      Handle = 0LL;
      v4 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
             v5,
             &Handle);
    }
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      v4 = ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, &Data, 8u);
    }
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_15:
  KsepStringFree((__int64)&v7);
  if ( Handle )
  {
    ZwClose(Handle);
    _InterlockedIncrement(dword_140C4071C);
  }
  return (unsigned int)v4;
}
