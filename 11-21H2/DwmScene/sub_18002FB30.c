/*
 * XREFs of sub_18002FB30 @ 0x18002FB30
 * Callers:
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 *     sub_18007FDAC @ 0x18007FDAC (sub_18007FDAC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 */

__int64 __fastcall sub_18002FB30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
  {
    sub_18002CC9C((char **)v6, *(char ***)(a1 + 8));
    sub_180010884(*(char **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 152 * a3;
  result = a2 + 152 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
