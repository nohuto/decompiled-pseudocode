/*
 * XREFs of ?IsGPUGlitch@CCompFrameStats@@KA_NAEBUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801A884C
 * Callers:
 *     ?RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A8998 (-RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 *     ?TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A9CD0 (-TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompFrameStats::IsGPUGlitch(const struct tagCOMPOSITION_TARGET_STATS *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  return *((_QWORD *)a1 + 1)
      && (v1 = *((_QWORD *)a1 + 5)) != 0
      && (v2 = *((_QWORD *)a1 + 8)) != 0
      && v2 > v1
      && v2 - v1 >= *((_QWORD *)a1 + 2) >> 1;
}
