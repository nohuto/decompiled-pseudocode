/*
 * XREFs of ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z @ 0x1801078C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowOcclusionInfo::SetZ(CWindowOcclusionInfo *this, int a2)
{
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 12) = a2;
  *((_DWORD *)this + 11) = a2;
  *((_DWORD *)this + 10) = a2;
}
