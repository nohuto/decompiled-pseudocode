/*
 * XREFs of ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x180269D84
 * Callers:
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x180269878 (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x18026B004 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CCursorState::FindMonitorData(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 i; // r10

  v4 = *(_QWORD *)(a1 + 80);
  for ( i = *(_QWORD *)(a1 + 88); v4 != i; v4 += 144LL )
  {
    if ( *(_DWORD *)v4 == (_DWORD)a3 && *(_QWORD *)(v4 + 4) == __PAIR64__(a4, HIDWORD(a3)) )
      break;
  }
  *a2 = v4;
  return a2;
}
