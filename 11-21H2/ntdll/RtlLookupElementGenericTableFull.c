/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x18006A470
 * Callers:
 *     RtlLookupElementGenericTable @ 0x18006A440 (RtlLookupElementGenericTable.c)
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006A4C4 (FindNodeOrParent_0.c)
 *     RtlSplay @ 0x18006A570 (RtlSplay.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int NodeOrParent_0; // eax

  NodeOrParent_0 = FindNodeOrParent_0(a1, a2, a3);
  *a4 = NodeOrParent_0;
  if ( NodeOrParent_0 != 1 )
    return 0LL;
  *a1 = RtlSplay(*a3);
  return *a3 + 40LL;
}
