/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x1800C07F0
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800C05F0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x1800C08E4 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x1800C0AAC (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180144170 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
        volatile signed __int64 **a1,
        _QWORD *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4)
{
  CApplicationFrameWrapper *v8; // rax
  volatile signed __int64 *v9; // rdi
  volatile int *v10; // rdx
  int v11; // esi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  volatile signed __int64 *v15; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v8 = (CApplicationFrameWrapper *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = (volatile signed __int64 *)CApplicationFrameWrapper::CApplicationFrameWrapper(v8);
    v15 = v9;
    v11 = CApplicationFrameWrapper::RuntimeClassInitialize(
            (CApplicationFrameWrapper *)v9,
            (struct IApplicationFrameService *)((*a2 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
            *a3,
            *a4);
    if ( v11 >= 0 )
    {
      if ( v9 )
      {
        v12 = *((_QWORD *)v9 + 8);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64(v9 + 8, v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v10);
      }
LABEL_8:
      *a1 = v9;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
