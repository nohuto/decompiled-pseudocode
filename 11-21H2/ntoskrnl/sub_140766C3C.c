/*
 * XREFs of sub_140766C3C @ 0x140766C3C
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_140946EF8 @ 0x140946EF8 (sub_140946EF8.c)
 *     sub_1409473F0 @ 0x1409473F0 (sub_1409473F0.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DDE58 @ 0x1402DDE58 (sub_1402DDE58.c)
 *     sub_1403A0064 @ 0x1403A0064 (sub_1403A0064.c)
 *     sub_1403A0154 @ 0x1403A0154 (sub_1403A0154.c)
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     sub_1403A15FC @ 0x1403A15FC (sub_1403A15FC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407490C0 @ 0x1407490C0 (sub_1407490C0.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_140766E4C @ 0x140766E4C (sub_140766E4C.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     sub_14095855C @ 0x14095855C (sub_14095855C.c)
 */

__int64 __fastcall sub_140766C3C(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  void *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  sub_140779DC4(&P);
  if ( a2 == 2 )
    sub_1407490C0((__int64)DeviceObject, 1LL);
  memset(v14, 0, 0x48uLL);
  v14[0] = 27;
  v14[1] = a2;
  if ( sub_1402DDE58((__int64)DeviceObject) )
  {
    v2 = 1;
    sub_1403A0154(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)sub_1403A0064((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v13);
    sub_1403A01B0((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      sub_14074A08C((__int64)DeviceNode, 8);
      sub_14095855C(DeviceNode);
    }
    if ( a2 == 2 )
    {
      sub_140767040(DeviceObject);
      sub_140766F84(v7, *((_QWORD *)DeviceNode + 6), *((_QWORD *)DeviceNode + 4));
    }
  }
  v8 = sub_14074CA9C(v6, (__int64)v14, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    sub_1403A0154(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      sub_1403A0064((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v13);
    v9 = (void *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      sub_1403A15FC(*((ULONG_PTR *)&v13 + 1));
      ObfDereferenceObject(v9);
    }
    sub_1403A01B0((__int64)DeviceObject);
    if ( (a2 != 1 || v8 < 0) && a2 != 23 )
    {
LABEL_21:
      if ( a2 != 2 )
        goto LABEL_26;
      goto LABEL_22;
    }
    v8 = sub_14080AB40(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_21;
LABEL_22:
  sub_140766E4C(DeviceNode);
  DeviceNode[39] = 0;
  if ( a2 == 2 )
  {
    sub_14076FBEC(DeviceNode, 4104LL);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_26:
  if ( P )
    sub_140779A50(P);
  return (unsigned int)v8;
}
