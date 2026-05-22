/*
 * XREFs of ?QueryInterface@ISMHeatFrameworkHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B1850
 * Callers:
 *     ?QueryInterface@ISMHeatFrameworkHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007D7B0 (-QueryInterface@ISMHeatFrameworkHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ISMHeatFrameworkHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007D7D0 (-QueryInterface@ISMHeatFrameworkHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::QueryInterface(ISMHeatFrameworkHost *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8

  if ( !a3 )
    return 2147942487LL;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(ISMHeatFrameworkHost *))(*(_QWORD *)this + 8LL))(this);
    this = (ISMHeatFrameworkHost *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
LABEL_7:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_f47b6409_b2c8_48b0_ae4a_e20d3a64299d) )
  {
    (*(void (__fastcall **)(ISMHeatFrameworkHost *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_7;
  }
  return 2147500034LL;
}
