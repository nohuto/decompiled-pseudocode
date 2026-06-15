/*
 * XREFs of ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x180082B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualAudioStream@@UEAA@XZ @ 0x18012651C (--1CVirtualAudioStream@@UEAA@XZ.c)
 */

CVirtualAudioStream *__fastcall CVirtualAudioStream::`scalar deleting destructor'(CVirtualAudioStream *this, char a2)
{
  CVirtualAudioStream::~CVirtualAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
