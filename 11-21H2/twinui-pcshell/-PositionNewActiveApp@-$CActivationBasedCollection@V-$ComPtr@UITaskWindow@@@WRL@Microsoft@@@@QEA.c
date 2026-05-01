/*
 * XREFs of ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x1802F25C4
 * Callers:
 *     ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802F21E0 (-HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180059118 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18009D070 (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewActiveApp(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  unsigned int v3; // ebx
  __int64 **v5; // rdi
  void *v6; // r8
  int RoomAt; // esi
  __int64 *v8; // rcx

  v3 = 0;
  if ( a3 )
  {
    v5 = (__int64 **)(a1 + 8);
    CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::RemoveAt(
      (_QWORD *)(a1 + 8),
      a3);
    RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
               v5,
               0LL,
               v6);
    if ( RoomAt >= 0 )
    {
      v8 = *v5;
      if ( *v5 )
      {
        *v8 = *a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      }
    }
    return (unsigned int)RoomAt;
  }
  return v3;
}
