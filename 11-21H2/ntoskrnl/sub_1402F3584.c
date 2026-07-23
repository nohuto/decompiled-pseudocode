/*
 * XREFs of sub_1402F3584 @ 0x1402F3584
 * Callers:
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 * Callees:
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 */

__int64 __fastcall sub_1402F3584(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
  *a2 = 0LL;
  v3 = (_QWORD *)(a1 + 48);
  _InterlockedOr(v5, 0);
  if ( *v3 )
    sub_140369634(v3, 0LL, 0LL);
  return v2;
}
