/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1800EAD40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800EAE5C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800EDDE0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(
        RTL_SRWLOCK *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, WINBOOL *),
        int a3)
{
  RTL_SRWLOCK *v4; // rbx
  int (__fastcall ***v5)(_QWORD, GUID *, WINBOOL *); // rdi
  char *v6; // rdx
  _QWORD *Ptr; // rax
  int v8; // edi
  __int128 v10; // [rsp+20h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-28h] BYREF
  RTL_SRWLOCK *v12; // [rsp+48h] [rbp-18h]
  char v13; // [rsp+50h] [rbp-10h]
  int (__fastcall ***v14)(_QWORD, GUID *, WINBOOL *); // [rsp+90h] [rbp+30h] BYREF
  int (__fastcall ***v15)(_QWORD, GUID *, WINBOOL *); // [rsp+98h] [rbp+38h] BYREF
  int v16; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v17; // [rsp+A8h] [rbp+48h]

  v16 = a3;
  v15 = a2;
  *(_QWORD *)&v10 = &v16;
  *((_QWORD *)&v10 + 1) = &v15;
  v11 = v10;
  v12 = a1 - 17;
  v13 = 1;
  v4 = a1 + 66;
  v17 = a1 + 66;
  AcquireSRWLockExclusive(a1 + 66);
  v5 = v15;
  v14 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v6 = 0LL;
  if ( a1[68].Ptr )
  {
    Ptr = a1[67].Ptr;
    while ( (int (__fastcall ***)(_QWORD, GUID *, WINBOOL *))*Ptr != v5 )
    {
      ++v6;
      ++Ptr;
      if ( v6 >= a1[68].Ptr )
        goto LABEL_5;
    }
    v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
           &a1[67],
           v6);
  }
  else
  {
LABEL_5:
    v8 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  if ( v8 < 0 )
  {
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  else
  {
    CApplicationViewManager::RaiseApplicationViewChanged((__int64)a1, v15, 1u, 0LL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v8 = 0;
  }
  v13 = 0;
  lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(&v11);
  return (unsigned int)v8;
}
