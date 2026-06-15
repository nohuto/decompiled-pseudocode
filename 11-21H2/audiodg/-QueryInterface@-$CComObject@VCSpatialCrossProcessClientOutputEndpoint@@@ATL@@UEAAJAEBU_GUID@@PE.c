/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008E2F0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400360D0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400360F0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036110 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036130 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036150 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036170 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036190 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGI@EAAJAEBU_GUID.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  _DWORD *v9; // rcx
  int v10; // ebp
  int v11; // eax

  v6 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    v7 = a1 + 1328;
    goto LABEL_9;
  }
  v8 = &unk_1400CD470;
  while ( 1 )
  {
    v9 = (_DWORD *)*(v8 - 2);
    if ( v9 )
    {
      v10 = 0;
      if ( *v9 != *a2 || v9[1] != a2[1] || v9[2] != a2[2] || v9[3] != a2[3] )
        goto LABEL_21;
    }
    else
    {
      v10 = 1;
    }
    if ( *v8 == 1LL )
      break;
    v11 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v8)(a1, a2, a3, *(v8 - 1));
    if ( !v11 || !v10 && v11 < 0 )
      return (unsigned int)v11;
LABEL_21:
    v8 += 3;
    if ( !*v8 )
      return (unsigned int)-2147467262;
  }
  v7 = a1 + *(v8 - 1);
LABEL_9:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *a3 = v7;
  return v6;
}
