/*
 * XREFs of sub_140367B44 @ 0x140367B44
 * Callers:
 *     sub_140367A64 @ 0x140367A64 (sub_140367A64.c)
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 * Callees:
 *     sub_140365EB4 @ 0x140365EB4 (sub_140365EB4.c)
 *     sub_140367C0C @ 0x140367C0C (sub_140367C0C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_BYTE *__fastcall sub_140367B44(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  unsigned int v6; // edi
  ULONG_PTR v9; // rbx
  _BYTE *result; // rax

  v6 = 0;
  v9 = 0LL;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v9 = BugCheckParameter2 - 16;
    if ( (*(_BYTE *)(BugCheckParameter2 - 16 + 3) & 4) != 0 )
      v9 += -16LL * (unsigned __int8)*(_WORD *)v9;
    *a5 = 16LL * (unsigned __int8)*(_WORD *)(v9 + 2);
    *a6 = *(_DWORD *)(v9 + 4);
    result = (_BYTE *)sub_140367C0C(v9, a3);
  }
  else
  {
    result = (_BYTE *)sub_140365EB4(BugCheckParameter2, a2, a3, a5, a6);
  }
  if ( !a4
    && (unsigned __int64)(result - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && ((unsigned __int64)result < 0xFFFF800000000000uLL || (*result & 0x7F) != 3) )
  {
    if ( v9 )
      v6 = *(_DWORD *)(v9 + 4);
    KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v6, (ULONG_PTR)result);
  }
  return result;
}
