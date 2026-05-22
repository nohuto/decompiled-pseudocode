/*
 * XREFs of ?SetBlueTable@CTableTransferEffect@DirectComposition@@UEAAJPEBMI@Z @ 0x1800F4A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetBlueTable(
        DirectComposition::CTableTransferEffect *this,
        const float *a2,
        unsigned int a3)
{
  if ( (a3 & 0x3FFFFFF) == a3 )
    return DirectComposition::CResourceProxy::SetBufferProperty(
             (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
             2,
             a2,
             4LL * a3);
  else
    return 2147942487LL;
}
