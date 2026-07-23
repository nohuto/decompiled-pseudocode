/*
 * XREFs of sub_1403B6570 @ 0x1403B6570
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1403B5F40 @ 0x1403B5F40 (sub_1403B5F40.c)
 *     sub_1405CC080 @ 0x1405CC080 (sub_1405CC080.c)
 * Callees:
 *     sub_140354990 @ 0x140354990 (sub_140354990.c)
 *     sub_140354FB4 @ 0x140354FB4 (sub_140354FB4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403B6570(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v4; // rdx

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    sub_140354FB4(*(_QWORD *)(BugCheckParameter2 + 48), 0, 1u);
    if ( *(_QWORD *)(BugCheckParameter2 + 136) )
      sub_14042A5E0(*(_QWORD *)(BugCheckParameter2 + 192), v4);
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return sub_140354990(BugCheckParameter2, a2);
}
