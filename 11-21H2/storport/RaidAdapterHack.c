/*
 * XREFs of RaidAdapterHack @ 0x1C0034D20
 * Callers:
 *     RaDriverAddDevice @ 0x1C003D390 (RaDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0086D80 (PortRegistryWriteDeviceKey.c)
 *     RaDeleteBus @ 0x1C008DBC0 (RaDeleteBus.c)
 *     RaInitializeBus @ 0x1C008DBFC (RaInitializeBus.c)
 */

__int64 __fastcall RaidAdapterHack(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v5; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v7[72]; // [rsp+60h] [rbp-49h] BYREF
  _WORD v8[32]; // [rsp+B0h] [rbp+7h] BYREF

  v4 = 0;
  DestinationString = 0LL;
  v5 = 0LL;
  memset(v7, 0, 0x41uLL);
  memset(v8, 0, sizeof(v8));
  result = RaInitializeBus(v7, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, _WORD *))&v7[64])(*(_QWORD *)&v7[16], 4LL, v8) >= 0xF )
    {
      if ( v8[0] == 5197 )
      {
        if ( v8[1] != 5632 && (unsigned __int16)(v8[1] + 22528) > 1u )
          return RaDeleteBus(v7);
        RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
        RtlInitUnicodeString(&v5, L"MSISupported");
        v3 = PortRegistryWriteDeviceKey(
               *(_QWORD *)(a1 + 32),
               (unsigned int)&DestinationString,
               (unsigned int)&v5,
               4,
               (__int64)&v4,
               4);
        if ( v3 < 0
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            67LL,
            &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
            (unsigned int)v3);
        }
      }
      if ( v8[0] == 4318 )
        *(_BYTE *)(a1 + 5232) = 1;
    }
    return RaDeleteBus(v7);
  }
  return result;
}
