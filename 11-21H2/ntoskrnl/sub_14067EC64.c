/*
 * XREFs of sub_14067EC64 @ 0x14067EC64
 * Callers:
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 */

__int64 __fastcall sub_14067EC64(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(v1 + 1664)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 1672) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9)));
  ExReleasePushLockEx(
    *(_QWORD *)(v2 + 1664)
  + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1672) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9))),
    0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4232), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_1406BBAD8((PVOID)v1);
  return result;
}
