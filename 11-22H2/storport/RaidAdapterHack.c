/*
 * XREFs of RaidAdapterHack @ 0x1C0035B8C
 * Callers:
 *     RaDriverAddDevice @ 0x1C003F5C0 (RaDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     PortRegistryWriteDeviceKey @ 0x1C00A02CC (PortRegistryWriteDeviceKey.c)
 *     RaDeleteBus @ 0x1C00A8290 (RaDeleteBus.c)
 *     RaInitializeBus @ 0x1C00A82CC (RaInitializeBus.c)
 */

__int64 __fastcall RaidAdapterHack(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v5; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v7[16]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v8; // [rsp+70h] [rbp-39h]
  unsigned int (__fastcall *v9)(__int64, __int64, __int16 *); // [rsp+A0h] [rbp-9h]
  __int16 v10; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v11; // [rsp+B2h] [rbp+9h]

  v4 = 0;
  DestinationString = 0LL;
  v5 = 0LL;
  memset_0(v7, 0, 0x41uLL);
  memset_0(&v10, 0, 0x40uLL);
  result = RaInitializeBus(v7, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( v9(v8, 4LL, &v10) >= 0xF )
    {
      if ( v10 == 5197 )
      {
        if ( v11 != 5632 && (unsigned __int16)(v11 + 22528) > 1u )
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
            &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            (unsigned int)v3);
        }
      }
      if ( v10 == 4318 )
        *(_BYTE *)(a1 + 5296) = 1;
    }
    return RaDeleteBus(v7);
  }
  return result;
}
