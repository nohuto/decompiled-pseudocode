/*
 * XREFs of sub_1405110E0 @ 0x1405110E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 */

__int64 __fastcall sub_1405110E0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, __int64 a8, __int64 a9)
{
  __int64 result; // rax

  result = sub_140511BD0(a1, a2, a3, a4, a5, a6, a7, a8, 1, a9);
  if ( (_DWORD)result == -1073741670 && *(_DWORD *)(*(_QWORD *)(a1 + 504) + 48LL) == 2 )
    return sub_140511BD0(a1, a2, a3, a4, a5, a6, a7, a8, 0, a9);
  return result;
}
