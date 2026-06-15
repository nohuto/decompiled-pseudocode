/*
 * XREFs of ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x180083D46
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180003870 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_BLOCK>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
