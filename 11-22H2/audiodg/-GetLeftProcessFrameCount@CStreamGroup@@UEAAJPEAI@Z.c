/*
 * XREFs of ?GetLeftProcessFrameCount@CStreamGroup@@UEAAJPEAI@Z @ 0x140026560
 * Callers:
 *     ?GetLeftProcessFrameCount@CStreamGroup@@WBI@EAAJPEAI@Z @ 0x14002F770 (-GetLeftProcessFrameCount@CStreamGroup@@WBI@EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::GetLeftProcessFrameCount(CStreamGroup *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 85);
  return 0LL;
}
