/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z @ 0x1800E73A0
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006A81A (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x1Cu, 1, a2);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC0u);
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 28 * v2;
      *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
      *(_QWORD *)(v8 + v7 + 16) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v8 + v7 + 24) = *(_DWORD *)(a2 + 24);
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
