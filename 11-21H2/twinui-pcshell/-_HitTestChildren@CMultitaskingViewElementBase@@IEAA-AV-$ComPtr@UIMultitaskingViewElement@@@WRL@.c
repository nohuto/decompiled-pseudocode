/*
 * XREFs of ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804BB50C
 * Callers:
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B9530 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?GetElementFromPoint@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804B9C00 (-GetElementFromPoint@CMultitaskingViewElementBase@@UEAA-AV-$ComPtr@UIMultitaskingViewElement@@@W.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BB728 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804BE990 (-HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804C69D0 (-HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804D4E60 (-HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804D9F30 (-HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CMultitaskingViewElementBase::_HitTestChildren(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+10h]
  char v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  *a2 = 0LL;
  if ( a1[3] )
  {
    v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 120LL))(a1, &v13);
    v11 = *a3;
    v7 = v6[1];
    LODWORD(v11) = *v6 + v11;
    HIDWORD(v11) += v7;
    v8 = (__int64 *)a1[2];
    v9 = &v8[a1[3]];
    while ( v8 != v9 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 152LL))(*v8)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v8 + 112LL))(*v8, &v11) )
      {
        Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(a2, v8);
        return a2;
      }
      ++v8;
    }
  }
  return a2;
}
