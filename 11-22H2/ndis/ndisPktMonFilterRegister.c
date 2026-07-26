/*
 * XREFs of ndisPktMonFilterRegister @ 0x1C0111CA4
 * Callers:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C0092494 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C000A4B0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     PktMonClientComponentRegister @ 0x1C001C354 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x1C001C3D8 (PktMonClientComponentUnregister.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C0022744 (-ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00D2FA4 (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00D326C (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonFilterRegister(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  unsigned int v2; // ebx
  int v4; // eax
  unsigned __int16 v5; // r9
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+40h] [rbp-19h] BYREF
  char v14[7]; // [rsp+41h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+Fh] BYREF
  int v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh] BYREF
  int v20; // [rsp+80h] [rbp+27h]

  v1 = (KSPIN_LOCK *)(a1 + 312);
  v2 = 0;
  v18 = *(_DWORD *)L"r";
  v17 = *(_QWORD *)L"Upper";
  v15[1] = &v17;
  v20 = *(_DWORD *)L"r";
  v16[1] = &v19;
  v15[0] = 786442LL;
  v19 = *(_QWORD *)L"Lower";
  v16[0] = 786442LL;
  v13 = 0;
  v14[0] = 1;
  if ( ndisReferenceRef((struct _REFERENCE_EX *)(a1 + 312), 0x18u) )
  {
    v4 = PktMonClientComponentRegister(
           a1 + 784,
           *(_QWORD *)(a1 + 16) + 344LL,
           *(_QWORD *)(a1 + 16) + 112LL,
           3u,
           *(_DWORD *)(a1 + 336));
    v2 = v4;
    if ( v4 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v5 = 22;
LABEL_5:
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          v5,
          (struct _GUID *)&WPP_3155975836c13457e86c838cef1b881a_Traceguids,
          a1,
          v4);
      }
    }
    else
    {
      v4 = PktMonClientSetCompProperty(a1 + 784, 9, (__int64)v14, 1u);
      v2 = v4;
      if ( v4 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 23;
        goto LABEL_5;
      }
      v4 = PktMonClientSetCompProperty(a1 + 784, 1, a1 + 680, 4u);
      v2 = v4;
      if ( v4 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 24;
        goto LABEL_5;
      }
      v4 = PktMonClientSetCompProperty(a1 + 784, 2, *(_QWORD *)(a1 + 32) + 4056LL, 4u);
      v2 = v4;
      if ( v4 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 25;
        goto LABEL_5;
      }
      v7 = *(_QWORD *)(a1 + 112);
      if ( v7 )
      {
        v4 = PktMonClientSetCompProperty(a1 + 784, 3, v7 + 680, 4u);
        v2 = v4;
        if ( v4 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v5 = 26;
          goto LABEL_5;
        }
      }
      if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)a1, 0x8000) )
      {
        v4 = PktMonClientSetCompProperty(a1 + 784, 5, a1 + 336, 4u);
        v2 = v4;
        if ( v4 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v5 = 27;
          goto LABEL_5;
        }
      }
      v10 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)(v10 + 208) && !*(_QWORD *)(v10 + 232) && !*(_QWORD *)(a1 + 584) && !*(_QWORD *)(a1 + 608) )
      {
        v13 = 1;
        v4 = PktMonClientSetCompProperty(a1 + 784, 8, (__int64)&v13, 1u);
        v2 = v4;
        if ( v4 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v5 = 28;
          goto LABEL_5;
        }
      }
      v4 = PktMonClientAddEdge(a1 + 784, (__int64)v15, v8, v9, *(_DWORD *)(a1 + 336), a1 + 888);
      v2 = v4;
      if ( v4 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 29;
        goto LABEL_5;
      }
      v4 = PktMonClientAddEdge(a1 + 784, (__int64)v16, v11, v12, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 1836LL), a1 + 848);
      v2 = v4;
      if ( !v4 )
        goto LABEL_7;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v5 = 30;
        goto LABEL_5;
      }
    }
LABEL_6:
    PktMonClientComponentUnregister((_QWORD *)(a1 + 784));
LABEL_7:
    ndisDereferenceRef(v1, 0x18u);
  }
  return v2;
}
