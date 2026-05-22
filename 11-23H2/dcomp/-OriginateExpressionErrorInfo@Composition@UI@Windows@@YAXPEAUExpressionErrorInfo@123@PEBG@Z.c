/*
 * XREFs of ?OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z @ 0x1801499B4
 * Callers:
 *     ?OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@Z @ 0x18015ADBC (-OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@.c)
 * Callees:
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??$_snwprintf_s@$0CAA@@@YAHAEAY0CAA@G_KPEBGZZ @ 0x180149948 (--$_snwprintf_s@$0CAA@@@YAHAEAY0CAA@G_KPEBGZZ.c)
 *     ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C (-Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::OriginateExpressionErrorInfo(
        Windows::UI::Composition *this,
        wchar_t *a2,
        const unsigned __int16 *a3)
{
  unsigned __int16 *ErrorContext; // rax
  __int64 v6; // r12
  wchar_t *v7; // r15
  int v8; // ebp
  int v9; // r14d
  wchar_t *v10; // rsi
  wchar_t *v11; // rdi
  wchar_t *v12; // rbx
  __int64 v13; // rax
  unsigned __int16 *v14; // [rsp+50h] [rbp-458h]
  wchar_t v15[512]; // [rsp+60h] [rbp-448h] BYREF

  ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext(this);
  v6 = -1LL;
  v14 = ErrorContext;
  do
    ++v6;
  while ( ErrorContext[v6] );
  memset_0(v15, 0, sizeof(v15));
  v7 = word_1801E5750;
  v8 = *((_DWORD *)this + 2);
  v9 = *((_DWORD *)this + 1);
  v10 = word_1801E5750;
  v11 = word_1801E5750;
  if ( a2 )
  {
    v10 = a2;
    v11 = L"\r\nExpression: ";
  }
  v12 = word_1801E5750;
  if ( (_DWORD)v6 )
    v12 = v14;
  v13 = Windows::UI::Composition::ApiErrorMessageTable::Lookup(*(_DWORD *)this + 27);
  if ( (_DWORD)v6 )
    v7 = L"\r\nContext: ";
  _snwprintf_s<512>(
    v15,
    0xFFFFFFFFFFFFFFFFuLL,
    L"%s%s%s%s%s\r\nStart Position: %d, End Position: %d",
    v13,
    v7,
    v12,
    v11,
    v10,
    v9,
    v8);
  RoOriginateErrorW(2147942487LL, 0LL, v15);
}
