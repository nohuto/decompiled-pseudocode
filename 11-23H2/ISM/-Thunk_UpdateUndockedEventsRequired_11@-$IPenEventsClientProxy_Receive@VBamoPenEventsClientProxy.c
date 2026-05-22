/*
 * XREFs of ?Thunk_UpdateUndockedEventsRequired_11@?$IPenEventsClientProxy_Receive@VBamoPenEventsClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180054E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IPenEventsClientProxy_Receive<BamoImpl::BamoPenEventsClientProxyImpl>::Thunk_UpdateUndockedEventsRequired_11(
        BamoImpl::BamoPenEventsClientProxyImpl *a1,
        _QWORD *a2,
        __int64 a3)
{
  _BYTE *v3; // rax

  v3 = (_BYTE *)*a2;
  LOBYTE(a2) = 1;
  LOBYTE(a3) = *v3;
  return BamoImpl::BamoPenEventsClientProxyImpl::UpdateUndockedEventsRequired(a1, (__int64)a2, a3);
}
