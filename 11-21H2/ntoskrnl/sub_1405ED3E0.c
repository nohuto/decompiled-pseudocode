/*
 * XREFs of sub_1405ED3E0 @ 0x1405ED3E0
 * Callers:
 *     sub_1405ED40C @ 0x1405ED40C (sub_1405ED40C.c)
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1409BD054 @ 0x1409BD054 (sub_1409BD054.c)
 */

__int64 __fastcall sub_1405ED3E0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)result )
  {
    result = sub_1409BD054(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
