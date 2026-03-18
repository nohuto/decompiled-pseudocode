/*
 * XREFs of EngDeleteClip @ 0x1C016AE40
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C015E550 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C016ADA0 (EngCreateClip.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngFreeMem @ 0x1C0077DB0 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  unsigned __int64 v2; // rcx

  if ( pco )
  {
    v2 = *(_QWORD *)&pco[2].rclBounds.top;
    if ( v2 )
      REGION::vDeleteREGION(v2);
    EngFreeMem(pco);
  }
}
