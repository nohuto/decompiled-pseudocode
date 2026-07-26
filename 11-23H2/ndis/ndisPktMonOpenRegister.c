/*
 * XREFs of ndisPktMonOpenRegister @ 0x1C0111DC0
 * Callers:
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1C009277C (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C34C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     PktMonClientComponentRegister @ 0x1C001C4E4 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x1C001C568 (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00D2FC4 (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00D328C (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonOpenRegister(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbp
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  char v11[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+60h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (_QWORD *)(a1 + 920);
  v14 = *(_DWORD *)L"r";
  v12[1] = &v13;
  v4 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)L"Lower";
  v12[0] = 786442LL;
  v11[0] = 1;
  v5 = PktMonClientComponentRegister(a1 + 920, v1 + 808, v1 + 72, 4u, *(_DWORD *)(v4 + 464));
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 10;
LABEL_4:
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v6,
        (struct _GUID *)&WPP_b2cca5c6588f3b2dc2e7cb6c7c071de2_Traceguids,
        a1,
        v5);
    }
  }
  else
  {
    v5 = PktMonClientSetCompProperty((__int64)v2, 9, (__int64)v11, 1u);
    if ( v5 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v6 = 11;
      goto LABEL_4;
    }
    v5 = PktMonClientSetCompProperty((__int64)v2, 2, *(_QWORD *)(a1 + 16) + 4056LL, 4u);
    if ( v5 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v6 = 12;
      goto LABEL_4;
    }
    v10 = 0;
    if ( *(_DWORD *)(a1 + 248) )
    {
      while ( 1 )
      {
        v5 = PktMonClientSetCompProperty((__int64)v2, 7, a1 + 2 * (v10 + 126LL), 2u);
        if ( v5 )
          break;
        if ( ++v10 >= *(_DWORD *)(a1 + 248) )
          goto LABEL_16;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v6 = 13;
      goto LABEL_4;
    }
LABEL_16:
    v5 = PktMonClientAddEdge((__int64)v2, (__int64)v12, v8, v9, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL), a1 + 984);
    if ( !v5 )
      return v5;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 14;
      goto LABEL_4;
    }
  }
LABEL_5:
  PktMonClientComponentUnregister(v2);
  return v5;
}
