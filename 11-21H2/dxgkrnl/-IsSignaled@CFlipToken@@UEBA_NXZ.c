/*
 * XREFs of ?IsSignaled@CFlipToken@@UEBA_NXZ @ 0x1C001DEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 12) )
  {
    if ( *((_BYTE *)this + 89) )
      return 1;
  }
  return result;
}
