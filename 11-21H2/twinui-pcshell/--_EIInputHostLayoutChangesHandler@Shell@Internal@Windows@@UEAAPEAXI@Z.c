/*
 * XREFs of ??_EIInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18017A510
 * Callers:
 *     <none>
 * Callees:
 *     ??1IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAA@XZ @ 0x18017A54C (--1IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::IInputHostLayoutChangesHandler *__fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::`vector deleting destructor'(
        Windows::Internal::Shell::IInputHostLayoutChangesHandler *this,
        char a2)
{
  Windows::Internal::Shell::IInputHostLayoutChangesHandler::~IInputHostLayoutChangesHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x118uLL);
  return this;
}
