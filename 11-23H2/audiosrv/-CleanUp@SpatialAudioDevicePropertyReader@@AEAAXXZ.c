/*
 * XREFs of ?CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ @ 0x18002E5F0
 * Callers:
 *     ??1SpatialAudioDevicePropertyReader@@UEAA@XZ @ 0x18002D61C (--1SpatialAudioDevicePropertyReader@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SpatialAudioDevicePropertyReader::CleanUp(SpatialAudioDevicePropertyReader *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax

  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    _aligned_free(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    _aligned_free(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  *((_QWORD *)this + 63) = 0LL;
}
