/*
 * XREFs of IvtpGetNextInternalDeviceScope @ 0x14037F5DC
 * Callers:
 *     IvtFindDevice @ 0x14037F540 (IvtFindDevice.c)
 *     IvtCreateDevice @ 0x14037FAA0 (IvtCreateDevice.c)
 * Callees:
 *     DmrGetNextDeviceScope @ 0x14037F610 (DmrGetNextDeviceScope.c)
 */

__int64 __fastcall IvtpGetNextInternalDeviceScope(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 280);
  v4 = v2 + *(unsigned int *)(a1 + 256);
  if ( v4 <= v2 )
    return 0LL;
  else
    return DmrGetNextDeviceScope(v2, v4, a2);
}
