/*
 * XREFs of CmpHashUnicodeComponent @ 0x140708CE0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpGetNameControlBlock @ 0x1406D8EE0 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x1406DCAC0 (CmpCheckLeaf.c)
 *     CmpAddToLeaf @ 0x1407089F4 (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407692E0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddStringToMapping @ 0x1407E3EF0 (CmpAddStringToMapping.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x140825AB8 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x14084DA8C (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpGetMappingHiveForString @ 0x140A19B68 (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20398 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A263A0 (CmpPartialPromoteSubkeys.c)
 *     CmpCreateRegistryRoot @ 0x140B36088 (CmpCreateRegistryRoot.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D310 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // dx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // dx

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v5 = NLS_UPCASE(CurrentServerSiloGlobals[154], v8);
        }
        else
        {
          v5 -= 32;
        }
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
