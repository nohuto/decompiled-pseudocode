/*
 * XREFs of sub_1405ED40C @ 0x1405ED40C
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED3E0 @ 0x1405ED3E0 (sub_1405ED3E0.c)
 *     sub_1409BCDDC @ 0x1409BCDDC (sub_1409BCDDC.c)
 *     sub_1409BD268 @ 0x1409BD268 (sub_1409BD268.c)
 */

__int64 __fastcall sub_1405ED40C(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int v4; // eax

  result = *(unsigned int *)(a1 + 100);
  if ( !(_DWORD)result )
  {
    v3 = sub_1409BD268(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    v4 = sub_1405ED3E0(a1);
    result = sub_1409BCDDC(*(_QWORD *)(a1 + 112), v4, v3);
    *(_DWORD *)(a1 + 100) = result;
  }
  return result;
}
