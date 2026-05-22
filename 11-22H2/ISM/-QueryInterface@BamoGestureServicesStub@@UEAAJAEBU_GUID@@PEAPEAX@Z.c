/*
 * XREFs of ?QueryInterface@BamoGestureServicesStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801619C0
 * Callers:
 *     ?QueryInterface@BamoGestureServicesStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B9B0 (-QueryInterface@BamoGestureServicesStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoGestureServicesStub::QueryInterface(BamoGestureServicesStub *this, struct _GUID *a2, void **a3)
{
  _QWORD *v3; // r8
  void (__fastcall ***v4)(_QWORD); // r9
  _QWORD *v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v6 = 0;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || IsEqualGUID(v5, &GUID_2c2781a9_5a63_ec8f_c9d7_40d4e9e06af6) )
  {
    v7 = (unsigned __int64)(v4 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64);
    *v3 = v7;
    if ( v7 )
    {
      (**v4)(v4);
      return v6;
    }
  }
  else
  {
    *v3 = 0LL;
  }
  return (unsigned int)-2147467262;
}
