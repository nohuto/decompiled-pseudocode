/*
 * XREFs of sub_1403962D0 @ 0x1403962D0
 * Callers:
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     sub_1405F6968 @ 0x1405F6968 (sub_1405F6968.c)
 *     sub_1405F6A08 @ 0x1405F6A08 (sub_1405F6A08.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403962D0(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v4 = *a1;
  if ( a3 && (v5 = *(_QWORD **)(v4 + 72), --*(_DWORD *)(v4 + 40), *v5 < (unsigned __int64)*(unsigned int *)(v4 + 4)) )
  {
    *a2 = *v5 + 1LL;
    **(_QWORD **)(v4 + 72) = a2;
    *(_QWORD *)(v4 + 72) = a2;
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
