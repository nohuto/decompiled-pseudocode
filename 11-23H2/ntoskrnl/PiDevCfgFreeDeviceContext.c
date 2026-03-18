/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x1407D9030
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x1407D8F50 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842950 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgProcessDevice @ 0x14087A1F0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x14087C808 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095E4F0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140962888 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409628FC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140962C74 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1409633BC (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeUnicodeString(v2++);
    --v3;
  }
  while ( v3 );
}
