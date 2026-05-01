/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18004951C
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180049160 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x180049618 (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x180049714 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ?Attach@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@Z @ 0x1800498FC (-Attach@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
        CApplicationFrameWrapper **a1,
        _QWORD *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4)
{
  CApplicationFrameWrapper *v8; // rax
  CApplicationFrameWrapper *v9; // rax
  struct IApplicationFrame *v10; // r9
  CApplicationFrameWrapper *v11; // rbx
  volatile int *v12; // rdx
  int v13; // esi
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  CApplicationFrameWrapper *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CApplicationFrameWrapper *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v8;
  if ( v8 )
  {
    v9 = CApplicationFrameWrapper::CApplicationFrameWrapper(v8);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::Attach(&v17, v9);
    v10 = *a4;
    v11 = v17;
    v13 = CApplicationFrameWrapper::RuntimeClassInitialize(
            v17,
            (struct IApplicationFrameService *)((*a2 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
            *a3,
            v10);
    if ( v13 >= 0 )
    {
      if ( v11 )
      {
        v14 = *((_QWORD *)v11 + 8);
        while ( v14 >= 0 )
        {
          if ( (_DWORD)v14 != 0x7FFFFFFF )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 8, v14 + 1, v14);
            if ( v15 != v14 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), v12);
LABEL_8:
        v11 = v17;
      }
      *a1 = v11;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
