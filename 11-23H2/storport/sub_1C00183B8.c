/*
 * XREFs of sub_1C00183B8 @ 0x1C00183B8
 * Callers:
 *     sub_1C0014FC4 @ 0x1C0014FC4 (sub_1C0014FC4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     sub_1C0018B98 @ 0x1C0018B98 (sub_1C0018B98.c)
 */

__int64 __fastcall sub_1C00183B8(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    sub_1C0018B98(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer((PKTIMER)(v3 + 1112));
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 680) = 0;
  }
  return result;
}
