/*
 * XREFs of ??_GFrameWrapper@@UEAAPEAXI@Z @ 0x18030A380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1FrameWrapper@@UEAA@XZ @ 0x18030A334 (--1FrameWrapper@@UEAA@XZ.c)
 */

FrameWrapper *__fastcall FrameWrapper::`scalar deleting destructor'(FrameWrapper *this, char a2)
{
  FrameWrapper::~FrameWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
