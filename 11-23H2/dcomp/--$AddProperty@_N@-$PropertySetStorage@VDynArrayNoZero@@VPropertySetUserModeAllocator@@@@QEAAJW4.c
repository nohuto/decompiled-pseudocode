/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x180092EE8
 * Callers:
 *     ??$AddProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180092CC8 (--$AddProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x180148F30 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
        __int64 a1,
        __int64 a2,
        char *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v9; // r8d
  int v10; // edi
  int v11; // ecx
  char v12; // al
  __int64 v13; // rcx
  unsigned int v15; // edx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v16) = 17;
  v9 = v7 + 1;
  HIDWORD(v16) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v10 = -2147024362;
    v15 = 181;
    v11 = -2147024362;
  }
  else
  {
    if ( v9 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v16;
      *(_DWORD *)(a1 + 24) = v9;
      goto LABEL_6;
    }
    v17 = &v16;
    v10 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v17);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v17;
LABEL_6:
      v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 1, 1, 0LL);
      if ( v10 >= 0 )
      {
        ++*(_DWORD *)(a1 + 56);
        v12 = *a3;
        v13 = *(_QWORD *)(a1 + 32);
        *a4 = v7;
        *(_BYTE *)(v5 + v13) = v12;
        return 0LL;
      }
      DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(
        a1,
        (unsigned int)v7);
      return (unsigned int)v10;
    }
    v15 = 192;
  }
  DoStackCaptureDirect(v11, v15);
  return (unsigned int)v10;
}
