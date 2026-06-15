/*
 * XREFs of ??1?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x180156390
 * Callers:
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180156A60 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::~CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
