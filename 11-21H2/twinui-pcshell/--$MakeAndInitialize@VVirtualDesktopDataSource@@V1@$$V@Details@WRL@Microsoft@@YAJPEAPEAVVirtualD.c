/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1800B108C
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0FC8 (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x1800B113C (--0VirtualDesktopDataSource@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CAE8 (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(
        VirtualDesktopDataSource **a1)
{
  VirtualDesktopDataSource *v2; // rax
  VirtualDesktopDataSource *v3; // rax
  volatile int *v4; // rdx
  VirtualDesktopDataSource *v5; // r9
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  VirtualDesktopDataSource *v10; // [rsp+38h] [rbp+10h] BYREF
  VirtualDesktopDataSource *v11; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = (VirtualDesktopDataSource *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v2;
  if ( v2 )
  {
    v11 = v2;
    v3 = VirtualDesktopDataSource::VirtualDesktopDataSource(v2);
    v5 = v3;
    v10 = v3;
    if ( v3 )
    {
      v6 = *((_QWORD *)v3 + 10);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 10, v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v4);
    }
LABEL_7:
    *a1 = v5;
    Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(&v10);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
