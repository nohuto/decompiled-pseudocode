/*
 * XREFs of ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18004BC9C
 * Callers:
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x18004B4D0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BBB0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1805537F0 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewManager::_FindMTVHost(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  int v7; // ebx
  unsigned __int64 *v9; // rsi
  char v10; // di
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 *v13; // rbx
  __int64 v14; // rax
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h]

  v17 = a2;
  v7 = a2;
  if ( a4 )
    *a4 = 0LL;
  v9 = a5;
  if ( a5 )
    *a5 = -1LL;
  v10 = 0;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 304) )
  {
    v12 = 0LL;
    do
    {
      if ( v10 )
        break;
      (*(void (__fastcall **)(_QWORD, unsigned __int64 **))(**(_QWORD **)(v12 + *(_QWORD *)(a1 + 296)) + 24LL))(
        *(_QWORD *)(v12 + *(_QWORD *)(a1 + 296)),
        &a5);
      if ( (v7 & (unsigned int)a5) != 0 )
      {
        if ( a3 != 1
          || ((*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v12 + *(_QWORD *)(a1 + 296)) + 32LL))(
                *(_QWORD *)(v12 + *(_QWORD *)(a1 + 296)),
                &v16),
              v16) )
        {
          v10 = 1;
          if ( a4 )
          {
            v13 = (__int64 *)(v12 + *(_QWORD *)(a1 + 296));
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
            v14 = *v13;
            v7 = v17;
            *a4 = v14;
          }
          if ( v9 )
            *v9 = v11;
        }
      }
      ++v11;
      v12 += 16LL;
    }
    while ( v11 < *(_QWORD *)(a1 + 304) );
  }
  return v10 == 0 ? 0x8002802B : 0;
}
