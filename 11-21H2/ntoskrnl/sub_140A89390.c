/*
 * XREFs of sub_140A89390 @ 0x140A89390
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83778 @ 0x140A83778 (sub_140A83778.c)
 */

__int64 __fastcall sub_140A89390(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r8

  v4 = *(_QWORD *)(a4 + 56);
  sub_140A83778(v4, *(_DWORD *)a3, 1);
  *(_QWORD *)(a4 + 64) = a3;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(v4 + 56), (PLIST_ENTRY)(a4 + 72), (PKSPIN_LOCK)(v4 + 72));
  v9 = *(_QWORD *)(a4 + 96);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 48) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = -559026163LL;
  }
  return sub_14042A5E0(a1, a2);
}
