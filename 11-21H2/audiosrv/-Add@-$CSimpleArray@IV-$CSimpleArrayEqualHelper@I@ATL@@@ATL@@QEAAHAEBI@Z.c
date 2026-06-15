/*
 * XREFs of ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x18014EE54
 * Callers:
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18014EFE0 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  _DWORD *v7; // r8
  int v8; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v5 = 2 * v2;
      if ( (v2 & 0x40000000) != 0 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( v5 <= 0x1FFFFFFFuLL )
    {
      v6 = _o__recalloc(*(_QWORD *)a1, v5, 4LL);
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v2 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v5;
        goto LABEL_8;
      }
    }
    return 0LL;
  }
LABEL_8:
  v7 = (_DWORD *)(*(_QWORD *)a1 + 4LL * v2);
  if ( v7 )
  {
    *v7 = *a2;
    v2 = *(_DWORD *)(a1 + 8);
  }
  v8 = v2 + 1;
  result = 1LL;
  *(_DWORD *)(a1 + 8) = v8;
  return result;
}
