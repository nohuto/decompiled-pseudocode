/*
 * XREFs of ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180093624
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800798AC (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180092308 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 */

void __fastcall RmpSystemFreezeHostJob(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  int ManagerType; // eax
  void (__fastcall *v5)(char *, _QWORD, char *, _QWORD, int, char); // r11
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  const unsigned __int16 *v12; // [rsp+78h] [rbp+20h] BYREF

  ManagerType = RmpActivityHostGetManagerType(a1);
  v8 = a2;
  v5((char *)a1 + 552, *((unsigned int *)a1 + 155), (char *)a1 + 88, *((_QWORD *)a1 + 4), ManagerType, v8);
  if ( (unsigned int)dword_1800DC1E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
    {
      v11 = *((_QWORD *)a1 + 4);
      v12 = (const unsigned __int16 *)((char *)a1 + 88);
      v10 = a2;
      v9 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v11,
        byte_1800C6332,
        v6,
        v7,
        (__int64)&v9,
        (__int64)&v10,
        &v12,
        (__int64)&v11);
    }
  }
}
