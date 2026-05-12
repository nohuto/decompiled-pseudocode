/*
 * XREFs of sub_1C003EEB0 @ 0x1C003EEB0
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C003562C @ 0x1C003562C (sub_1C003562C.c)
 *     sub_1C00356B8 @ 0x1C00356B8 (sub_1C00356B8.c)
 *     sub_1C0036F7C @ 0x1C0036F7C (sub_1C0036F7C.c)
 *     sub_1C00382BC @ 0x1C00382BC (sub_1C00382BC.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C0046270 (StorPortDeviceReady.c)
 *     StorPortPauseDevice @ 0x1C0046AE0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0047380 (StorPortResumeDevice.c)
 *     sub_1C0049B10 @ 0x1C0049B10 (sub_1C0049B10.c)
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 *     sub_1C007B860 @ 0x1C007B860 (sub_1C007B860.c)
 *     sub_1C007CAA0 @ 0x1C007CAA0 (sub_1C007CAA0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003EEB0(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
