/*
 * XREFs of ?AddRef@CDropShadow@@$4PPPPPPPM@BBA@EAAKXZ @ 0x180105910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDropShadow::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 272));
}
