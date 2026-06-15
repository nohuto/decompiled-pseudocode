/*
 * XREFs of ??_ECBridgeToRenderGraph@@EEAAPEAXI@Z @ 0x14007A200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CBridgeToRenderGraph@@EEAA@XZ @ 0x14007A150 (--1CBridgeToRenderGraph@@EEAA@XZ.c)
 */

CBridgeToRenderGraph *__fastcall CBridgeToRenderGraph::`vector deleting destructor'(
        CBridgeToRenderGraph *this,
        char a2)
{
  CBridgeToRenderGraph::~CBridgeToRenderGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
