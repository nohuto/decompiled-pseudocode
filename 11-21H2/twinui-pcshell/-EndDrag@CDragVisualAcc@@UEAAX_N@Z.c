/*
 * XREFs of ?EndDrag@CDragVisualAcc@@UEAAX_N@Z @ 0x18053B240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDragVisualAcc::EndDrag(CDragVisualAcc *this, char a2)
{
  _WORD *v2; // rax
  EVENTID v3; // edx

  if ( !*((_BYTE *)this + 21) )
  {
    *((_BYTE *)this + 21) = 1;
    if ( a2 )
    {
      v2 = (_WORD *)*((_QWORD *)this + 16);
      if ( v2 )
        *v2 = 0;
      *((_QWORD *)this + 17) = 0LL;
      v3 = 20027;
    }
    else
    {
      v3 = 20028;
    }
    UiaRaiseAutomationEvent((IRawElementProviderSimple *)this - 4, v3);
  }
}
