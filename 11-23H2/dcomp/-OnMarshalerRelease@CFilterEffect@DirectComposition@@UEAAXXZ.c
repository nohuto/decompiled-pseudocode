/*
 * XREFs of ?OnMarshalerRelease@CFilterEffect@DirectComposition@@UEAAXXZ @ 0x1800F26E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CFilterEffect::OnMarshalerRelease(DirectComposition::CFilterEffect *this)
{
  if ( (*((_BYTE *)this + 48) & 2) != 0 )
    *((_BYTE *)this + 80) |= 1u;
  else
    (*(void (__fastcall **)(DirectComposition::CFilterEffect *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
}
