/*
 * XREFs of ?QueryInterface@BamoDataProviderRegistrarProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004ED60
 * Callers:
 *     ?QueryInterface@BamoDataProviderRegistrarProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007ABD0 (-QueryInterface@BamoDataProviderRegistrarProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoDataProviderRegistrarProxy::QueryInterface(
        BamoDataProviderRegistrarProxy *this,
        struct _GUID *a2,
        void **a3)
{
  _QWORD *v3; // r8
  void (__fastcall ***v4)(_QWORD); // r9
  _QWORD *v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v6 = 0;
  if ( !IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !IsEqualGUID(v5, &GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130) )
  {
    *v3 = 0LL;
    return (unsigned int)-2147467262;
  }
  v7 = (unsigned __int64)(v4 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64);
  *v3 = v7;
  if ( !v7 )
    return (unsigned int)-2147467262;
  (**v4)(v4);
  return v6;
}
