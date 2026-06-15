/*
 * XREFs of sub_1400427A4 @ 0x1400427A4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1400427A4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        void (__fastcall ***a11)(_QWORD, __int64),
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19,
        void (__fastcall ***a20)(_QWORD, __int64),
        __int64 a21,
        __int64 a22,
        int a23,
        __int64 a24,
        int a25,
        __int64 a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  if ( a8 >= 0 )
  {
    a18 = a35;
    a22 = a26;
    JUMPOUT(0x140042731LL);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a13);
  if ( a11 )
    (**a11)(a11, 1LL);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a9);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a12);
  if ( a20 )
    (**a20)(a20, 1LL);
  JUMPOUT(0x1400140E4LL);
}
