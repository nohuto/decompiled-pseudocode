/*
 * XREFs of ?QueryInterface@HeatProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DA800
 * Callers:
 *     ?QueryInterface@HeatProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B090 (-QueryInterface@HeatProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HeatProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B0B0 (-QueryInterface@HeatProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HeatProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B0D0 (-QueryInterface@HeatProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::QueryInterface(HeatProcessor *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8

  if ( !a3 )
    return 2147942487LL;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(HeatProcessor *))(*(_QWORD *)this + 8LL))(this);
    this = (HeatProcessor *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
LABEL_7:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d) )
  {
    (*(void (__fastcall **)(HeatProcessor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_7;
  }
  return 2147500034LL;
}
