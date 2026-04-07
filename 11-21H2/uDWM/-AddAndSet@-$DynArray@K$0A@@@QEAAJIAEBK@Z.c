/*
 * XREFs of ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800E1F38
 * Callers:
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800E215C (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800E7580 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800585DC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<unsigned long,0>::AddAndSet(__int64 a1, unsigned int a2, int *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebp
  int *v8; // rdx
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int *v12; // rdi
  unsigned __int64 i; // rcx
  int *v14; // rcx
  __int64 v15; // rdx
  int *v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = DynArrayImpl<0>::AddMultiple(a1, 4u, a2, &v17);
  v6 = 0;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v8 = v17;
      if ( a2 < 4 || v17 <= a3 && &v17[a2 - 1] >= a3 )
        goto LABEL_13;
      v10 = a2 & 0xFFFFFFFC;
      do
      {
        v6 += 4;
        v11 = v6;
      }
      while ( v6 < v10 );
      v12 = v17;
      v9 = *a3;
      for ( i = (16 * ((unsigned __int64)v10 >> 2)) >> 2; i; --i )
        *v12++ = v9;
      v6 = v11;
      if ( v11 < a2 )
      {
LABEL_13:
        v14 = &v8[v6];
        v15 = a2 - v6;
        do
        {
          *v14++ = *a3;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xE5u);
  }
  return v7;
}
