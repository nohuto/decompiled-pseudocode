/*
 * XREFs of ?GetLeftProcessFrameCount@CProcessSubmix@@UEAAJPEAI@Z @ 0x140026980
 * Callers:
 *     ?GetLeftProcessFrameCount@CProcessSubmix@@WBA@EAAJPEAI@Z @ 0x140030A50 (-GetLeftProcessFrameCount@CProcessSubmix@@WBA@EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::GetLeftProcessFrameCount(CProcessSubmix *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 83);
  return 0LL;
}
