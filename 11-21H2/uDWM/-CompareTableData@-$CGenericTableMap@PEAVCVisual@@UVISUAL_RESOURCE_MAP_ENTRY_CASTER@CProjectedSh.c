/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180012490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  __int64 result; // rax

  result = 0LL;
  if ( *FirstStruct >= *SecondStruct )
  {
    LOBYTE(result) = *FirstStruct == *SecondStruct;
    return (unsigned int)(result + 1);
  }
  return result;
}
