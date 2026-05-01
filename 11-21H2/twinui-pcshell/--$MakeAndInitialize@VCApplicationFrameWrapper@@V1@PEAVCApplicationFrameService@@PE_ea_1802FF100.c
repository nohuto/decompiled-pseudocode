/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1802FF100
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18017FD40 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x180070CB0 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x1800C08E4 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x1800C0AAC (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180144170 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@Z @ 0x1802FF8E4 (-Attach@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
        volatile signed __int64 **a1,
        _QWORD *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4,
        const unsigned __int16 **a5,
        unsigned int *a6)
{
  CApplicationFrameWrapper *v10; // rax
  int v11; // esi
  CApplicationFrameWrapper *v12; // rax
  unsigned int v13; // ebp
  const unsigned __int16 *v14; // r15
  struct IApplicationFrame *v15; // r9
  volatile signed __int64 *v16; // rbx
  volatile int *v17; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  CApplicationFrameWrapper *v21; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CApplicationFrameWrapper *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v10;
  if ( v10 )
  {
    v12 = CApplicationFrameWrapper::CApplicationFrameWrapper(v10);
    v21 = 0LL;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::Attach(&v21, v12);
    v13 = *a6;
    v14 = *a5;
    v15 = *a4;
    v16 = (volatile signed __int64 *)v21;
    v11 = CApplicationFrameWrapper::RuntimeClassInitialize(
            v21,
            (struct IApplicationFrameService *)((*a2 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
            *a3,
            v15);
    if ( v11 >= 0 )
    {
      v11 = CApplicationFrameWrapper::Initialize((CApplicationFrameWrapper *)v16, v14, v13);
      if ( v11 >= 0 )
      {
        if ( v16 )
        {
          v18 = *((_QWORD *)v16 + 8);
          while ( v18 >= 0 )
          {
            if ( (_DWORD)v18 != 0x7FFFFFFF )
            {
              v19 = v18;
              v18 = _InterlockedCompareExchange64(v16 + 8, v18 + 1, v18);
              if ( v19 != v18 )
                continue;
            }
            goto LABEL_12;
          }
          Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v18 + 16), v17);
LABEL_12:
          v16 = (volatile signed __int64 *)v21;
        }
        *a1 = v16;
        v11 = 0;
      }
    }
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((volatile signed __int64 **)&v21, v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
