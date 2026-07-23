/*
 * XREFs of sub_14079C440 @ 0x14079C440
 * Callers:
 *     sub_14068C700 @ 0x14068C700 (sub_14068C700.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14079C578 @ 0x14079C578 (sub_14079C578.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

ULONG_PTR __fastcall sub_14079C440(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // r12d
  unsigned int v10; // ebp
  ULONG_PTR result; // rax
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v4 = a4;
  v5 = (unsigned int)a2;
  v7 = (a2 & 0xFFFFF000) - *(_DWORD *)sub_140AB44C0(BugCheckParameter2, a2);
  v9 = *(_DWORD *)(sub_140AB44C0(BugCheckParameter2, v7) + 16);
  v10 = v9 + v7;
  if ( !v7 )
    return sub_14079C578(BugCheckParameter2);
  if ( v5 != v7 + 32LL )
    return sub_14079C578(BugCheckParameter2);
  if ( (_DWORD)v5 + v8 != v10 )
    return sub_14079C578(BugCheckParameter2);
  v12 = sub_14042A5E0(24LL, 0LL);
  v13 = (_QWORD *)v12;
  if ( !v12 )
    return sub_14079C578(BugCheckParameter2);
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_DWORD *)(v12 + 16) = v9;
  *(_DWORD *)(v12 + 20) = v7 & 0x7FFFFFFF;
  while ( v7 < v10 )
  {
    v14 = (_QWORD *)sub_140AB44C0(BugCheckParameter2, v7);
    v14[1] |= 2uLL;
    v7 += 4096;
    *v14 = v13;
  }
  result = 632 * v4 + BugCheckParameter2 + 888;
  v15 = *(_QWORD *)result;
  if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = result;
  *(_QWORD *)(v15 + 8) = v13;
  *(_QWORD *)result = v13;
  return result;
}
