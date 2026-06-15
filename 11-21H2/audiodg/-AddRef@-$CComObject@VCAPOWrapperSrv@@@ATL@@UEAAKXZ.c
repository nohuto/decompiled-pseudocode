/*
 * XREFs of ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400259A0
 * Callers:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x1400322F0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x140032310 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x140032330 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::AddRef(__int64 a1)
{
  unsigned int v1; // r9d
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2 + 1, v2) )
      return (unsigned int)(v2 + 1);
  }
  return v1;
}
