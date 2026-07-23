/*
 * XREFs of sub_14064FBF4 @ 0x14064FBF4
 * Callers:
 *     sub_14064FB60 @ 0x14064FB60 (sub_14064FB60.c)
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     sub_140651394 @ 0x140651394 (sub_140651394.c)
 */

__int64 __fastcall sub_14064FBF4(_QWORD *a1, __int64 a2, void *a3)
{
  ULONG v4; // esi
  int v6; // ebx

  v4 = *(_DWORD *)(a2 + 80) * *(_DWORD *)(a2 + 84);
  v6 = sub_140651394(
         *a1,
         (-*(_DWORD *)(*a1 + 236LL) & (v4 + *(_DWORD *)(*a1 + 236LL) - 1)) >> *(_DWORD *)(*a1 + 240LL),
         *(_QWORD *)(a2 + 72),
         a3);
  if ( v6 >= 0 && RtlComputeCrc32(0, a3, v4) != *(_DWORD *)(a2 + 88) )
    return (unsigned int)-1073741774;
  return (unsigned int)v6;
}
