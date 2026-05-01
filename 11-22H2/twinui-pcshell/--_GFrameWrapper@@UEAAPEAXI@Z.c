/*
 * XREFs of ??_GFrameWrapper@@UEAAPEAXI@Z @ 0x1803C6830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1FrameWrapper@@UEAA@XZ @ 0x1803C67EC (--1FrameWrapper@@UEAA@XZ.c)
 */

FrameWrapper *__fastcall FrameWrapper::`scalar deleting destructor'(FrameWrapper *this, char a2)
{
  FrameWrapper::~FrameWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
