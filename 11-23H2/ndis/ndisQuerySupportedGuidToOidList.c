/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C002D38C
 * Callers:
 *     ndisWmiRegister @ 0x1C00203F8 (ndisWmiRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ndisWmiMapOids @ 0x1C002D834 (ndisWmiMapOids.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x1C002D8F4 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ndisQueryCustomGuids @ 0x1C002D9E8 (ndisQueryCustomGuids.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_GUID *v2; // rsi
  __int64 v3; // r12
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rdx
  unsigned __int8 v5; // r9
  unsigned int v6; // eax
  PVOID v7; // r15
  unsigned int v8; // edi
  int v9; // r9d
  unsigned __int16 v10; // ax
  int v11; // r9d
  unsigned __int16 v12; // ax
  int v13; // r9d
  __int16 v14; // di
  unsigned __int16 v15; // di
  int *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 Pool2; // rax
  void *v20; // r14
  unsigned __int16 v21; // r10
  _DWORD *v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  unsigned __int16 v25; // ax
  int v26; // r9d
  unsigned __int16 v27; // ax
  int v28; // r9d
  __int64 v29; // r9
  _GUID *v30; // rax
  _NDIS_GUID *v31; // rcx
  _GUID v32; // xmm1
  _GUID v33; // xmm0
  _GUID v34; // xmm1
  _GUID v35; // xmm0
  _GUID v36; // xmm1
  _GUID v37; // xmm0
  _GUID v38; // xmm1
  _GUID v39; // xmm0
  _GUID v40; // xmm1
  __int64 v41; // rax
  _NDIS_GUID *v42; // rdi
  int v44; // r8d
  __int64 v45; // xmm1_8
  __int64 v46; // rdx
  unsigned int v47; // eax
  struct _GUID *v48; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v49; // [rsp+28h] [rbp-D8h]
  __int64 v50; // [rsp+30h] [rbp-D0h]
  unsigned int v51; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v52; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h]
  struct _NDIS_OID_REQUEST v55; // [rsp+70h] [rbp-90h] BYREF

  v51 = 0;
  v52 = 0;
  P = 0LL;
  v2 = 0LL;
  Src = 0LL;
  memset(&v55.Header.Revision, 0, 0xF7uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v49 = (struct _NDIS_FILTER_BLOCK *)a1;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x12u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids);
  }
  memset(&v55, 0, 0xF8uLL);
  v3 = 8LL;
  *(_DWORD *)&v55.NdisReserved[16] |= 8u;
  *(_QWORD *)&v55.NdisReserved[32] = &ndisIntReqWmi;
  EtwActivityIdControl(3u, (LPGUID)&v55.NdisReserved[96]);
  *(_QWORD *)&v55.Header.Type = 15466902LL;
  v55.DATA.QUERY_INFORMATION.Oid = 65793;
  v55.PortNumber = 0;
  v55.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v55.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  v6 = ndisQuerySetMiniportEx2(a1, v4, &v55, v5, (struct _NDIS_FILTER_BLOCK *)v48, v49, 0x3277444Eu, &P, &v52, &v51);
  v7 = P;
  v8 = v6;
  if ( v6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x12u,
        0x13u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
  }
  else
  {
    v9 = (unsigned __int16)(v51 >> 2);
    v51 >>= 2;
    v10 = ndisWmiMapOids(0, 0, (_DWORD)P, v9, (__int64)&ndisSupportedGuids, 82);
    v12 = ndisWmiMapOids(0, v10, (_DWORD)v7, v11, (__int64)&ndisCoSupportedGuids, 16);
    v14 = ndisWmiMapOids(0, v12, (_DWORD)v7, v13, (__int64)&ndisMediaSupportedGuids, 49);
    ndisQueryCustomGuids(a1, &v55);
    v15 = v14 + 38;
    v16 = (int *)&unk_1C015E038;
    v17 = 82LL;
    do
    {
      v18 = *v16;
      if ( (*v16 & 0x20000000) != 0
        && ((v18 & 0x1000000) == 0 || a1->NDKBlock)
        && ((v18 & 0x10000000) == 0 || (a1->Flags & 0x20000) != 0) )
      {
        ++v15;
      }
      v16 += 7;
      --v17;
    }
    while ( v17 );
    Pool2 = ExAllocatePool2(64LL, 28LL * v15, 829899854);
    v20 = Src;
    v2 = (_NDIS_GUID *)Pool2;
    if ( Pool2 )
    {
      v21 = 0;
      v22 = &ndisSupportedGuids;
      v23 = 82LL;
      do
      {
        v24 = v22[6];
        if ( (v24 & 0x20000000) != 0 && ((v24 & 0x1000000) == 0 || a1->NDKBlock) )
        {
          v44 = a1->Flags & 0x20000;
          if ( v44 || (v24 & 0x10000000) == 0 )
          {
            v45 = *((_QWORD *)v22 + 2);
            v46 = v21;
            v47 = v22[6];
            v2[v46].Guid = *(_GUID *)v22;
            *(_QWORD *)&v2[v46].Oid = v45;
            v2[v46].Flags = v47;
            if ( v44 )
              v2[v46].Flags |= 0x10000000u;
            ++v21;
          }
        }
        v22 += 7;
        --v23;
      }
      while ( v23 );
      v25 = ndisWmiMapOids((_DWORD)v2, v21, (_DWORD)v7, (unsigned __int16)v51, (__int64)&ndisSupportedGuids, 82);
      v27 = ndisWmiMapOids((_DWORD)v2, v25, (_DWORD)v7, v26, (__int64)&ndisCoSupportedGuids, 16);
      v29 = (unsigned __int16)ndisWmiMapOids((_DWORD)v2, v27, (_DWORD)v7, v28, (__int64)&ndisMediaSupportedGuids, 49);
      v30 = (_GUID *)&ndisStatusSupportedGuids;
      v31 = &v2[v29];
      do
      {
        v32 = v30[1];
        v31->Guid = *v30;
        v33 = v30[2];
        *(_GUID *)&v31->Oid = v32;
        v34 = v30[3];
        *(_GUID *)&v31[1].Guid.Data2 = v33;
        v35 = v30[4];
        *(_GUID *)&v31[1].Size = v34;
        v36 = v30[5];
        *(_GUID *)v31[2].Guid.Data4 = v35;
        v37 = v30[6];
        *(_GUID *)&v31[2].Flags = v36;
        v38 = v30[7];
        v30 += 8;
        *(_GUID *)&v31[3].Guid.Data4[4] = v37;
        v31 = (_NDIS_GUID *)((char *)v31 + 128);
        *(_GUID *)&v31[-1].Guid.Data4[4] = v38;
        --v3;
      }
      while ( v3 );
      v39 = *v30;
      v40 = v30[1];
      v41 = *(_QWORD *)&v30[2].Data1;
      a1->pNdisGuidMap = v2;
      a1->cNdisGuidMap = v15;
      v31->Guid = v39;
      *(_GUID *)&v31->Oid = v40;
      *(_QWORD *)&v31[1].Guid.Data2 = v41;
      if ( v20 )
      {
        v42 = &v2[(unsigned __int16)(v29 + 38)];
        memmove(v42, v20, 0LL);
        a1->cCustomGuidMap = 0;
      }
      else
      {
        a1->cCustomGuidMap = 0;
        v42 = 0LL;
      }
      a1->pCustomGuidMap = v42;
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v50) = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x14u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v50);
  }
  return v8;
}
