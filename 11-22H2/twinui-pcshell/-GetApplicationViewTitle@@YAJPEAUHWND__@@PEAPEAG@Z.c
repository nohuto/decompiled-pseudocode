/*
 * XREFs of ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180042CC0
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180042AF0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x180042D28 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall GetApplicationViewTitle(HWND a1, unsigned __int16 **a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // [rsp+30h] [rbp-228h] BYREF
  unsigned __int16 v5[256]; // [rsp+40h] [rbp-218h] BYREF

  *a2 = 0LL;
  result = GetFirstApplicationViewTitleProperty(a1, (unsigned __int64)a2, v5, &v4);
  if ( (int)result >= 0 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v4 + v3] );
    return _AllocStringWorker<CTCoAllocPolicy>();
  }
  return result;
}
