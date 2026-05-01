/*
 * XREFs of ??$make_shared@UViewEventRegistration@@$$V@std@@YA?AV?$shared_ptr@UViewEventRegistration@@@0@XZ @ 0x1803DE000
 * Callers:
 *     ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1803F0790 (-RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<ViewEventRegistration,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x38uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<ViewEventRegistration>::`vftable';
  *((_OWORD *)v3 + 1) = 0LL;
  *((_OWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
