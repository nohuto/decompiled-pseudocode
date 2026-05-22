/*
 * XREFs of ?QueryInterface@GazeProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E7330
 * Callers:
 *     ?QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EA10 (-QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EA30 (-QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EA50 (-QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EA70 (-QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EA90 (-QueryInterface@GazeProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::QueryInterface(GazeProcessor *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8

  if ( !a3 )
    return 2147942487LL;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    this = (GazeProcessor *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
LABEL_7:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d) )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_7;
  }
  return 2147500034LL;
}
