/*
 * XREFs of ?OnCancelOrCompletion@GammaFlashAsyncOperation@@MEAAX_N@Z @ 0x180402AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GammaFlashAsyncOperation::OnCancelOrCompletion(GammaFlashAsyncOperation *this, char a2)
{
  if ( a2 )
    *((_BYTE *)this + 252) = 1;
}
