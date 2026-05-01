/*
 * XREFs of ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B9530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804B16F4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804B91D8 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804BB50C (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804BB6B0 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::DragOver(__int64 *a1, __int64 a2, __int128 *a3)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(__int64 *, __int64 *); // r8
  char v8; // al
  int v9; // ecx
  __int64 *v10; // rax
  struct IMultitaskingViewElement *v11; // r8
  struct IUnknown *v12; // rcx
  struct IMultitaskingViewElement *v13; // r14
  unsigned int v14; // eax
  bool v15; // zf
  __int64 (__fastcall *v16)(struct IMultitaskingViewElement *, __int64, __int64); // rbx
  __int64 v17; // rax
  _BYTE v19[32]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h]
  int v22; // [rsp+60h] [rbp-11h]
  struct IMultitaskingViewElement *v23[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+77h] BYREF

  v20 = 0LL;
  v6 = 0;
  v21 = 0LL;
  v22 = 0;
  *(_OWORD *)v23 = 0LL;
  v24 = *a3;
  v25 = *((_DWORD *)a3 + 4);
  v7 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*a1 + 112);
  v26 = *(_QWORD *)a3;
  v8 = v7(a1, &v26);
  v9 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( v8 )
    v9 = 2;
  LODWORD(v20) = v9;
  Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)v23, a1 + 16);
  v26 = *(_QWORD *)a3;
  v10 = (__int64 *)CMultitaskingViewElementBase::_HitTestChildren(a1, &v27, &v26);
  Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)&v23[1], v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  v12 = (struct IUnknown *)a1[17];
  v13 = v23[1];
  if ( v12 && !ElementHelpers::IsSameElement(v12, (struct IUnknown *)v23[1], v11) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[17] + 464LL))(a1[17]);
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(*a1 + 616))(a1, a2, a3);
  if ( v13 )
  {
    v15 = v14 == -1;
    if ( v14 != -1 )
      goto LABEL_10;
    v16 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64, __int64))(*(_QWORD *)v13 + 456LL);
    v17 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v19, a3);
    v14 = v16(v13, a2, v17);
  }
  v15 = v14 == -1;
LABEL_10:
  if ( !v15 )
    v6 = v14;
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)(a1 + 12), (__int64)&v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23[1]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v23);
  return v6;
}
