/*
 * XREFs of ?QueryInterface@ISMHeatFrameworkHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180184770
 * Callers:
 *     ?QueryInterface@ISMHeatFrameworkHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052A40 (-QueryInterface@ISMHeatFrameworkHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ISMHeatFrameworkHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052A60 (-QueryInterface@ISMHeatFrameworkHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::QueryInterface(
        ISMHeatFrameworkHost *this,
        const struct _GUID *a2,
        ISMHeatFrameworkHost **a3)
{
  ISMHeatFrameworkHost *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = this;
  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(ISMHeatFrameworkHost *))(*(_QWORD *)this + 8LL))(this);
    v4 = (ISMHeatFrameworkHost *)((char *)v4 + 16);
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f47b6409_b2c8_48b0_ae4a_e20d3a64299d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f47b6409_b2c8_48b0_ae4a_e20d3a64299d.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f47b6409_b2c8_48b0_ae4a_e20d3a64299d.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(ISMHeatFrameworkHost *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_11;
  }
  return 2147500034LL;
}
