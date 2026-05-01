/*
 * XREFs of ?SetZOrder@CDropFeedbackItem@@UEAAJPEAUIDropFeedbackItem@@_N@Z @ 0x1805390A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedbackItem::SetZOrder(
        CDropFeedbackItem *this,
        __int64 (__fastcall ***a2)(struct IDropFeedbackItem *, GUID *, __int64 *),
        __int64 a3)
{
  __int64 v3; // rdi
  char v4; // r14
  __int64 (__fastcall **v7)(struct IDropFeedbackItem *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v8)(struct IDropFeedbackItem *, GUID *, __int64 *); // rbx
  int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbp
  __int64 *v12; // rsi
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  v16 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v7 = *a2;
  v15 = 0LL;
  v8 = *v7;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
  v9 = v8((struct IDropFeedbackItem *)a2, &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36, &v15);
  if ( v9 >= 0 )
  {
    v10 = v15;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
    v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, v14);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v12);
    v9 = v11(v10, v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
  if ( v9 >= 0 )
  {
    v3 = v16;
LABEL_6:
    LOBYTE(a3) = v4;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 23) + 152LL))(
           *((_QWORD *)this + 23),
           v3,
           a3);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
  return (unsigned int)v9;
}
