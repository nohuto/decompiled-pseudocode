/*
 * XREFs of ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x180490534
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(
        HSTRING *a1)
{
  HSTRING v1; // rsi
  DWORD LastError; // ebx

  v1 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    WindowsDeleteString(v1);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return a1;
}
