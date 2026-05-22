/*
 * XREFs of ?QueryInterface@BamoShellHandwritingHostClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800753E0
 * Callers:
 *     ?QueryInterface@BamoShellHandwritingHostClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BDF0 (-QueryInterface@BamoShellHandwritingHostClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoShellHandwritingHostClientProxy::QueryInterface(
        BamoShellHandwritingHostClientProxy *this,
        struct _GUID *a2,
        void **a3)
{
  _QWORD *v3; // r8
  void (__fastcall ***v4)(_QWORD); // r9
  _QWORD *v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v6 = 0;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || IsEqualGUID(v5, &GUID_2d7dc760_c62a_63ac_4eba_4fda0ee55c8c) )
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
