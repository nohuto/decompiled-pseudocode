/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z @ 0x18003C790
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18003C590 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  unsigned int v13; // r12d
  unsigned __int64 v14; // rdi
  int v15; // ebx
  unsigned __int64 v16; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 *v20; // rdx
  unsigned __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-8h] BYREF
  int v23; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v24; // [rsp+B0h] [rbp+50h] BYREF

  v13 = a7;
  v14 = a6;
  v15 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, unsigned __int64 *, _QWORD))this
         + 3))(
          a3,
          a4,
          a2,
          a5,
          a6,
          a7,
          &v22,
          0LL);
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1800DB1E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      return (unsigned int)v15;
    v20 = (unsigned __int8 *)&unk_1800C30BD;
LABEL_10:
    v23 = v15;
    v24 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DB1E0,
      v20,
      v18,
      v19,
      (__int64)&v23,
      (__int64)&v24);
    return (unsigned int)v15;
  }
  v15 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, unsigned __int64 *))this
         + 12))(
          a3,
          a4,
          a2,
          a5,
          v14,
          v13,
          &v21);
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1800DB1E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      return (unsigned int)v15;
    v20 = (unsigned __int8 *)&unk_1800C3105;
    goto LABEL_10;
  }
  v16 = v21 << 12;
  if ( is_mul_ok(v21, 0x1000uLL) )
  {
    v15 = 0;
  }
  else
  {
    v16 = -1LL;
    v15 = -1073741675;
  }
  *a8 = v22;
  *a9 = v16;
  return (unsigned int)v15;
}
