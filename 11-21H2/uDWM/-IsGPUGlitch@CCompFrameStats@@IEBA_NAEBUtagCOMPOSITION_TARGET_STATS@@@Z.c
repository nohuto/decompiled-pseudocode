/*
 * XREFs of ?IsGPUGlitch@CCompFrameStats@@IEBA_NAEBUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180009618
 * Callers:
 *     ?TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009540 (-TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AFC0 (-TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompFrameStats::IsGPUGlitch(CCompFrameStats *this, const struct tagCOMPOSITION_TARGET_STATS *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  bool result; // al

  result = 0;
  if ( *((_QWORD *)a2 + 1) )
  {
    v2 = *((_QWORD *)a2 + 5);
    if ( v2 )
    {
      v3 = *((_QWORD *)a2 + 8);
      if ( v3 )
      {
        if ( v3 > v2 && v3 - v2 >= *((_QWORD *)a2 + 2) >> 1 )
          return 1;
      }
    }
  }
  return result;
}
