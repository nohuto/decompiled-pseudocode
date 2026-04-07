/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18004B6CC
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180049220 (--0CDesktopManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::UpdateWindowShadows(CDesktopManager *this)
{
  if ( *((int *)this + 8) > 2 )
    *((_BYTE *)this + 17) = 0;
  else
    SystemParametersInfoW(0x1024u, 0, (char *)this + 17, 0);
}
