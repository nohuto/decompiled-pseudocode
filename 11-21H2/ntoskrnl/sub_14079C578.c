/*
 * XREFs of sub_14079C578 @ 0x14079C578
 * Callers:
 *     sub_14079C440 @ 0x14079C440 (sub_14079C440.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14079C578(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // r10
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // rsi
  ULONG v12; // edi
  __int64 v13; // rbx
  __int64 result; // rax
  _WORD v15[12]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v15[0] = 0;
  sub_140AB4534(v15);
  v6 = sub_140AB44C0(BugCheckParameter2, v5);
  if ( !v6 )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x2B9uLL);
  v9 = sub_140AB451C(v7, v6, v15);
  v11 = 632 * v10;
  v12 = *(_DWORD *)(v9 + 4) >> 12;
  v13 = 632 * v10 + 24 * v3;
  RtlSetBits((PRTL_BITMAP)(v13 + BugCheckParameter2 + 320), v12, *(_DWORD *)(v9 + 8) >> 12);
  *(_DWORD *)(v13 + BugCheckParameter2 + 316) = v12;
  result = (unsigned int)(1 << v3);
  *(_DWORD *)(v11 + BugCheckParameter2 + 904) |= result;
  return result;
}
