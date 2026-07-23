/*
 * XREFs of sub_140584C78 @ 0x140584C78
 * Callers:
 *     sub_140584374 @ 0x140584374 (sub_140584374.c)
 *     sub_14058503C @ 0x14058503C (sub_14058503C.c)
 * Callees:
 *     sub_1402210C0 @ 0x1402210C0 (sub_1402210C0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140584C78(ULONG_PTR BugCheckParameter3, int a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter3 + 24);
  v4 = *(_QWORD *)(BugCheckParameter3 + 40);
  v6 = (((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v2 + 40) + 4095) >> 12;
  if ( v4 != v6 )
    KeBugCheckEx(0x76u, 5uLL, *(_QWORD *)(BugCheckParameter3 + 24), BugCheckParameter3, v6 | (v4 << 32));
  v7 = *(_QWORD *)(BugCheckParameter3 + 64);
  result = *(_QWORD *)(v2 + 48);
  if ( v7 != result )
    KeBugCheckEx(0x76u, 6uLL, v2, BugCheckParameter3, result | (v7 << 32));
  if ( a2 )
  {
    v9 = 0LL;
    sub_1402210C0((_QWORD *)(v2 + 48), 8 * v6, &v9, 0LL);
    result = v9;
    if ( *(_DWORD *)(BugCheckParameter3 + 60) != (_DWORD)v9 )
      KeBugCheckEx(0x76u, 7uLL, v2, BugCheckParameter3, (unsigned int)v9 | (unsigned __int64)(v7 << 32));
  }
  return result;
}
