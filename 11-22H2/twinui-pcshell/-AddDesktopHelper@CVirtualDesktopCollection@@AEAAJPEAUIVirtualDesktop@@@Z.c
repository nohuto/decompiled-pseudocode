/*
 * XREFs of ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013EBD0
 * Callers:
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013CBA4 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?AddRemoteDesktop@CVirtualDesktopCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805FBBC0 (-AddRemoteDesktop@CVirtualDesktopCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1800DF144 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ @ 0x18013F508 (-RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$?0UIVirtualDesktop@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x180543F14 (--$-0UIVirtualDesktop@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x1805FBB4C (-Add@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddDesktopHelper(
        CVirtualDesktopCollection *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **))
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+18h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  if ( (int)CVirtualDesktopCollection::IsRemote(this, a2, &v8) >= 0 && v8 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktop>::ComPtr<IVirtualDesktop>(&v9, a2);
    v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::Add(
           (char *)this + 80,
           &v9);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v9);
    if ( v4 < 0 )
    {
      v5 = 341LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktop>::ComPtr<IVirtualDesktop>(&v9, a2);
    v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::Add(
           (char *)this + 48,
           &v9);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v9);
    if ( v4 < 0 )
    {
      v5 = 346LL;
      goto LABEL_5;
    }
  }
  CVirtualDesktopCollection::RecalculateCopyOfAllDesktops(this);
  return 0LL;
}
