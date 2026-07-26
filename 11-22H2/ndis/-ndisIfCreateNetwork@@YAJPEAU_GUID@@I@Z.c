/*
 * XREFs of ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C013F168
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CD80 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1C00B7E98 (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid_LL @ 0x1C00BBC08 (WPP_RECORDER_SF__guid_LL.c)
 */

__int64 __fastcall ndisIfCreateNetwork(struct _GUID *a1, int a2, int a3)
{
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-E0h]
  _QWORD v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+64h] [rbp-9Ch]
  struct _GUID *v15; // [rsp+68h] [rbp-98h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  _DWORD *v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _DWORD v19[132]; // [rsp+90h] [rbp-70h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0x1Au,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (__int64)a1,
      a2);
  v12[3] = 6LL;
  v12[1] = 0LL;
  v16 = 16LL;
  v18 = 528LL;
  memset(&v19[2], 0, 0x208uLL);
  v12[0] = 0LL;
  v12[2] = &NPI_MS_NDIS_MODULEID;
  v13 = 2;
  v17 = v19;
  v14 = 1;
  v15 = a1;
  v19[0] = 34603436;
  v19[1] = a2;
  v6 = NsiSetAllParametersEx(v12);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_LL(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v7, v8, v10, (__int64)a1);
  return v6;
}
