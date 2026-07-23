/*
 * XREFs of sub_140558D40 @ 0x140558D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     sub_140559124 @ 0x140559124 (sub_140559124.c)
 */

char __fastcall sub_140558D40(__int64 a1, volatile signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                             + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)] == IoFileObjectType
    && *(_QWORD *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x38) == *a4 )
  {
    sub_140559124(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 48, a4[1]);
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v7, 0);
  if ( *(_QWORD *)(a1 + 48) )
    sub_140369634((volatile __int64 *)(a1 + 48), 0LL, 0);
  return 0;
}
