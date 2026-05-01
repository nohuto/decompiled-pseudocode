/*
 * XREFs of ?IUnknown_ServiceExists@@YAJPEAUIUnknown@@AEBU_GUID@@@Z @ 0x1805A07AC
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1805A0B98 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IUnknown_ServiceExists(struct IUnknown *a1, struct _GUID *a2)
{
  HRESULT v2; // ebx
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  ppvOut = a2;
  v2 = IUnknown_QueryService(
         a1,
         (const GUID *const)&SID_ExecuteLogUsage,
         &GUID_00000000_0000_0000_c000_000000000046,
         &ppvOut);
  if ( v2 >= 0 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
  return (unsigned int)v2;
}
