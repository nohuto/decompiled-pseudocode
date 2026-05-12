/*
 * XREFs of sub_1C0059CC4 @ 0x1C0059CC4
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C005B040 @ 0x1C005B040 (sub_1C005B040.c)
 */

__int64 __fastcall sub_1C0059CC4(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _DWORD *DeviceExtension; // rsi
  _QWORD *v5; // rbx
  void *v7; // rax
  void *v8; // rdi
  int v9; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *DeviceExtension != 1094997074 )
    return 3221225485LL;
  v5 = DeviceExtension + 1328;
  if ( DeviceExtension && *v5 )
  {
    *a2 = *v5;
    return 0LL;
  }
  else if ( KeGetCurrentIrql() )
  {
    return 3221225800LL;
  }
  else
  {
    v7 = (void *)sub_1C0007CF4(64LL, 80LL, 1347379538LL, (__int64)DeviceObject);
    v8 = v7;
    if ( v7 )
    {
      v9 = sub_1C005B040(DeviceObject, v7);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag(v8, 0x504F6152u);
      }
      else
      {
        *a2 = v8;
        if ( DeviceExtension )
          *v5 = v8;
      }
      return (unsigned int)v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
