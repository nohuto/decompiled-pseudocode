/*
 * XREFs of ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x18010F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualAudioStream@@UEAA@XZ @ 0x18010FAF8 (--1CVirtualAudioStream@@UEAA@XZ.c)
 */

CVirtualAudioStream *__fastcall CVirtualAudioStream::`scalar deleting destructor'(CVirtualAudioStream *this, char a2)
{
  CVirtualAudioStream::~CVirtualAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
