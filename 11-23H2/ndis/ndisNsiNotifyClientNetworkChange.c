/*
 * XREFs of ndisNsiNotifyClientNetworkChange @ 0x1C013F28C
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2E0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB840 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001C4D0 (-ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

char __fastcall ndisNsiNotifyClientNetworkChange(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  char result; // al
  int v8; // edx
  __int64 v9; // xmm1_8
  __int64 v10; // [rsp+30h] [rbp-68h]
  _OWORD v11[4]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  result = ndisIsCompartmentEnumerable((const struct _NDIS_IF_COMPARTMENT_BLOCK *)v3);
  if ( result )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0xEu,
        (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
        a1,
        v8);
      v3 = *(_QWORD *)(a1 + 48);
    }
    memset(v11, 0, sizeof(v11));
    *(_QWORD *)&v11[0] = ndisNsiSavedClientNpi;
    WORD4(v11[0]) = 6;
    *(_QWORD *)&v11[1] = a1 + 32;
    HIDWORD(v11[0]) = a2;
    DWORD2(v11[1]) = 16;
    if ( a2 )
    {
      *((_QWORD *)&v11[2] + 1) = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 16);
      v11[2] = *(_OWORD *)a3;
      *(_QWORD *)&v11[3] = v9;
    }
    DWORD2(v11[3]) = *(_DWORD *)(v3 + 16);
    result = (*(__int64 (__fastcall **)(_OWORD *))(qword_1C00F5B70 + 8))(v11);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = a2;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4u,
               0x16u,
               0xFu,
               (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
               a1,
               v10);
    }
  }
  return result;
}
