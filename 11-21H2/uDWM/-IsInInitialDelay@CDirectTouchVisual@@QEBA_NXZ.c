/*
 * XREFs of ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x1800B3F50
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirectTouchVisual::IsInInitialDelay(CDirectTouchVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 50);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 72) == 0;
  return result;
}
