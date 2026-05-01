/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z @ 0x18002A4A4
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rdx
  unsigned __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-8h] BYREF
  int v27; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v28; // [rsp+B0h] [rbp+50h] BYREF

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
          &v26,
          0LL);
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v16, v17) )
      return (unsigned int)v15;
    v24 = &unk_1800C1ED3;
LABEL_10:
    v27 = v15;
    v28 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DC1E0,
      (int)v24,
      v22,
      v23,
      (__int64)&v27,
      (__int64)&v28);
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
          &v25);
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v18, v19) )
      return (unsigned int)v15;
    v24 = &unk_1800C1F1B;
    goto LABEL_10;
  }
  v20 = v25 << 12;
  if ( is_mul_ok(v25, 0x1000uLL) )
  {
    v15 = 0;
  }
  else
  {
    v20 = -1LL;
    v15 = -1073741675;
  }
  *a8 = v26;
  *a9 = v20;
  return (unsigned int)v15;
}
