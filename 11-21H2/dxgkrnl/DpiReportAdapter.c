/*
 * XREFs of DpiReportAdapter @ 0x1C01FC5E0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02BD52C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C002CAF0 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer @ 0x1C005F99C (McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD *PoolWithTag; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(_QWORD, _QWORD, char *); // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  _DWORD v29[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = *(_DWORD *)(v3 + 2736);
    v5 = 1LL;
    if ( v4 )
      v5 = v4;
    v6 = (unsigned int)v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v5, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v3 + 2736) )
      {
        v18 = 0LL;
        do
        {
          PoolWithTag[v18] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 2728) + 8 * v18) + 64LL);
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < *(_DWORD *)(v3 + 2736) );
      }
      else
      {
        *PoolWithTag = v3;
      }
      v8 = PoolWithTag;
      do
      {
        memset(v29, 0, sizeof(v29));
        v10 = *v8;
        v29[1025] = *(_DWORD *)(*v8 + 500LL);
        v29[1026] = *(_DWORD *)(v10 + 504);
        LOBYTE(v29[1027]) = *(_BYTE *)(v10 + 508);
        v11 = (__int128 *)(v10 + 1112);
        v12 = *(_QWORD *)(v10 + 1112);
        if ( v12 )
        {
          v15 = v29;
          v9 = 2LL;
          do
          {
            v16 = *v11;
            v11 += 8;
            *v15 = v16;
            v15 += 8;
            *(v15 - 7) = *(v11 - 7);
            *(v15 - 6) = *(v11 - 6);
            *(v15 - 5) = *(v11 - 5);
            *(v15 - 4) = *(v11 - 4);
            *(v15 - 3) = *(v11 - 3);
            *(v15 - 2) = *(v11 - 2);
            *(v15 - 1) = *(v11 - 1);
            --v9;
          }
          while ( v9 );
          v29[1024] = 256;
        }
        v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v10 + 616);
        if ( v13 )
        {
          v17 = v13(*(_QWORD *)(v10 + 568), 0LL, (char *)v29 + (v12 != 0 ? 0x100 : 0));
          v14 = (unsigned int)(v17 + v29[1024]);
        }
        else
        {
          v14 = 0LL;
        }
        v29[1024] = v14;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v28) = *(_DWORD *)(v10 + 1140);
            LODWORD(v27) = *(_DWORD *)(v10 + 1136);
            LODWORD(v26) = *(_DWORD *)(v10 + 1132);
            LODWORD(v25) = *(_DWORD *)(v10 + 1128);
            LODWORD(v24) = *(_DWORD *)(v10 + 1124);
            LODWORD(v23) = *(_DWORD *)(v10 + 1120);
            LODWORD(v22) = LOBYTE(v29[1027]);
            LODWORD(v21) = v29[1026];
            LODWORD(v20) = v29[1025];
            LODWORD(v19) = v14;
            McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer(
              LOBYTE(v29[1027]),
              v14,
              v9,
              a2,
              v19,
              v29,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              *(_QWORD *)(a2 + 404));
          }
        }
        ++v8;
        --v6;
      }
      while ( v6 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      WdLogSingleEntry1(6LL, -1073741801LL);
    }
  }
}
