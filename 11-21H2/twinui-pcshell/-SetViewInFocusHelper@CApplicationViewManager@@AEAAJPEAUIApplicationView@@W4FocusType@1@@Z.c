/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x1800790A8
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180079090 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1803109A0 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 664);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 664));
  if ( a3 )
  {
    if ( a3 == 1 && a2 == *(_QWORD *)(a1 + 704) )
      goto LABEL_13;
  }
  else if ( a2 == *(_QWORD *)(a1 + 704) && (*(_BYTE *)(a1 + 712) & 1) == 0 )
  {
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(a1 + 704);
  if ( v7 && v7 != a2 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v7, 9LL, a2);
  v8 = *(_QWORD *)(a1 + 704);
  if ( v8 != a2 )
  {
    v10 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v10 = *(_QWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 704) = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    v8 = *(_QWORD *)(a1 + 704);
  }
  if ( a3 == 1 )
    *(_DWORD *)(a1 + 712) |= 1u;
  else
    *(_DWORD *)(a1 + 712) &= ~1u;
  if ( v8 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v8, 8 - (unsigned int)(a3 != 1), 0LL);
LABEL_13:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return 0LL;
}
