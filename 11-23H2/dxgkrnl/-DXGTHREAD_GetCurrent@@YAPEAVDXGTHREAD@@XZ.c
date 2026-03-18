/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C0048FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

struct DXGTHREAD *DXGTHREAD_GetCurrent(void)
{
  return DXGTHREAD::GetCurrent();
}
