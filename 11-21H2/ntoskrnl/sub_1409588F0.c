/*
 * XREFs of sub_1409588F0 @ 0x1409588F0
 * Callers:
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 *     sub_14095A388 @ 0x14095A388 (sub_14095A388.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 */

__int64 __fastcall sub_1409588F0(char a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *DeviceNode; // r9
  bool v6; // zf
  _BYTE v7[88]; // [rsp+30h] [rbp-58h] BYREF

  DeviceNode = a2->DeviceObjectExtension->DeviceNode;
  if ( a1 == 4 )
  {
    v6 = DeviceNode[75] == 779;
  }
  else
  {
    if ( a1 != 5 )
    {
      if ( a1 == 6 && (unsigned int)(DeviceNode[75] - 778) <= 1 )
        goto LABEL_5;
      return 3221225473LL;
    }
    v6 = DeviceNode[75] == 778;
  }
  if ( v6 )
  {
LABEL_5:
    memset(v7, 0, 0x48uLL);
    v7[0] = 27;
    v7[1] = a1;
    return sub_14074CA9C(a2, (__int64)v7, -1073741637, 0LL, 0LL);
  }
  return 3221225473LL;
}
