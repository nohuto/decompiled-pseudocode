/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180168F88
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180168F70 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CC2C0 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v6; // rbx
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdx
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 664);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 664));
  if ( a3 )
  {
    if ( a3 == 1 && a2 == *(_QWORD *)(a1 + 704) )
      goto LABEL_12;
  }
  else if ( a2 == *(_QWORD *)(a1 + 704) && (*(_BYTE *)(a1 + 712) & 1) == 0 )
  {
    goto LABEL_12;
  }
  v7 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 704);
  if ( v7 && v7 != (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v7, 9u, a2);
  v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 704);
  if ( v8 != (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2 )
  {
    v10 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v10 = *(_QWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 704) = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 704);
  }
  if ( a3 == 1 )
    *(_DWORD *)(a1 + 712) |= 1u;
  else
    *(_DWORD *)(a1 + 712) &= ~1u;
  if ( v8 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v8, 8 - (a3 != 1), 0LL);
LABEL_12:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return 0LL;
}
