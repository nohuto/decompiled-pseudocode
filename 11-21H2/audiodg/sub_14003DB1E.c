/*
 * XREFs of sub_14003DB1E @ 0x14003DB1E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_14003DB1E(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24)
{
  if ( a23 < 0 )
  {
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a8);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a24);
    JUMPOUT(0x14003D9D8LL);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a24);
  JUMPOUT(0x140009DDALL);
}
