/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18006D708
 * Callers:
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800E3998 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x1800E8020 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 */

__int64 __fastcall DynArray<MilPoint2D,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  if ( (unsigned int)v3 + a3 >= (unsigned int)v3 )
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16, a3, a2);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 16 * v3), a2, 16LL * a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v6;
}
