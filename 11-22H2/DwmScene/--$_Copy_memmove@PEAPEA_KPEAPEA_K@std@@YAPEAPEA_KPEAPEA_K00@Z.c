/*
 * XREFs of ??$_Copy_memmove@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KPEAPEA_K00@Z @ 0x1800A05F4
 * Callers:
 *     ??$uninitialized_copy@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KQEAPEA_K0PEAPEA_K@Z @ 0x1800A0970 (--$uninitialized_copy@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KQEAPEA_K0PEAPEA_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<unsigned __int64 * *,unsigned __int64 * *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
