/*
 * XREFs of sub_1409CAB50 @ 0x1409CAB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 */

__int64 __fastcall sub_1409CAB50(
        _DWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        volatile void *a15,
        volatile void *a16,
        _BYTE *a17)
{
  void *v18; // [rsp+B0h] [rbp+18h] BYREF

  v18 = a3;
  return sub_140722B40(a1, a2, &v18, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16, a17, 1);
}
