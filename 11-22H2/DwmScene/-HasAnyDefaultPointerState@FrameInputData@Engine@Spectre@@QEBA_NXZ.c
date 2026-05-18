/*
 * XREFs of ?HasAnyDefaultPointerState@FrameInputData@Engine@Spectre@@QEBA_NXZ @ 0x18003495C
 * Callers:
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Engine::FrameInputData::HasAnyDefaultPointerState(Spectre::Engine::FrameInputData *this)
{
  char result; // al

  result = 0;
  if ( *(float *)this == -1.0
    && *((float *)this + 1) == -1.0
    && *((_DWORD *)this + 2) == 2
    && !*((_DWORD *)this + 3)
    && !*((_DWORD *)this + 4)
    || *((float *)this + 5) == -1.0
    && *((float *)this + 6) == -1.0
    && *((_DWORD *)this + 7) == 2
    && !*((_DWORD *)this + 8)
    && !*((_DWORD *)this + 9) )
  {
    return 1;
  }
  return result;
}
