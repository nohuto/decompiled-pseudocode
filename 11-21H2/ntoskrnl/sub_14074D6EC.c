/*
 * XREFs of sub_14074D6EC @ 0x14074D6EC
 * Callers:
 *     sub_1402D3290 @ 0x1402D3290 (sub_1402D3290.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D3C18 @ 0x1402D3C18 (sub_1402D3C18.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14074D6EC(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  ExDeleteTimer(*(_QWORD *)(v1 + 56), 1, 1, 0LL);
  *(_QWORD *)(v1 + 56) = 0LL;
  if ( *(int *)(v1 + 96) > 0 )
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
  ExFreePoolWithTag((PVOID)v1, 0x54645750u);
  v3 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_14074ED04(0LL, v3);
  if ( *(_BYTE *)(a1 + 32) )
    sub_140950084(a1, 0LL);
  sub_1402D3C18((void *)a1);
}
