/*
 * XREFs of ApiSetSchemaExpander_AddSpaceForSemverSearchKey @ 0x140418724
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x140417BDC (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1404191FC (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_AddSpaceForSemverSearchKey(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 63LL) & 1) != 0 )
  {
    result = (unsigned int)(2 * a2);
    *(_DWORD *)(a1 + 204) += result;
  }
  else
  {
    result = (unsigned int)(a2 + 1);
    *(_DWORD *)(a1 + 208) += result;
  }
  return result;
}
