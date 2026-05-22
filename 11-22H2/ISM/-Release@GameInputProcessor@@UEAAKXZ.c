/*
 * XREFs of ?Release@GameInputProcessor@@UEAAKXZ @ 0x18004C8E0
 * Callers:
 *     ?Release@GameInputProcessor@@W7EAAKXZ @ 0x18007E6B0 (-Release@GameInputProcessor@@W7EAAKXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

unsigned int __fastcall GameInputProcessor::Release(GameInputProcessor *this)
{
  return RefCountedObject::Release((GameInputProcessor *)((char *)this + 8));
}
