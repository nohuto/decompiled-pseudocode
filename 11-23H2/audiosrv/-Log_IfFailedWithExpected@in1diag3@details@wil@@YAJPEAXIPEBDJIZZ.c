/*
 * XREFs of ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x180013808
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013570 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z @ 0x1801632D0 (-GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 wil::details::in1diag3::Log_IfFailedWithExpected(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        unsigned int a5,
        unsigned int a6,
        ...)
{
  unsigned int v6; // eax
  unsigned int v8; // ebx
  unsigned int *v10; // r8

  v6 = 0;
  v8 = (unsigned int)a4;
  if ( (int)a4 < 0 )
  {
    if ( a5 )
    {
      v10 = &a5;
      do
      {
        v10 += 2;
        if ( (_DWORD)a4 == *v10 )
          break;
        ++v6;
      }
      while ( v6 < a5 );
    }
    if ( v6 == a5 )
      wil::details::in1diag3::_Log_Hr(this, a2, a3, (const char *)(unsigned int)a4);
  }
  return v8;
}
