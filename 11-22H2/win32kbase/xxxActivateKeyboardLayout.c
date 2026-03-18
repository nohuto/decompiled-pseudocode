/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C0069C00
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C0069830 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     HKLtoPKL @ 0x1C006C150 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01E4678 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rbp
  struct tagKL *result; // rax
  struct tagKL *v9; // rbx
  __int64 v10; // rbx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = gptiCurrent;
  v11[2] = 0LL;
  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v9 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v11[0] = *((_QWORD *)v4 + 52);
    *((_QWORD *)v4 + 52) = v11;
    v11[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v10 = xxxInternalActivateKeyboardLayout(a1, v9, a3, a4);
    ThreadUnlock1();
    return (struct tagKL *)v10;
  }
  return result;
}
