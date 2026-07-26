/*
 * XREFs of ndisWmiRegister @ 0x1C0020268
 * Callers:
 *     ndisWMIDispatch @ 0x1C000F9B0 (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C002D1FC (ndisQuerySupportedGuidToOidList.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisWmiRegister(__int64 a1, __int64 a2, int *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // edi
  int v7; // ebx
  const void **v10; // r12
  int v12; // edx
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  int v15; // r15d
  unsigned int v16; // eax
  _DWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rcx
  const void **v26; // rax
  unsigned int v27; // ecx
  _OWORD *v28; // rbx
  __int128 *i; // rdx
  __int128 v30; // xmm0
  char *v31; // rbx
  char *v32; // rcx
  int v33; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v7 = 0;
  v33 = 0;
  v10 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x15u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  *a5 = 0;
  if ( a2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x12u,
        0x18u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    v5 = -1073741811;
  }
  else if ( !*(_QWORD *)(a1 + 1368) && (unsigned int)ndisQuerySupportedGuidToOidList(a1) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x16u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    v5 = -1073741823;
  }
  else
  {
    v12 = *(unsigned __int16 *)(a1 + 1388);
    if ( (_WORD)v12 )
    {
      v24 = *(_QWORD *)(a1 + 3760);
      v25 = *(_QWORD *)(v24 + 32);
      v26 = (const void **)(v24 + 48);
      v10 = (const void **)(v25 + 8);
      if ( !v25 )
        v10 = v26;
      v7 = 32 * v12 + 58 + *(unsigned __int16 *)v10;
      v33 = v7;
    }
    else
    {
      v12 = 0;
    }
    v13 = *(unsigned __int16 *)(a1 + 1386) - v12;
    v14 = (v7 + 7) & 0xFFFFFFF8;
    v15 = 32 * v13 + 24;
    v16 = v15 + v14;
    if ( v15 + v14 < v14 )
    {
      v5 = -1073741823;
    }
    else if ( a4 < v16 )
    {
      *a3 = v16;
      v5 = -1073741789;
      *a5 = 4;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x12u,
        0x17u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    }
    else
    {
      *a5 = v16;
      memset(a3, 0, v16);
      if ( v14 && v10 )
      {
        v27 = 0;
        a3[1] = v14;
        v28 = a3 + 6;
        *a3 = v33;
        a3[4] = *(unsigned __int16 *)(a1 + 1388);
        for ( i = *(__int128 **)(a1 + 1376); v27 < *(unsigned __int16 *)(a1 + 1388); v28 += 2 )
        {
          v30 = *i;
          ++v27;
          i = (__int128 *)((char *)i + 28);
          *v28 = v30;
        }
        a3[2] = (_DWORD)v28 - (_DWORD)a3;
        *(_WORD *)v28 = *(_WORD *)v10;
        v31 = (char *)v28 + 2;
        memmove(v31, v10[1], *(unsigned __int16 *)v10);
        v32 = &v31[*(unsigned __int16 *)v10];
        a3[3] = (_DWORD)v31 + *(unsigned __int16 *)v10 - (_DWORD)a3;
        *(_WORD *)v32 = 30;
        *(_OWORD *)(v32 + 2) = *(_OWORD *)L"NdisMofResource";
        *(_QWORD *)(v32 + 18) = *(_QWORD *)L"esource";
        *(_DWORD *)(v32 + 26) = *(_DWORD *)L"rce";
        *((_WORD *)v32 + 15) = aNdismofresourc[14];
        a3 = (int *)((char *)a3 + (unsigned int)a3[1]);
      }
      *a3 = v15;
      v17 = a3 + 6;
      a3[1] = 0;
      a3[4] = v13;
      v18 = *(_QWORD **)(a1 + 1368);
      if ( v13 )
      {
        v19 = v13;
        do
        {
          v20 = *v18 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
          if ( *v18 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
            v20 = v18[1] - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
          if ( !v20 )
            goto LABEL_30;
          v21 = *v18 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
          if ( *v18 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
            v21 = v18[1] - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
          if ( !v21 )
            goto LABEL_30;
          v22 = *v18 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
          if ( *v18 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
            v22 = v18[1] - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
          if ( !v22 )
          {
LABEL_30:
            *((_QWORD *)v17 + 3) = *(_QWORD *)(a1 + 3832);
            v17[4] = 32;
            v17[5] = 1;
          }
          v23 = *(_OWORD *)v18;
          v18 = (_QWORD *)((char *)v18 + 28);
          *(_OWORD *)v17 = v23;
          v17 += 8;
          --v19;
        }
        while ( v19 );
      }
      *((_QWORD *)a3 + 1) = 0LL;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x19u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1,
      v5);
  return v5;
}
