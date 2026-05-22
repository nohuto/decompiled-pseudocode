/*
 * XREFs of ?Release@GameInputProcessor@@UEAAKXZ @ 0x18004FB00
 * Callers:
 *     ?Release@GameInputProcessor@@W7EAAKXZ @ 0x18006ABD0 (-Release@GameInputProcessor@@W7EAAKXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

unsigned int __fastcall GameInputProcessor::Release(GameInputProcessor *this)
{
  return RefCountedObject::Release((GameInputProcessor *)((char *)this + 8));
}
