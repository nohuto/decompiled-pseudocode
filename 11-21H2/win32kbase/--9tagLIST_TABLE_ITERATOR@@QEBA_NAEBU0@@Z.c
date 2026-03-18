/*
 * XREFs of ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C0186AAC
 * Callers:
 *     rimIsWakeablePointerFrame @ 0x1C00DC55C (rimIsWakeablePointerFrame.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagLIST_TABLE_ITERATOR::operator!=(__int64 a1, __int64 a2)
{
  return *(_QWORD *)a1 != *(_QWORD *)a2
      || *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8)
      || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16);
}
