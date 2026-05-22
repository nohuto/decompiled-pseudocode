/*
 * XREFs of ?QueryInterface@BamoTestCommandsStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BD840
 * Callers:
 *     ?QueryInterface@BamoTestCommandsStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A8B0 (-QueryInterface@BamoTestCommandsStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoTestCommandsStub::QueryInterface(BamoTestCommandsStub *this, struct _GUID *a2, void **a3)
{
  _QWORD *v3; // r8
  void (__fastcall ***v4)(_QWORD); // r9
  _QWORD *v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v6 = 0;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || IsEqualGUID(v5, &GUID_b7295220_8536_a7ad_16c1_5d3c06ab97a7) )
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
