/*
 * XREFs of sub_140212034 @ 0x140212034
 * Callers:
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     PsGetProcessSilo @ 0x1405E0470 (PsGetProcessSilo.c)
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140212034(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1512) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1264);
  return a1;
}
