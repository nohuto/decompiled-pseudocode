/*
 * XREFs of ?HrFindInterface@CInteractionConfiguration@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionConfiguration::HrFindInterface(
        DirectComposition::CInteractionConfiguration *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d9d36068_1113_43d3_be25_36e69bbb4c00.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d9d36068_1113_43d3_be25_36e69bbb4c00.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d9d36068_1113_43d3_be25_36e69bbb4c00.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2960abbb_1aca_4216_90f1_9065cbe982ef.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2960abbb_1aca_4216_90f1_9065cbe982ef.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2960abbb_1aca_4216_90f1_9065cbe982ef.Data4;
    if ( v5 )
      return (unsigned int)-2147467262;
    else
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  }
  else
  {
    *a3 = this;
  }
  return v3;
}
