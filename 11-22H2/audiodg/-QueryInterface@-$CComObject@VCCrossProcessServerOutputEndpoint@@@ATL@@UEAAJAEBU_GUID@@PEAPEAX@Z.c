/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140093040
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400333F0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033410 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033430 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033450 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rsi
  _DWORD *v8; // rcx
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rbx

  v6 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      *a3 = a1;
      return v6;
    }
    v7 = &unk_1400DC930;
    while ( 1 )
    {
      v8 = (_DWORD *)*(v7 - 2);
      if ( v8 )
      {
        v9 = 0;
        if ( *v8 != *a2 || v8[1] != a2[1] || v8[2] != a2[2] || v8[3] != a2[3] )
          goto LABEL_20;
      }
      else
      {
        v9 = 1;
      }
      if ( *v7 == 1LL )
      {
        v11 = a1 + *(v7 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *a3 = v11;
        return v6;
      }
      v10 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v7)(a1, a2, a3, *(v7 - 1));
      if ( !v10 || !v9 && v10 < 0 )
        return (unsigned int)v10;
LABEL_20:
      v7 += 3;
      if ( !*v7 )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147467261;
}
