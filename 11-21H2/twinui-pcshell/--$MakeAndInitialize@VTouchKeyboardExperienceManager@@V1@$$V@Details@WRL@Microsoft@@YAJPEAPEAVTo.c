/*
 * XREFs of ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801706C4
 * Callers:
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180170610 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18006A3D8 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1800B0904 (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ADB0 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TouchKeyboardExperienceManager,TouchKeyboardExperienceManager,>(
        volatile signed __int64 **a1)
{
  TouchKeyboardExperienceManager *v2; // rax
  volatile signed __int64 *v3; // rdi
  volatile int *v4; // rdx
  int v5; // esi
  signed __int64 v6; // rax
  signed __int64 v8; // rtt
  void *v9; // [rsp+48h] [rbp+10h] BYREF
  TouchKeyboardExperienceManager *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (TouchKeyboardExperienceManager *)operator new(0x8F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( v2 )
  {
    v10 = v2;
    v3 = (volatile signed __int64 *)TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(v2);
    v9 = (void *)v3;
    v5 = TouchKeyboardExperienceManager::RuntimeClassInitialize((TouchKeyboardExperienceManager *)v3);
    if ( v5 >= 0 )
    {
      if ( v3 )
      {
        v6 = *((_QWORD *)v3 + 31);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != 0x7FFFFFFF )
          {
            v8 = v6;
            v6 = _InterlockedCompareExchange64(v3 + 31, v6 + 1, v6);
            if ( v8 != v6 )
              continue;
          }
          goto LABEL_7;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v4);
      }
LABEL_7:
      *a1 = v3;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
