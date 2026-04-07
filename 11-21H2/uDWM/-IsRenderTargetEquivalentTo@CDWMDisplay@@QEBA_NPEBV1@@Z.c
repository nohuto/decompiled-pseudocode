/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003E864
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003E6AC (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMDisplay::IsRenderTargetEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  return *((_DWORD *)this + 42) == *((_DWORD *)a2 + 42)
      && *((_DWORD *)this + 43) == *((_DWORD *)a2 + 43)
      && *((_DWORD *)this + 44) == *((_DWORD *)a2 + 44)
      && *((_DWORD *)this + 51) == *((_DWORD *)a2 + 51)
      && *((_DWORD *)this + 55) == *((_DWORD *)a2 + 55);
}
