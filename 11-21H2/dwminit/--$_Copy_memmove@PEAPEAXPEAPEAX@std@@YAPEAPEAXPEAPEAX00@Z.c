/*
 * XREFs of ??$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x18000741C
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180007454 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000E13F (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<void * *,void * *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
