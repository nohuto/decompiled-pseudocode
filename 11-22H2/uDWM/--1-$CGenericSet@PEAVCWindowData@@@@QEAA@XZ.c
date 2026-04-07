/*
 * XREFs of ??1?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x1800B3ACC
 * Callers:
 *     _CWindowList::_CWindowList_::_1_::dtor$3 @ 0x180108D1C (_CWindowList--_CWindowList_--_1_--dtor$3.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$5 @ 0x180108D42 (_CWindowList--_CWindowList_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericSet<CWindowData *>::~CGenericSet<CWindowData *>(PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID result; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  for ( i = Table; ; Table = i )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(Table, &RestartKey);
    if ( !result )
      break;
    RtlDeleteElementGenericTable(i, result);
  }
  return result;
}
