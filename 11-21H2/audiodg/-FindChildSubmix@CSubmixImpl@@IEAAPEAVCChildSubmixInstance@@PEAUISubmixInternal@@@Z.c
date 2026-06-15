/*
 * XREFs of ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x14001E704
 * Callers:
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001E680 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001E770 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140029BD0 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x14001E744 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 */

struct ISubmixInternal **__fastcall CSubmixImpl::FindChildSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct ISubmixInternal **result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 15);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = *(struct ISubmixInternal ***)ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(
                                            this,
                                            &v4);
    if ( *result == a2 )
      break;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
