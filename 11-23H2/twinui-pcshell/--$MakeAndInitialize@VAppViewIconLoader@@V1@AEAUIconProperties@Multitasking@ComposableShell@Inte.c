/*
 * XREFs of ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x180646090
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x18064626C (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0AppViewIconLoader@@QEAA@XZ @ 0x180646A8C (--0AppViewIconLoader@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x1806484E0 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Z @ 0x180649A04 (-RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Int.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewIconLoader,AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
        AppViewIconLoader **a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  AppViewIconLoader *v9; // rax
  int v10; // esi
  AppViewIconLoader *v11; // rdi
  __int64 v12; // rcx
  volatile int *v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  AppViewIconLoader *v17; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF

  *a1 = 0LL;
  v9 = (AppViewIconLoader *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = AppViewIconLoader::AppViewIconLoader(v9);
    v17 = v11;
    v12 = *a5;
    v18[0] = *a2;
    v18[1] = a2[1];
    v10 = AppViewIconLoader::RuntimeClassInitialize(v11, v18, *a3, *a4, v12);
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        v14 = *((_QWORD *)v11 + 4);
        while ( v14 >= 0 )
        {
          if ( (_DWORD)v14 != 0x7FFFFFFF )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 4, v14 + 1, v14);
            if ( v15 != v14 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), v13);
      }
LABEL_11:
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
