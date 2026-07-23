/*
 * XREFs of MiReturnExcessPoolCommit @ 0x140286828
 * Callers:
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x14034078C (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x1403409F8 (MiReturnPoolCharges.c)
 *     MiFreeLargePageChain @ 0x14064F66C (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  result = *(unsigned __int16 *)(a1 + 78);
  if ( (result & 2) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    v3 = *(_QWORD *)(a1 + 8);
    if ( result != v3 )
      return MiReturnCommit(
               *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL)),
               v3 - result);
  }
  else if ( (result & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
      MiFreeLargePageChain();
    v4 = *(_QWORD *)(a1 + 24);
    result = *(_QWORD *)(a1 + 8);
    if ( v4 != result )
    {
      v6[0] = (unsigned __int64)(result - v4);
      v6[2] = v6[0];
      v6[1] = 0LL;
      v7 = 0LL;
      return MiReturnPoolCharges(v6, 0LL, 0LL);
    }
  }
  else if ( (result & 0x100) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
      return MiReturnPhysicalPoolPages(v5, 0LL);
  }
  return result;
}
