/*
 * XREFs of ArbBootAllocation @ 0x140839BE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     sub_140839D70 @ 0x140839D70 (sub_140839D70.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBootAllocation(__int64 a1, _QWORD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  int v7; // esi
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD v10[10]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v11[8]; // [rsp+70h] [rbp-9h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 48);
  v10[7] = v11;
  v10[5] = v11;
  LOWORD(v10[8]) = 2;
  LODWORD(v10[6]) = 1;
  BYTE2(v10[8]) = 1;
  RtlCopyRangeList(v5, v4);
  v6 = (_QWORD *)**a2;
  if ( *a2 == v6 )
  {
LABEL_11:
    RtlFreeRangeList(*(_QWORD *)(a1 + 40));
    v8 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
    result = 0LL;
    *(_QWORD *)(a1 + 48) = v8;
    return result;
  }
  while ( 1 )
  {
    v10[4] = v6;
    sub_140839D70(a1, v6[3], v11);
    v10[9] = 0LL;
    v10[0] = v11[0];
    v10[1] = v11[1];
    BYTE3(v10[8]) = 0;
    if ( !v11[2] || !v11[3] || v11[1] < v11[0] || v11[0] % v11[3] || v11[1] - v11[0] + 1LL != v11[2] )
      goto LABEL_10;
    v7 = sub_14042A5E0(a1, v10);
    if ( v7 < 0 )
      break;
    sub_14042A5E0(a1, v10);
    sub_14042A5E0(*(_QWORD *)(v10[5] + 40LL), v10[0]);
    if ( (v10[8] & 0x10) != 0 )
    {
      ExFreePoolWithTag((PVOID)v10[9], 0);
      LOWORD(v10[8]) &= ~0x10u;
    }
LABEL_10:
    v6 = (_QWORD *)*v6;
    if ( *a2 == v6 )
      goto LABEL_11;
  }
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return (unsigned int)v7;
}
