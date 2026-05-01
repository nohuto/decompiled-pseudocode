/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x18013F034
 * Callers:
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18013EE74 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0VirtualDesktopController@@QEAA@XZ @ 0x18013F0C0 (--0VirtualDesktopController@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B99D4 (-InternalRelease@-$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopController,VirtualDesktopController,>(
        VirtualDesktopController **a1)
{
  unsigned int v2; // ebx
  VirtualDesktopController *v3; // rax
  VirtualDesktopController *v4; // rax
  volatile int *v5; // rdx
  VirtualDesktopController *v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  VirtualDesktopController *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (VirtualDesktopController *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = VirtualDesktopController::VirtualDesktopController(v3);
    v10 = v4;
    v6 = v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 10);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 10, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_7:
    *a1 = v6;
    Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
