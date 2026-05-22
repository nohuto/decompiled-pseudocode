/*
 * XREFs of ?SetBlueTableValue@CTableTransferEffect@DirectComposition@@UEAAJIPEAUIDCompositionAnimation@@@Z @ 0x1800F4AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetBlueTableValue(
        DirectComposition::CTableTransferEffect *this,
        int a2,
        struct IDCompositionAnimation *a3)
{
  unsigned int v3; // ebx

  if ( (a2 & 0x3FFFFFF) == a2 )
  {
    v3 = 0;
    DirectComposition::CResourceProxy::SetAnimationProperty(
      (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
      (a2 << 6) | 0x2F,
      a3);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
