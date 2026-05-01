/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180134260
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180058634 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180089AB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180103B30 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180104DE8 (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        IMalloc *a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  char *v10; // rbp
  unsigned __int64 v11; // r15
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+18h] BYREF

  ppMalloc = a3;
  v4 = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v4 = 0;
    if ( a2 > v5 )
    {
      v6 = 2 * v5;
      if ( !is_mul_ok(v5, 2uLL) )
        return (unsigned int)-2147024362;
      v7 = v5;
      v8 = v5 + 4096;
      if ( v7 <= 0x1000 )
        v8 = v6;
      if ( a2 <= v8 )
      {
        if ( v8 > 0xFFFFFFFE )
          v8 = 4294967294LL;
      }
      else
      {
        v8 = a2;
      }
      v9 = 8 * v8;
      if ( is_mul_ok(v8, 8uLL) )
      {
        v10 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v8);
        if ( v10 )
        {
          if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
          {
            v11 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v10);
            ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
            if ( v11 > v9 )
              memset_0(&v10[v9], 0, v11 - v9);
          }
          *(_QWORD *)(a1 + 24) = v8;
          *(_QWORD *)a1 = v10;
        }
        else
        {
          return (unsigned int)-2147024882;
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return v4;
}
