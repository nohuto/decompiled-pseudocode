/*
 * XREFs of ?Add@?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GUID@@@Z @ 0x180156904
 * Callers:
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180156A10 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::Add(__int64 a1, _QWORD *a2)
{
  int v2; // edi
  unsigned int v5; // edi
  bool v6; // sf
  __int64 v7; // rax
  _QWORD *v8; // r8

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v6 = (v2 & 0x40000000) != 0;
      v5 = 2 * v2;
      if ( v6 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( v5 <= 0xFFFFFFFuLL )
    {
      v7 = _o__recalloc(*(_QWORD *)a1, v5, 8LL);
      if ( v7 )
      {
        *(_DWORD *)(a1 + 12) = v5;
        *(_QWORD *)a1 = v7;
        goto LABEL_8;
      }
    }
    return 0LL;
  }
LABEL_8:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(int *)(a1 + 8));
  if ( v8 )
    *v8 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
