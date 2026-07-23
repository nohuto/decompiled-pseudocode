/*
 * XREFs of sub_140958764 @ 0x140958764
 * Callers:
 *     sub_14095B1A4 @ 0x14095B1A4 (sub_14095B1A4.c)
 * Callees:
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140958764(PDEVICE_OBJECT DeviceObject, USHORT **a2)
{
  USHORT *Pool2; // rax
  USHORT *v5; // rbx
  int v7; // edi

  Pool2 = (USHORT *)ExAllocatePool2(256LL, 40LL, 538996816LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v7 = sub_14074C6C0(DeviceObject, (ULONG_PTR)qword_14003A3D0, 0, 0x28u, 0LL, Pool2);
  if ( v7 >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v7;
  }
}
