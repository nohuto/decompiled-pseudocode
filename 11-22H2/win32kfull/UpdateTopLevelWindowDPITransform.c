/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C00D1B64
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C00F388C (GetMonitorTransform.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

void __fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 )
    goto LABEL_2;
  memset_0(v9, 0, sizeof(v9));
  if ( !(unsigned int)GetMonitorTransform(a2, a1, v9) )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 216) )
    *(_QWORD *)(a1 + 216) = Win32AllocPoolWithQuotaZInit(64LL, 2020438869LL);
  v5 = *(_OWORD **)(a1 + 216);
  if ( v5 )
  {
    v6 = v9[1];
    *v5 = v9[0];
    v7 = v9[2];
    v5[1] = v6;
    v8 = v9[3];
    v5[2] = v7;
    v5[3] = v8;
  }
  else
  {
LABEL_2:
    v4 = *(void **)(a1 + 216);
    if ( v4 )
    {
      Win32FreePool(v4);
      *(_QWORD *)(a1 + 216) = 0LL;
    }
  }
}
