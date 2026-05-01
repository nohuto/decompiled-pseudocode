/*
 * XREFs of ??$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewSwitchItemZOrderSort@@@Z @ 0x1800812D8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180081294 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A008 (-InternalRelease@-$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppViewSwitchItemZOrderSort@@QEAA@XZ @ 0x180081364 (--0AppViewSwitchItemZOrderSort@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewSwitchItemZOrderSort,AppViewSwitchItemZOrderSort,>(
        AppViewSwitchItemZOrderSort **a1)
{
  unsigned int v1; // ebx
  AppViewSwitchItemZOrderSort *v3; // rax
  AppViewSwitchItemZOrderSort *v4; // rax
  volatile int *v5; // rdx
  AppViewSwitchItemZOrderSort *v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  AppViewSwitchItemZOrderSort *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = (AppViewSwitchItemZOrderSort *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = AppViewSwitchItemZOrderSort::AppViewSwitchItemZOrderSort(v3);
    v10 = v4;
    v6 = v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 7);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 7, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_7:
    *a1 = v6;
    Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
