/*
 * XREFs of ?GetPresentCount@CDDisplayRenderTarget@@UEBAIXZ @ 0x1801A0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetPresentCount(CDDisplayRenderTarget *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 4);
  if ( result )
    return *(unsigned int *)(result + 348);
  return result;
}
