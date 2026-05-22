/*
 * XREFs of ?QueryInterface@CVisualReferenceProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualReferenceProxy::QueryInterface(
        DirectComposition::CVisualReferenceProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data4;
  if ( result )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    *a3 = this;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
