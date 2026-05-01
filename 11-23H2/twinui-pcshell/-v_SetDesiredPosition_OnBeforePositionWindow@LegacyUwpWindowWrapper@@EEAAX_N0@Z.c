/*
 * XREFs of ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyUwpWindowWrapper@@EEAAX_N0@Z @ 0x1804E1A00
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x1804E153C (-SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_SetDesiredPosition_OnBeforePositionWindow(
        LegacyUwpWindowWrapper *this,
        char a2,
        char a3)
{
  if ( a3 )
    LegacyUwpWindowWrapper::SendViewStateToWindow((LegacyUwpWindowWrapper *)((char *)this - 8), a2 ^ 1);
}
