/*
 * XREFs of ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1805E93D8
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x18006AA70 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800913B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1805E9460 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 */

__int64 __fastcall GetApplicationViewTitle(HWND a1, char **a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  const WCHAR *v7; // r8
  int v8; // [rsp+20h] [rbp-238h]
  unsigned __int64 v9; // [rsp+30h] [rbp-228h] BYREF
  unsigned __int16 v10[256]; // [rsp+40h] [rbp-218h] BYREF

  *a2 = 0LL;
  result = GetFirstApplicationViewTitleProperty(a1, (unsigned __int64)a2, v10, &v9);
  if ( (int)result >= 0 )
  {
    v6 = -1LL;
    v7 = &v10[v9];
    do
      ++v6;
    while ( v7[v6] );
    return _AllocStringWorker<CTCoAllocPolicy>(v5, v4, v7, v6, v8, a2);
  }
  return result;
}
