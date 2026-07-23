/*
 * XREFs of MiCleanupPageTablePages @ 0x140212030
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x14081DE80 (MmCreateShadowMapping.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140340C88 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 96), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 96), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 96), v4, *(unsigned int *)(a1 + 120));
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
