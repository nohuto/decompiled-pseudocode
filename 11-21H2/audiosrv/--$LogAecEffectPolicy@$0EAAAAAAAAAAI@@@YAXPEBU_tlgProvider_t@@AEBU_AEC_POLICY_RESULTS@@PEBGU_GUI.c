/*
 * XREFs of ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180142DF4
 * Callers:
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B63C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U2@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@66666666666466@Z @ 0x180143B2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVa.c)
 */

__int64 __fastcall LogAecEffectPolicy<70368744177672>(__int64 a1, int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int v6; // [rsp+B8h] [rbp-80h] BYREF
  int v7; // [rsp+BCh] [rbp-7Ch] BYREF
  int v8; // [rsp+C0h] [rbp-78h] BYREF
  int v9; // [rsp+C4h] [rbp-74h] BYREF
  int v10; // [rsp+C8h] [rbp-70h] BYREF
  int v11; // [rsp+CCh] [rbp-6Ch] BYREF
  int v12; // [rsp+D0h] [rbp-68h] BYREF
  int v13; // [rsp+D4h] [rbp-64h] BYREF
  int v14; // [rsp+D8h] [rbp-60h] BYREF
  int v15; // [rsp+DCh] [rbp-5Ch] BYREF
  int v16; // [rsp+E0h] [rbp-58h] BYREF
  int v17; // [rsp+E4h] [rbp-54h] BYREF
  int v18; // [rsp+E8h] [rbp-50h] BYREF
  int v19; // [rsp+ECh] [rbp-4Ch] BYREF
  _DWORD *v20; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v22; // [rsp+100h] [rbp-38h] BYREF
  __int64 v23; // [rsp+108h] [rbp-30h] BYREF

  if ( *(_DWORD *)a1 > 4u && (*(_QWORD *)(a1 + 16) & 0x400000000008LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0x400000000008LL;
    if ( result == *(_QWORD *)(a1 + 24) )
    {
      v6 = a2[16];
      v7 = a2[15];
      v20 = a2 + 11;
      v8 = a2[10];
      v9 = a2[9];
      v10 = a2[6];
      v11 = a2[7];
      v12 = a2[8];
      v13 = a2[5];
      v14 = a2[4];
      v15 = a2[3];
      v16 = a2[2];
      v17 = a2[1];
      v18 = *a2;
      v19 = a5;
      v21 = a3;
      v22 = a4;
      v23 = 0x2000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               a1,
               (unsigned int)&unk_18018EA89,
               a3,
               a4,
               (__int64)&v23,
               (__int64)&v22,
               (__int64)&v21,
               (__int64)&v19,
               (__int64)&v18,
               (__int64)&v17,
               (__int64)&v16,
               (__int64)&v15,
               (__int64)&v14,
               (__int64)&v13,
               (__int64)&v12,
               (__int64)&v11,
               (__int64)&v10,
               (__int64)&v9,
               (__int64)&v8,
               (__int64)&v20,
               (__int64)&v7,
               (__int64)&v6);
    }
  }
  return result;
}
