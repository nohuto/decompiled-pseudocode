/*
 * XREFs of ??_EFrameFactory@@UEAAPEAXI@Z @ 0x1802E15A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1FrameFactory@@UEAA@XZ @ 0x1802E02F4 (--1FrameFactory@@UEAA@XZ.c)
 */

FrameFactory *__fastcall FrameFactory::`vector deleting destructor'(FrameFactory *this, char a2)
{
  FrameFactory::~FrameFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
