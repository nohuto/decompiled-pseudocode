/*
 * XREFs of ?HrFindInterface@CFlipExSwapchainStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025D880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExSwapchainStatistics::HrFindInterface(
        unsigned __int64 this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  bool v4; // dl
  __int64 result; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data4;
  v4 = v3 == 0;
  result = v3 != 0 ? 0x80004002 : 0;
  *a3 = (void *)(this & -(__int64)v4);
  return result;
}
