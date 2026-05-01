/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180689580
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800DF808 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18068928C (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewFilteredCollection::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  __int64 v4; // rdi
  char v8; // r14
  RTL_SRWLOCK *v9; // rbx
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  unsigned int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a4;
  v8 = 0;
  v9 = a1 + 21;
  AcquireSRWLockExclusive(a1 + 21);
  v10 = 0;
  if ( a1[9].Ptr )
  {
    v11 = 0LL;
    while ( !(unsigned int)SHIsSameObject(*((struct IUnknown **)a1[8].Ptr + v11), a2) )
    {
      v11 = ++v10;
      if ( (PVOID)v10 >= a1[9].Ptr )
        goto LABEL_5;
    }
    v8 = 1;
    if ( a3 != 1
      || (v15 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
                  &a1[8].Ptr,
                  v11),
          v16 = v15,
          v15 >= 0) )
    {
LABEL_5:
      v4 = a4;
      goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
      (const char *)(unsigned int)v15);
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    return v16;
  }
  else
  {
LABEL_6:
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    if ( v8 )
    {
      v12 = ApplicationViewFilteredCollection::FireApplicationViewChangeNotification(
              (__int64)&a1[-2],
              (__int64)a2,
              a3,
              v4);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
          (const char *)(unsigned int)v12);
      return v13;
    }
    else
    {
      return 0LL;
    }
  }
}
