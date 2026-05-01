/*
 * XREFs of ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x1805E638C
 * Callers:
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x1805E6BA0 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SplitActionAndServiceId(HSTRING string, HSTRING *a2, HSTRING *a3)
{
  unsigned int v5; // edi
  const wchar_t *StringRawBuffer; // rax
  size_t v7; // rbp
  HRESULT v8; // eax
  HSTRING v9; // rax
  HSTRING stringa; // [rsp+48h] [rbp+10h] BYREF
  HSTRING *length; // [rsp+50h] [rbp+18h] BYREF

  length = a3;
  if ( a2 )
    *a2 = 0LL;
  v5 = 0;
  stringa = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
  v7 = wcscspn(StringRawBuffer, &c_szActionServiceDelimiter);
  if ( a2 )
  {
    if ( v7 >= (unsigned int)length )
    {
      WindowsDeleteString(stringa);
      v8 = WindowsDuplicateString(string, &stringa);
    }
    else
    {
      WindowsDeleteString(stringa);
      v8 = WindowsSubstringWithSpecifiedLength(string, 0, v7, &stringa);
    }
    v5 = v8;
    if ( v8 >= 0 )
    {
      v9 = stringa;
      stringa = 0LL;
      *a2 = v9;
    }
  }
  WindowsDeleteString(0LL);
  WindowsDeleteString(stringa);
  return v5;
}
