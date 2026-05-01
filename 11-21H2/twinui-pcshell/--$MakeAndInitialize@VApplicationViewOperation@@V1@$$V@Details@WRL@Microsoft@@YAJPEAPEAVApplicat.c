/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x1804EEB44
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804EEC7C (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 * Callees:
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x1800F25E4 (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@Z @ 0x18031EC70 (-Attach@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewOperation,ApplicationViewOperation,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  ApplicationViewOperation *v3; // rax
  ApplicationViewOperation *v4; // rax
  __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (ApplicationViewOperation *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = ApplicationViewOperation::ApplicationViewOperation(v3);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::Attach(&v9, (__int64)v4);
    v5 = v9;
    if ( v9 )
    {
      v6 = *(_QWORD *)(v9 + 64);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (Microsoft::WRL::Details *)(2 * v6 + 16),
        (volatile int *)((unsigned __int64)v6 >> 63));
LABEL_10:
      v5 = v9;
    }
    *a1 = v5;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
