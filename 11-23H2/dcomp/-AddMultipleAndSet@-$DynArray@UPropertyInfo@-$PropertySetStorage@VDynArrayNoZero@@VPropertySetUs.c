/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1800734B8
 * Callers:
 *     ??$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBM@Z @ 0x18004C620 (--$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAA.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // r9d
  unsigned int v8; // edx
  int v9; // ecx
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    v8 = 181;
    v9 = -2147024362;
LABEL_9:
    DoStackCaptureDirect(v9, v8);
    return v5;
  }
  v5 = 0;
  if ( v4 <= *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
    return v5;
  }
  v10 = a2;
  v6 = DynArrayImpl<0>::Grow(a1, 8, 1, 0, (__int64)&v10);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = 192;
    v9 = v6;
    goto LABEL_9;
  }
  *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v10;
  return v5;
}
