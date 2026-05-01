/*
 * XREFs of ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FF72C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FF824 (--$MakeAndInitializeOrThrow@VXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A7914 (-InternalRelease@-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0XamlSnapAssistViewHost@@QEAA@XZ @ 0x180600754 (--0XamlSnapAssistViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180602D80 (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlSnapAssistViewHost,XamlSnapAssistViewHost,XamlViewHostInitializeArgs const &>(
        volatile signed __int64 **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  XamlSnapAssistViewHost *v4; // rax
  int v5; // esi
  volatile signed __int64 *v6; // rdi
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  volatile signed __int64 *v11; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (XamlSnapAssistViewHost *)operator new(0x2B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)XamlSnapAssistViewHost::XamlSnapAssistViewHost(v4);
    v11 = v6;
    v5 = XamlSnapAssistViewHost::RuntimeClassInitialize((XamlSnapAssistViewHost *)v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v8 = *((_QWORD *)v6 + 23);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v6 + 23, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
      }
LABEL_11:
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
