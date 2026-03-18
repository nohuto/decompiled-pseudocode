/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C006EF60
 * Callers:
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C002C8B0 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((__int64)RectRgnIndirect, 0, 4);
  }
  return RectRgnIndirect;
}
