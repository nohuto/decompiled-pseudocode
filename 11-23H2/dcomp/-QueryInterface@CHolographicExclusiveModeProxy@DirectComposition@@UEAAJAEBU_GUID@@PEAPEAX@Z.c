/*
 * XREFs of ?QueryInterface@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E7780
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeProxy::QueryInterface(
        DirectComposition::CHolographicExclusiveModeProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_988504e0_2999_4bb0_91ba_add3b265a736.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_988504e0_2999_4bb0_91ba_add3b265a736.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_988504e0_2999_4bb0_91ba_add3b265a736.Data4;
  if ( !v4 )
    goto LABEL_6;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d6d96a10_7526_49c2_81e1_940904bd79c9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d6d96a10_7526_49c2_81e1_940904bd79c9.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d6d96a10_7526_49c2_81e1_940904bd79c9.Data4;
  if ( v5 )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
LABEL_6:
    *a3 = this;
    result = 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
