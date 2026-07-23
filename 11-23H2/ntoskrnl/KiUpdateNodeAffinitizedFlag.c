/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x1402C0050
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 * Callees:
 *     KiTestNodeAffinity @ 0x1402C008C (KiTestNodeAffinity.c)
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  __int64 result; // rax

  result = KiTestNodeAffinity(*(_QWORD *)(a1 + 576));
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
