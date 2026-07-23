/*
 * XREFs of PsSetJobProperty @ 0x1405E0580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403882F0 @ 0x1403882F0 (sub_1403882F0.c)
 *     sub_1403883BC @ 0x1403883BC (sub_1403883BC.c)
 */

__int64 __fastcall PsSetJobProperty(__int64 a1, __int64 a2, void *a3)
{
  KSPIN_LOCK *v4; // rcx

  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 3221225485LL;
  }
  v4 = (KSPIN_LOCK *)(a1 + 1472);
  if ( a3 )
    return sub_1403883BC(v4, a2, a3);
  else
    return sub_1403882F0(v4, a2, 0LL);
}
