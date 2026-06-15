/*
 * XREFs of ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14008D104
 * Callers:
 *     ??_G?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14008D5B0 (--_G-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14008D448 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::~CComAggObject<CSpatialCrossProcessClientOutputEndpoint>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint((CSpatialCrossProcessClientEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 1472) )
  {
    *(_BYTE *)(a1 + 1472) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 1432));
  }
}
