/*
 * XREFs of ?IsShowForTransitions@UndockedSearchAppExperienceManager@@AEAA_NPEAUHSTRING__@@@Z @ 0x180045B2C
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     <none>
 */

bool __fastcall UndockedSearchAppExperienceManager::IsShowForTransitions(
        UndockedSearchAppExperienceManager *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rax
  bool result; // al
  UndockedSearchAppExperienceManager *length; // [rsp+30h] [rbp+8h] BYREF

  length = this;
  result = 0;
  if ( a2 )
  {
    LODWORD(length) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, (UINT32 *)&length);
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"StartMode=AppTransition") )
        return 1;
    }
  }
  return result;
}
