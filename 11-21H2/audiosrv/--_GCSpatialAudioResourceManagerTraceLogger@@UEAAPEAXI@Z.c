/*
 * XREFs of ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x180129EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180129DB4 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 */

CSpatialAudioResourceManagerTraceLogger *__fastcall CSpatialAudioResourceManagerTraceLogger::`scalar deleting destructor'(
        CSpatialAudioResourceManagerTraceLogger *this,
        char a2)
{
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
