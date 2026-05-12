/*
 * XREFs of sub_1C00103E0 @ 0x1C00103E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1C00103E0(__int64 a1)
{
  return (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 24)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 24)) | ((unsigned __int8)*(_DWORD *)(a1 + 24) << 8)) << 8);
}
