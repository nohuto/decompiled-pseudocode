/*
 * XREFs of ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x18052573C
 * Callers:
 *     ?AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z @ 0x180525A0C (-AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z @ 0x18011B280 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1805233F4 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppResizeData@@QEAA@XZ @ 0x180525824 (--0AppResizeData@@QEAA@XZ.c)
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x180525B8C (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeData,AppResizeData,IAppLayout * &>(
        __int64 **a1,
        __int64 *a2)
{
  AppResizeData *v4; // rax
  unsigned int v5; // ebx
  __int64 *v6; // rsi
  int v7; // eax
  volatile int *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (AppResizeData *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = (__int64 *)AppResizeData::AppResizeData(v4);
    v11 = v6;
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(v6 + 5, *a2);
    v7 = AppResizeData::ComputeDropTargets((AppResizeData *)v6);
    v5 = v7;
    if ( v7 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v6 + 36), v8);
      *a1 = v6;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
