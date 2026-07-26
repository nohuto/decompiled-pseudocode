/*
 * XREFs of ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x1C00960F4
 * Callers:
 *     ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00962C0 (-ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096360 (-ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCapabilities(struct _NDIS_REQ_TRACKER *a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 v6; // si
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_QWORD *)a1;
  v4 = *((_QWORD *)a1 + 4);
  v6 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v2,
      v4);
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0;
  if ( v7
    && (v9 = *(_QWORD *)(v7 + 24), *(_BYTE *)(v9 + 56) <= 6u)
    && (*(_BYTE *)(v9 + 56) != 6 || *(_BYTE *)(v9 + 57) < 0x14u)
    || (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    v8 = -1073741637;
  }
  else
  {
    v10 = 52;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v4 + 48) >= 0x34u )
    {
      if ( !*(_QWORD *)a1 )
      {
        v6 = 0;
        goto LABEL_20;
      }
      v11 = *(_QWORD *)(v4 + 40);
      if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
      {
        v13 = v2 + 1000;
        if ( !a2 )
          v13 = v2 + 1060;
        v10 = 60;
        *(_OWORD *)v11 = *(_OWORD *)v13;
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(v13 + 16);
        *(_OWORD *)(v11 + 32) = *(_OWORD *)(v13 + 32);
        *(_QWORD *)(v11 + 48) = *(_QWORD *)(v13 + 48);
        *(_DWORD *)(v11 + 56) = *(_DWORD *)(v13 + 56);
      }
      else
      {
        v12 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
        *(_OWORD *)v11 = *(_OWORD *)(v12 + v2 + 1060);
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + v2 + 1076);
        *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + v2 + 1092);
        *(_DWORD *)(v11 + 48) = *(_DWORD *)(v12 + v2 + 1108);
        *(_WORD *)(v11 + 2) = 52;
        *(_BYTE *)(v11 + 1) = 1;
      }
      *(_DWORD *)(v4 + 52) = v10;
      *(_DWORD *)(v4 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v4 + 56) = 52;
      v8 = -1073676268;
    }
  }
  *((_DWORD *)a1 + 10) = v8;
LABEL_20:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v2,
      v8,
      v6);
  return v6;
}
