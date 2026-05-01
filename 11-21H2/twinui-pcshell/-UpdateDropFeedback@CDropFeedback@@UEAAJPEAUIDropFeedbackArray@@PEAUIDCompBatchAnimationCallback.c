/*
 * XREFs of ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18052FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180530274 (-_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x1805304BC (-_UpdateAutoGutters@CDropFeedback@@AEAAXXZ.c)
 *     ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805308D8 (-_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 */

__int64 __fastcall CDropFeedback::UpdateDropFeedback(
        CDropFeedback *this,
        struct IDropFeedbackArray *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  unsigned int v3; // edi
  unsigned int i; // r14d
  __int64 v8; // rax
  int (__fastcall *v9)(struct IDropFeedbackArray *, _QWORD, GUID *, struct IDropFeedbackItem **); // rbx
  int v10; // eax
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF
  struct IDropFeedbackItem *v14; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 15) )
  {
    v14 = (struct IDropFeedbackItem *)*((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(
      v12,
      (__int64 *)&v14,
      (__int64)&unk_1806EBB98,
      (__int64)a3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    (*(void (__fastcall **)(struct IDropFeedbackArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
    for ( i = 0; i < v13; ++i )
    {
      v8 = *(_QWORD *)a2;
      v14 = 0LL;
      v9 = *(int (__fastcall **)(struct IDropFeedbackArray *, _QWORD, GUID *, struct IDropFeedbackItem **))(v8 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
      if ( v9(a2, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v14) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v14 + 88LL))(v14);
        if ( v10 )
        {
          if ( v10 == 1 )
            CDropFeedback::_UpdateItem((CDropFeedback *)((char *)this - 24), v14, a3);
        }
        else
        {
          CDropFeedback::_RegisterItem((CDropFeedback *)((char *)this - 24), v14, a3);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
    }
    CDropFeedback::_UpdateAutoGutters((CDropFeedback *)((char *)this - 24));
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v12);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
