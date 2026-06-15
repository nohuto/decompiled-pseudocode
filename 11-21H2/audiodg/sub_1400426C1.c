/*
 * XREFs of sub_1400426C1 @ 0x1400426C1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140013204 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 */

void __fastcall sub_1400426C1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        int a18,
        int a19,
        __int64 a20)
{
  if ( a12 < 0 )
  {
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a14);
    JUMPOUT(0x140042389LL);
  }
  a20 = 0LL;
  ATL::CComPtr<IAudioMediaType>::operator=(&a13, &a14);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a14);
  JUMPOUT(0x14001252BLL);
}
