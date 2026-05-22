/*
 * XREFs of ?PostMessageToProducer@CFlipConsumer@Flip@@UEAAJIPEAUFlipPropertyItem@@@Z @ 0x1801AB410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Flip::CFlipConsumer::PostMessageToProducer(
        Flip::CFlipConsumer *this,
        __int64 a2,
        struct FlipPropertyItem *a3)
{
  int v3; // eax

  v3 = NtFlipObjectConsumerPostMessage(*((_QWORD *)this + 3), a2, a3);
  return HRESULTFromNTSTATUS(v3);
}
