/*
 * XREFs of ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18058F544
 * Callers:
 *     ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180590010 (-PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1805900B0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180590480 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x18058EF68 (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18058FC0C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18058FC90 (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x180590768 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::DragOver(ElementDragData *this, const struct MultitaskingViewPointerInputArgs *a2)
{
  float ExternalDragProgress; // xmm0_4
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+5Ch] [rbp-14h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]

  *(_OWORD *)((char *)this + 92) = *(_OWORD *)a2;
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 126) < 2 )
  {
    ExternalDragProgress = ElementDragData::GetExternalDragProgress(this);
    DragAndDropArgs::DragAndDropArgs((__int64)&v14, *(_DWORD *)(v5 + 176), *(_QWORD *)(v5 + 24), ExternalDragProgress);
    (*(void (__fastcall **)(_QWORD, __int64 *, const struct MultitaskingViewPointerInputArgs *))(**((_QWORD **)this + 5)
                                                                                               + 456LL))(
      *((_QWORD *)this + 5),
      &v14,
      a2);
    v6 = (__int64 *)*((_QWORD *)this + 6);
    v7 = *v6;
    v13 = v14;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 48))(v6, &v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v16);
  v12 = *(_QWORD *)a2;
  v8 = v18;
  v9 = v12;
  if ( (int)v12 < v18 )
    v8 = v12;
  if ( v16 <= v8 )
  {
    if ( (int)v12 >= v18 )
      v9 = v18;
    LODWORD(v12) = v9;
  }
  else
  {
    LODWORD(v12) = v16;
  }
  v10 = v19;
  v11 = HIDWORD(v12);
  if ( SHIDWORD(v12) < v19 )
    v10 = HIDWORD(v12);
  if ( v17 <= v10 )
  {
    if ( SHIDWORD(v12) >= v19 )
      v11 = v19;
    HIDWORD(v12) = v11;
  }
  else
  {
    HIDWORD(v12) = v17;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    &v12,
    0LL,
    0LL);
  if ( *((_DWORD *)this + 126) == 1 && (*((_BYTE *)this + 176) & 2) != 0 && ElementDragData::IsExternalDrag(this) )
    ElementDragData::StartExternalDrag(this);
}
