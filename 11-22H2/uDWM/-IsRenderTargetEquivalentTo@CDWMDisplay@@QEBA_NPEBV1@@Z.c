/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005B094
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x180056BB4 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMDisplay::IsRenderTargetEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  return *((_DWORD *)this + 42) == *((_DWORD *)a2 + 42)
      && *((_DWORD *)this + 43) == *((_DWORD *)a2 + 43)
      && *((_DWORD *)this + 47) == *((_DWORD *)a2 + 47)
      && *((_DWORD *)this + 55) == *((_DWORD *)a2 + 55)
      && *((_DWORD *)this + 59) == *((_DWORD *)a2 + 59);
}
