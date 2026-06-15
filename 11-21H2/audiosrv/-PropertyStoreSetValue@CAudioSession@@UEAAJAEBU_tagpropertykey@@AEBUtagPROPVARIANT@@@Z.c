/*
 * XREFs of ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800DA2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800D2E08 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreSetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x57u,
      (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      this,
      0LL);
  }
  v6 = &AllowedSessionPropertyKeys;
  do
  {
    if ( (unsigned int)operator==((__int64)a2, (__int64)v6) )
      break;
    ++v8;
    v6 = (void *)(v7 + 20);
  }
  while ( (unsigned __int64)(v9 + 20) < 0x28 );
  if ( v8 == 2 )
    return 2147942487LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 52) + 48LL))(
             *((_QWORD *)this + 52),
             a2,
             a3);
}
