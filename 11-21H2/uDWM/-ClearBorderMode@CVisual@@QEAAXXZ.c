/*
 * XREFs of ?ClearBorderMode@CVisual@@QEAAXXZ @ 0x180037530
 * Callers:
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x1800374F8 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::ClearBorderMode(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 51);
  if ( (v1 & 8) != 0 )
  {
    *((_DWORD *)this + 51) = v1 & 0xFFFFFFF7;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
