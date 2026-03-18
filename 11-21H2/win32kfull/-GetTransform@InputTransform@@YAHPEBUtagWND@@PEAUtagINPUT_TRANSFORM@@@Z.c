/*
 * XREFs of ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00AD920
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     EditionGetInputTransform @ 0x1C00AD900 (EditionGetInputTransform.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00041A8 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall InputTransform::GetTransform(
        InputTransform *this,
        const struct tagWND *a2,
        struct tagINPUT_TRANSFORM *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  CompositionInputObject *v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( !(unsigned __int8)IsInputThread(this, a2, a3, a4)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != gptiManipulationThread )
  {
    return 0LL;
  }
  v6 = *((_QWORD *)this + 34);
  if ( !v6 )
    return 0LL;
  v8 = *(CompositionInputObject **)(v6 + 96);
  if ( !v8 )
    return 0LL;
  memset(v12, 0, sizeof(v12));
  if ( (int)CompositionInputObject::QueryTransform(v8, (struct tagINPUT_TRANSFORM *)v12) < 0 )
    return 0LL;
  result = 1LL;
  v9 = v12[1];
  *(_OWORD *)a2 = v12[0];
  v10 = v12[2];
  *((_OWORD *)a2 + 1) = v9;
  v11 = v12[3];
  *((_OWORD *)a2 + 2) = v10;
  *((_OWORD *)a2 + 3) = v11;
  return result;
}
