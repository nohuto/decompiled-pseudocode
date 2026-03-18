/*
 * XREFs of ?AddRef@CContent@@$4PPPPPPPM@LI@EAAKXZ @ 0x18011DBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 184));
}
