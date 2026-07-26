/*
 * XREFs of ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AED54
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0058C80 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C008B390 (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETR.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C00AD244 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C00AFBA0 (WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD.c)
 *     WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C00B00C4 (WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI.c)
 *     WPP_RECORDER_SF__guid_ZDIDIII @ 0x1C00B06A0 (WPP_RECORDER_SF__guid_ZDIDIII.c)
 */

void __fastcall ndisTraceNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // r14
  struct _NDIS_NAPS_TELEMETRY_OID_DATA *v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char *v8; // rsi
  unsigned int v9; // r15d
  unsigned __int16 *v10; // r14
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-180h]
  unsigned int v15; // [rsp+20h] [rbp-180h]
  bool v16; // [rsp+38h] [rbp-168h]
  unsigned int v17; // [rsp+48h] [rbp-158h]
  unsigned int v18; // [rsp+120h] [rbp-80h]
  unsigned __int64 v19; // [rsp+128h] [rbp-78h]
  _GUID *p_InterfaceGuid; // [rsp+128h] [rbp-78h]
  unsigned __int64 v21; // [rsp+130h] [rbp-70h]
  struct _NDIS_SELECTIVE_SUSPEND *v22; // [rsp+138h] [rbp-68h]
  __int64 v23; // [rsp+148h] [rbp-58h]
  _QWORD v25[16]; // [rsp+160h] [rbp-40h] BYREF

  if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    v22 = SelectiveSuspend;
    if ( SelectiveSuspend )
    {
      v4 = (struct _NDIS_SELECTIVE_SUSPEND *)((char *)SelectiveSuspend + 1520);
      memset(v25, 0, sizeof(v25));
      v5 = *((_QWORD *)SelectiveSuspend + 84) - *((_QWORD *)SelectiveSuspend + 89);
      v6 = (unsigned __int128)((__int64)(MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 91))
                             * (__int128)0x346DC5D63886594BLL) >> 64;
      v23 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 91)) / 10000LL;
      v21 = *((_QWORD *)SelectiveSuspend + 86) - *((_QWORD *)SelectiveSuspend + 90);
      v7 = (unsigned int)(*((_DWORD *)SelectiveSuspend + 161) - *((_DWORD *)SelectiveSuspend + 176));
      v18 = v7;
      v19 = *((_QWORD *)SelectiveSuspend + 83);
      if ( (unsigned int)v7 > 1 )
      {
        v6 = (v5 + ((unsigned __int64)(unsigned int)v7 >> 1)) % v7;
        v5 = (v5 + ((unsigned __int64)(unsigned int)v7 >> 1)) / v7;
      }
      v8 = (char *)SelectiveSuspend + 736;
      v9 = 0;
      v10 = (unsigned __int16 *)((char *)SelectiveSuspend + 736);
      do
      {
        if ( *v10 + v10[1] )
          ndisNicAutoPowerInsertIntoSortedArray((unsigned __int16 *)&v8[16 * v9], v6, (unsigned __int16 *)v25);
        ++v9;
        v10 += 8;
      }
      while ( v9 < 0x31 );
      NdisTraceLoggingNicAutoPowerSaver(
        a1,
        a2,
        v23,
        v21,
        v18,
        v5,
        v19,
        v16,
        (struct _NDIS_NAPS_TELEMETRY_REASON_DATA *)v25,
        v17,
        v4);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
        p_InterfaceGuid = &a1->InterfaceGuid;
      }
      else
      {
        if ( a2 )
          LODWORD(v13) = 0;
        else
          v13 = *((_QWORD *)a1->AoAc + 102) / 0x2710uLL;
        p_InterfaceGuid = &a1->InterfaceGuid;
        WPP_RECORDER_SF__guid_ZDIDIII(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          v11,
          v12,
          v14,
          (__int64)&a1->InterfaceGuid,
          (__int64)a1->pAdapterInstanceName,
          a2 == 0,
          v23,
          v18,
          v21,
          v5,
          v13);
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          LOWORD(v25[12]),
          WORD1(v25[10]),
          LOWORD(v25[10]),
          v14,
          (__int64)p_InterfaceGuid,
          (__int64)a1->pAdapterInstanceName,
          SBYTE4(v25[0]),
          v25[0],
          SBYTE2(v25[0]),
          v25[1],
          SBYTE4(v25[2]),
          v25[2],
          SBYTE2(v25[2]),
          v25[3],
          SBYTE4(v25[4]),
          v25[4],
          SBYTE2(v25[4]),
          v25[5],
          SBYTE4(v25[6]),
          v25[6],
          SBYTE2(v25[6]),
          v25[7],
          SBYTE4(v25[8]),
          v25[8],
          SBYTE2(v25[8]),
          v25[9],
          SBYTE4(v25[10]),
          v25[10],
          SBYTE2(v25[10]),
          v25[11],
          SBYTE4(v25[12]),
          v25[12],
          SBYTE2(v25[12]),
          v25[13]);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *((unsigned __int16 *)v22 + 797),
            *((unsigned __int16 *)v22 + 796),
            *((unsigned __int16 *)v22 + 791),
            v15,
            (__int64)p_InterfaceGuid,
            (__int64)a1->pAdapterInstanceName,
            *((_DWORD *)v22 + 382),
            *((_WORD *)v22 + 760),
            *((_WORD *)v22 + 761),
            *((_DWORD *)v22 + 385),
            *((_WORD *)v22 + 766),
            *((_WORD *)v22 + 767),
            *((_DWORD *)v22 + 388),
            *((_WORD *)v22 + 772),
            *((_WORD *)v22 + 773),
            *((_DWORD *)v22 + 391),
            *((_WORD *)v22 + 778),
            *((_WORD *)v22 + 779),
            *((_DWORD *)v22 + 394),
            *((_WORD *)v22 + 784),
            *((_WORD *)v22 + 785),
            *((_DWORD *)v22 + 397),
            *((_WORD *)v22 + 790),
            *((_WORD *)v22 + 791),
            *((_DWORD *)v22 + 400),
            *((_WORD *)v22 + 796),
            *((_WORD *)v22 + 797),
            *((_DWORD *)v22 + 403),
            *((_WORD *)v22 + 802),
            *((_WORD *)v22 + 803));
      }
    }
  }
}
