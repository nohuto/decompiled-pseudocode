/*
 * XREFs of sub_1801BBF48 @ 0x1801BBF48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_1801BBF48(CVirtualDesktop *a1, HSTRING *a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x1801BBF52LL);
  __asm { rcr     byte ptr [rsi], 1 }
  return CVirtualDesktop::GetNameInternal(a1, a2);
}
