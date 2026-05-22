/*
 * XREFs of ??4?$vector@IV?$allocator@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FA5E0
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800FAA94 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x18010B80C (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<unsigned int>::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<Windows::UI::Color>::_Tidy((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
