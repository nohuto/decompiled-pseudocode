/*
 * XREFs of ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ @ 0x18003D0F4
 * Callers:
 *     ?ClearAllParameters@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJXZ @ 0x18003D0A0 (-ClearAllParameters@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?Destroy@CompositionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18014F220 (-Destroy@CompositionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C (-EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::ClearAllParameters(
        struct Microsoft::WRL2::ContextSession **this)
{
  struct _RTL_GENERIC_TABLE *v1; // rbp
  ULONG v3; // esi
  struct Microsoft::WRL2::ContextSession *v4; // rdx
  ParameterEntry *ElementGenericTable; // rax
  ParameterEntry *v7; // r14
  HSTRING v8; // rbx

  v1 = (struct _RTL_GENERIC_TABLE *)(this + 24);
  v3 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)(this + 24));
  while ( (--v3 & 0x80000000) == 0 )
  {
    ElementGenericTable = (ParameterEntry *)RtlGetElementGenericTable(v1, v3);
    v7 = ElementGenericTable;
    if ( ElementGenericTable )
    {
      v8 = *(HSTRING *)ElementGenericTable;
      ParameterEntry::EnsureReferenceCleared(ElementGenericTable, this[3]);
      CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement(v1, v7);
      WindowsDeleteString(v8);
    }
  }
  v4 = this[3];
  *((_DWORD *)this + 76) = 0;
  Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
    (Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache *)(this + 39),
    v4);
  return 0LL;
}
