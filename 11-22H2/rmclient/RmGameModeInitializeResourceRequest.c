/*
 * XREFs of RmGameModeInitializeResourceRequest @ 0x180019DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmGameModeInitializeResourceRequest(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)a1 = 6;
  *(_DWORD *)(a1 + 16) = 10;
  *(_DWORD *)(a1 + 20) = 50;
  *(_DWORD *)(a1 + 24) = 30;
  return result;
}
