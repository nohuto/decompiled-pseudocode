/*
 * XREFs of ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180163540
 * Callers:
 *     ?CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIPEAGI@Z @ 0x1801628E8 (-CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIP.c)
 * Callees:
 *     StringLengthWorkerW @ 0x180022D20 (StringLengthWorkerW.c)
 *     StringCopyWorkerW_1 @ 0x180163614 (StringCopyWorkerW_1.c)
 */

HRESULT __fastcall StringCchCatExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  HRESULT result; // eax
  __int64 v8; // r10
  const wchar_t *v9; // r11
  size_t v10; // rbx
  wchar_t *v11; // rdi
  size_t v12; // [rsp+20h] [rbp-28h]
  size_t pcchLength[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 - 1 > 0x7FFFFFFE )
    return -2147024809;
  result = StringLengthWorkerW(a1, a2, pcchLength);
  if ( result < 0 )
    return result;
  v10 = a2 - pcchLength[0];
  v11 = (wchar_t *)(v8 + 2 * pcchLength[0]);
  result = 0;
  if ( v10 > 1 )
  {
    pcchLength[0] = 0LL;
    result = StringCopyWorkerW_1(v11, v10, pcchLength, v9, v12);
    v10 -= pcchLength[0];
    v11 += pcchLength[0];
    if ( (int)(result + 0x80000000) >= 0 && result != -2147024774 )
      return result;
  }
  else if ( *v9 )
  {
    if ( !v8 )
      return -2147024809;
    result = -2147024774;
  }
  if ( a4 )
    *a4 = v11;
  if ( a5 )
    *a5 = v10;
  return result;
}
