/*
 * XREFs of sub_1C0020F44 @ 0x1C0020F44
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C0020EFC @ 0x1C0020EFC (sub_1C0020EFC.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0021028 @ 0x1C0021028 (sub_1C0021028.c)
 */

__int64 __fastcall sub_1C0020F44(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v7; // rax
  void *v8; // rbx
  int v9; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)DeviceExtension == 1094997074 )
  {
    v4 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[663];
LABEL_5:
      if ( v7 )
      {
        *a2 = v7;
        return 0LL;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)DeviceExtension != 1431193940 )
      return 3221225485LL;
    v5 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[225];
      goto LABEL_5;
    }
  }
  if ( KeGetCurrentIrql() )
    return 3221225800LL;
  v8 = (void *)sub_1C0007CF4(64LL, 72LL, 1464885586LL, (__int64)DeviceObject);
  if ( !v8 )
    return 3221225626LL;
  v9 = sub_1C0021028(DeviceObject);
  if ( v9 >= 0 )
  {
    *a2 = v8;
    if ( v4 )
    {
      v4[663] = v8;
    }
    else if ( v5 )
    {
      v5[225] = v8;
    }
  }
  else
  {
    ExFreePoolWithTag(v8, 0x57506152u);
  }
  return (unsigned int)v9;
}
