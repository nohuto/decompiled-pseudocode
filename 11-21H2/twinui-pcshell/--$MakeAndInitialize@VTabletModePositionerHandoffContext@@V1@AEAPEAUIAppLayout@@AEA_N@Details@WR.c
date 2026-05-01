/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x18050DE18
 * Callers:
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x18050E0CC (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A6A90 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TabletModePositionerHandoffContext@@QEAA@XZ @ 0x18050DEE8 (--0TabletModePositionerHandoffContext@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z @ 0x18050E028 (-RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerHandoffContext,TabletModePositionerHandoffContext,IAppLayout * &,bool &>(
        volatile int **a1,
        struct IAppLayout **a2,
        bool *a3)
{
  TabletModePositionerHandoffContext *v6; // rax
  int v7; // edi
  volatile int *v8; // rbx
  volatile int *v9; // rdx
  volatile int *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (TabletModePositionerHandoffContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (volatile int *)TabletModePositionerHandoffContext::TabletModePositionerHandoffContext(v6);
    v11 = v8;
    v12 = 0LL;
    v7 = TabletModePositionerHandoffContext::RuntimeClassInitialize((TabletModePositionerHandoffContext *)v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 3), v9);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
