/*
 * XREFs of ?get_EventType@ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAJPEAW4ChainLinkEventType@2345@@Z @ 0x1801822D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLinkEventArgs::get_EventType(
        Windows::Internal::Shell::Chaining::ChainLinkEventArgs *this,
        enum Windows::Internal::Shell::Chaining::ChainLinkEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
