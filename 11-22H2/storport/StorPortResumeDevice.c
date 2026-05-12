/*
 * XREFs of StorPortResumeDevice @ 0x1C0046DB0
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1C00B16D0 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     McTemplateK0pquuu_EtwWriteTransfer @ 0x1C0043EB0 (McTemplateK0pquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  int v7; // r14d
  _DWORD *Adapter; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 Unit; // rax
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  unsigned int v18; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  HIBYTE(v18) = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Adapter = RaidpPortGetAdapter(a1);
  v11 = (__int64)Adapter;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 17, retaddr, (__int64)Adapter, 0LL, v5 | (((v7 << 8) | v6) << 8), 0LL);
  v12 = 255LL;
  if ( v11 )
    v12 = *(unsigned int *)(v11 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LOBYTE(v17) = v6;
    LOBYTE(v16) = v7;
    LODWORD(v15) = v12;
    McTemplateK0pquuu_EtwWriteTransfer(v12, v9, v10, a1, v15, v16, v17, v5, 0);
  }
  if ( v11 )
  {
    LOBYTE(v18) = v7;
    BYTE1(v18) = v6;
    BYTE2(v18) = v5;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v16) = v5;
      LODWORD(v15) = v6;
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x12u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
        v7,
        v15,
        v16);
    }
    Unit = RaidAdapterFindUnit(v11, v18);
    if ( Unit )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1440), 134684676, 134684677) == 134684677
        && Unit != -1424 )
      {
        *(_DWORD *)(Unit + 1456) = 6;
        *(_DWORD *)(Unit + 1460) = v18;
        RaidQueueDeferredItem((char *)(v11 + 944), (struct _SLIST_ENTRY *)(Unit + 1424));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0092468 & 0x800) != 0 )
        DbgLogRequest(v11, 22, retaddr, 661LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
