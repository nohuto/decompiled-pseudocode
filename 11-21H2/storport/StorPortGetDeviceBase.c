/*
 * XREFs of StorPortGetDeviceBase @ 0x1C0043270
 * Callers:
 *     StorPortGetDeviceBaseVrfy @ 0x1C0095240 (StorPortGetDeviceBaseVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     WPP_SF_is @ 0x1C0047714 (WPP_SF_is.c)
 *     RaidTranslateResourceListAddress @ 0x1C004C3C8 (RaidTranslateResourceListAddress.c)
 *     RaidAllocateAddressMapping @ 0x1C004E124 (RaidAllocateAddressMapping.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, char a6)
{
  _DWORD *Adapter; // rax
  int v9; // r9d
  int v10; // r10d
  _DWORD *v11; // rsi
  int v12; // r8d
  const char *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdi

  Adapter = RaidpPortGetAdapter(a1);
  v11 = Adapter;
  if ( !Adapter )
    return 0LL;
  if ( (int)RaidTranslateResourceListAddress((int)Adapter + 320, v10, a3, v9, a5) < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v13 = "Io";
      if ( !a6 )
        v13 = "Memory";
      WPP_SF_is(WPP_GLOBAL_Control->AttachedDevice, (unsigned int)"Memory", v12, a4, (__int64)v13);
    }
    return 0LL;
  }
  if ( a6 )
    return 0LL;
  v15 = MmMapIoSpaceEx(0LL, a5, 516LL);
  v16 = v15;
  if ( v15 && (int)RaidAllocateAddressMapping((int)v11 + 824, a4, v15, a5, a3, *((_QWORD *)v11 + 1)) < 0 )
    return 0LL;
  return v16;
}
