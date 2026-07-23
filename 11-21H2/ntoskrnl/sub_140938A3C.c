/*
 * XREFs of sub_140938A3C @ 0x140938A3C
 * Callers:
 *     sub_1409380B4 @ 0x1409380B4 (sub_1409380B4.c)
 *     sub_140938198 @ 0x140938198 (sub_140938198.c)
 * Callees:
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 */

NTSTATUS __fastcall sub_140938A3C(__int64 a1, __int64 a2, ACCESS_MASK a3, KPROCESSOR_MODE a4, PVOID *a5)
{
  void *v6; // rcx

  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a1 + 192) )
      return -1073740591;
    v6 = *(void **)(*(_QWORD *)(a1 + 200) + 8LL * *(unsigned int *)(a2 + 8));
  }
  else
  {
    v6 = *(void **)(a2 + 8);
  }
  return sub_1402AC790(v6, a3, a4, a5, 0LL);
}
