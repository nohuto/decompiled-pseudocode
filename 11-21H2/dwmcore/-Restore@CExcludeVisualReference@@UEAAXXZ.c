/*
 * XREFs of ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x1801A9280
 * Callers:
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1801928FC (--1CExcludeVisualReference@@QEAA@XZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Restore(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    if ( *(_DWORD *)(v2 + 16) )
    {
      *((_BYTE *)Visual + 102) ^= (*((_BYTE *)Visual + 102) ^ (4 * *(_BYTE *)(v2 + 20))) & 4;
      *(_DWORD *)(v2 + 16) = 0;
    }
  }
}
