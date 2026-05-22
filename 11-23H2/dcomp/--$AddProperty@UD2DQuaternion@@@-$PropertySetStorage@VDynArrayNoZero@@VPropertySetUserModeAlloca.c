/*
 * XREFs of ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1801478C0
 * Callers:
 *     ??$AddProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801479F8 (--$AddProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x180148F30 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DQuaternion>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v10; // r8d
  int v11; // edi
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v16) = 71;
  v10 = v7 + 1;
  HIDWORD(v16) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v11 = -2147024362;
    v12 = 181;
    v13 = -2147024362;
LABEL_13:
    DoStackCaptureDirect(v13, v12);
    return (unsigned int)v11;
  }
  if ( v10 > *(_DWORD *)(a1 + 20) )
  {
    v17 = &v16;
    v11 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v17);
    v13 = v11;
    if ( v11 < 0 )
    {
      v12 = 192;
      goto LABEL_13;
    }
    *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v17;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v16;
    *(_DWORD *)(a1 + 24) = v10;
  }
  v11 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 16, 1, 0LL);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(a1 + 56) += 16;
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *a3;
    *a4 = v7;
    *(_OWORD *)(v5 + v14) = v15;
    return 0LL;
  }
  DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(
    a1,
    (unsigned int)v7);
  return (unsigned int)v11;
}
