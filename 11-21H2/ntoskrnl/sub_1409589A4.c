/*
 * XREFs of sub_1409589A4 @ 0x1409589A4
 * Callers:
 *     sub_140946EF8 @ 0x140946EF8 (sub_140946EF8.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402DDE58 @ 0x1402DDE58 (sub_1402DDE58.c)
 *     sub_1403A0064 @ 0x1403A0064 (sub_1403A0064.c)
 *     sub_1403A0154 @ 0x1403A0154 (sub_1403A0154.c)
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     sub_1403A15FC @ 0x1403A15FC (sub_1403A15FC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074C5A8 @ 0x14074C5A8 (sub_14074C5A8.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 */

__int64 __fastcall sub_1409589A4(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  struct _DEVICE_OBJECT *v5; // rdi
  int v6; // edi
  PVOID v7; // rsi
  __int64 v9; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+5Ch] [rbp-5h]
  PVOID Object[2]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v14[72]; // [rsp+70h] [rbp+Fh] BYREF

  v12 = 0;
  v4 = 0;
  *(_OWORD *)Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(v14, 0, sizeof(v14));
  *(_WORD *)v14 = 283;
  if ( sub_1402DDE58((__int64)DeviceObject) )
  {
    v4 = 1;
    sub_1403A0154(DeviceObject);
    v5 = (struct _DEVICE_OBJECT *)sub_1403A0064((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)Object);
    sub_1403A01B0((__int64)DeviceObject);
  }
  else
  {
    v5 = DeviceObject;
  }
  v9 = 0LL;
  v11 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = sub_14074C5A8(v5, (__int128 *)v14, (IO_COMPLETION_ROUTINE *)sub_140564940, &v9);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v11;
  }
  if ( a2 )
    *a2 = v9;
  if ( v4 )
  {
    sub_1403A0154(DeviceObject);
    v7 = Object[1];
    if ( Object[1] )
    {
      sub_1403A15FC((ULONG_PTR)Object[1]);
      ObfDereferenceObject(v7);
    }
    sub_1403A01B0((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)sub_14080AB40(DeviceObject);
  }
  return (unsigned int)v6;
}
