/*
 * XREFs of ??$EnsureValuePresentInDynArray@PEAUIDCompositionColorPartner@@@CPrimitiveGroup@DirectComposition@@AEAAJAEAV?$DynArray@PEAUIDCompositionColorPartner@@$0A@@@AEBQEAUIDCompositionColorPartner@@PEAI@Z @ 0x1800F9800
 * Callers:
 *     ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z @ 0x180032F84 (-BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::EnsureValuePresentInDynArray<IDCompositionColorPartner *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r11
  unsigned int i; // esi
  unsigned int v10; // edx
  unsigned int v11; // edi
  int v12; // eax

  v4 = *(unsigned int *)(a2 + 24);
  v5 = 0;
  v6 = *(_QWORD *)a2;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    if ( *a3 == *(_QWORD *)(v6 + 8LL * i) )
      break;
  }
  if ( i != (_DWORD)v4 )
  {
LABEL_11:
    *a4 = i;
    return v5;
  }
  v10 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
  {
    v11 = 0;
    if ( v10 > *(_DWORD *)(a2 + 20) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, (__int64)a3, a3);
      v11 = v12;
      if ( v12 < 0 )
      {
        DoStackCaptureDirect(v12, 0xC0u);
        return v11;
      }
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = *a3;
      *(_DWORD *)(a2 + 24) = v10;
    }
    v5 = v11;
    goto LABEL_11;
  }
  v5 = -2147024362;
  DoStackCaptureDirect(-2147024362, 0xB5u);
  return v5;
}
