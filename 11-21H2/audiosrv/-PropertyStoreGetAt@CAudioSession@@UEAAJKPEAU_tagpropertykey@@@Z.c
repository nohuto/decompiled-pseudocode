/*
 * XREFs of ?PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800DA0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetAt(CAudioSession *this, unsigned int a2, struct _tagpropertykey *a3)
{
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x51u, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _tagpropertykey *))(**((_QWORD **)this + 52) + 32LL))(
           *((_QWORD *)this + 52),
           a2,
           a3);
}
