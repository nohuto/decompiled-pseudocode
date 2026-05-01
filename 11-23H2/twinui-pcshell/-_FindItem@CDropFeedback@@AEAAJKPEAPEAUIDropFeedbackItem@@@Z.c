/*
 * XREFs of ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x1805EAE94
 * Callers:
 *     ?Freeze@CDropFeedback@@UEAAJK@Z @ 0x1805E97E0 (-Freeze@CDropFeedback@@UEAAJK@Z.c)
 *     ?SetZOrder@CDropFeedback@@UEAAJKPEAK_N@Z @ 0x1805EA940 (-SetZOrder@CDropFeedback@@UEAAJKPEAK_N@Z.c)
 *     ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805EAFA4 (-_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805EB618 (-_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::_FindItem(CDropFeedback *this, int a2, struct IDropFeedbackItem **a3)
{
  __int64 v5; // rcx
  int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, GUID *, struct IDropFeedbackItem **); // rbx
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  struct IDropFeedbackItem *v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 16);
  v7 = -2147467259;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v12);
    v8 = 0;
    do
    {
      if ( v8 >= v12 )
        break;
      v9 = *((_QWORD *)this + 16);
      v13 = 0LL;
      v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IDropFeedbackItem **))(*(_QWORD *)v9 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
      if ( v10(v9, v8, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v13) >= 0
        && (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v13 + 80LL))(v13) == a2 )
      {
        v7 = 0;
        if ( a3 )
        {
          Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v13);
          *a3 = v13;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
      ++v8;
    }
    while ( v7 < 0 );
  }
  return (unsigned int)v7;
}
