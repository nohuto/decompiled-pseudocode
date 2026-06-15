/*
 * XREFs of ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180053578
 * Callers:
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005353C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U2@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@66666666666466@Z @ 0x1800536F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVa.c)
 */

void __fastcall LogAecEffectPolicy<70368744177672>(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // r9
  int *v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  int v14; // [rsp+C0h] [rbp-70h] BYREF
  int v15; // [rsp+C4h] [rbp-6Ch] BYREF
  int v16; // [rsp+C8h] [rbp-68h] BYREF
  int v17; // [rsp+CCh] [rbp-64h] BYREF
  int v18; // [rsp+D0h] [rbp-60h] BYREF
  int v19; // [rsp+D4h] [rbp-5Ch] BYREF
  int v20; // [rsp+D8h] [rbp-58h] BYREF
  int v21; // [rsp+DCh] [rbp-54h] BYREF
  int v22; // [rsp+E0h] [rbp-50h] BYREF
  int v23; // [rsp+E4h] [rbp-4Ch] BYREF
  _DWORD *v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF

  if ( *a1 > 4u )
  {
    if ( tlgKeywordOn((__int64)a1, 0x400000000008LL) )
    {
      v10 = v8[16];
      v11 = v8[15];
      v24 = v8 + 11;
      v12 = v8[10];
      v13 = v8[9];
      v14 = v8[6];
      v15 = v8[7];
      v16 = v8[8];
      v17 = v8[5];
      v18 = v8[4];
      v19 = v8[3];
      v20 = v8[2];
      v21 = v8[1];
      v22 = *v8;
      v23 = a5;
      v25 = v9;
      v26 = v7;
      v27 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (unsigned int)&unk_1801958D7,
        v6,
        v7,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v24,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
