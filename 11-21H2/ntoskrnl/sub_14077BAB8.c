/*
 * XREFs of sub_14077BAB8 @ 0x14077BAB8
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_1406EA694 @ 0x1406EA694 (sub_1406EA694.c)
 *     sub_140748FA4 @ 0x140748FA4 (sub_140748FA4.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769668 @ 0x140769668 (sub_140769668.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076B1A8 @ 0x14076B1A8 (sub_14076B1A8.c)
 *     sub_14076B5DC @ 0x14076B5DC (sub_14076B5DC.c)
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14080D8A8 @ 0x14080D8A8 (sub_14080D8A8.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_140944640 @ 0x140944640 (sub_140944640.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14077BAB8(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
