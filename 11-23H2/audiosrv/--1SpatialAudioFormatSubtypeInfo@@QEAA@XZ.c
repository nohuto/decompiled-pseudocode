/*
 * XREFs of ??1SpatialAudioFormatSubtypeInfo@@QEAA@XZ @ 0x18003C1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo(SpatialAudioFormatSubtypeInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    CoTaskMemFree(v4);
}
