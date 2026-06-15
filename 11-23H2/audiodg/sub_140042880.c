/*
 * XREFs of sub_140042880 @ 0x140042880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall sub_140042880(
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
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        __int64 a21,
        int a22,
        int a23,
        __int64 a24,
        int a25,
        int a26,
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
  __int64 v35; // rax

  if ( a8 >= 0 )
  {
    a18 = a35;
    v35 = a17;
    *(_DWORD *)(a19 + 136) |= 6u;
    *(_DWORD *)(v35 + 48) = 0;
    a14 = a18;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&a13);
    JUMPOUT(0x140014053LL);
  }
  JUMPOUT(0x1400427FELL);
}
