/*
 * XREFs of ?GetComponentNode@SpectreNode@@EEBAPEAV1@XZ @ 0x180014E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct SpectreNode *__fastcall SpectreNode::GetComponentNode(SpectreNode *this)
{
  return (SpectreNode *)((char *)this - 16);
}
