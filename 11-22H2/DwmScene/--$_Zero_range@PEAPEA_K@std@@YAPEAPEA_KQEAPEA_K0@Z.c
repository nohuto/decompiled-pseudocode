/*
 * XREFs of ??$_Zero_range@PEAPEA_K@std@@YAPEAPEA_KQEAPEA_K0@Z @ 0x1800A0914
 * Callers:
 *     ??$_Uninitialized_value_construct_n_unchecked1@PEAPEA_K_K@std@@YAPEAPEA_KPEAPEA_K_K@Z @ 0x1800A0904 (--$_Uninitialized_value_construct_n_unchecked1@PEAPEA_K_K@std@@YAPEAPEA_KPEAPEA_K_K@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 */

__int64 __fastcall std::_Zero_range<unsigned __int64 * *>(void *a1, __int64 a2)
{
  memset_0(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
