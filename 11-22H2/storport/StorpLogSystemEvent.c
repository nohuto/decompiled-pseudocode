/*
 * XREFs of StorpLogSystemEvent @ 0x1C0049540
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     StorCreateSystemLogEntry @ 0x1C005C024 (StorCreateSystemLogEntry.c)
 */

__int64 __fastcall StorpLogSystemEvent(__int64 a1, __int64 a2)
{
  _DWORD *Adapter; // rdi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // ebp
  int v9; // r14d
  __int64 Unit; // rax
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+58h] [rbp+10h]

  HIBYTE(v14) = 0;
  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( *(_DWORD *)(a2 + 40) && !*(_QWORD *)(a2 + 48) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) )
    return 3238002694LL;
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  if ( KeGetCurrentIrql() > 2u )
    return 3238002696LL;
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 3238002694LL;
    }
    else
    {
      v7 = *(unsigned __int8 *)(a2 + 16);
      v8 = *(unsigned __int8 *)(a2 + 20);
      v9 = *(unsigned __int8 *)(a2 + 24);
      LOBYTE(v14) = *(_BYTE *)(a2 + 16);
      BYTE1(v14) = *(_BYTE *)(a2 + 20);
      BYTE2(v14) = *(_BYTE *)(a2 + 24);
      Unit = RaidAdapterFindUnit((__int64)Adapter, v14);
      if ( Unit )
      {
        v11 = *(void **)(Unit + 8);
        return StorCreateSystemLogEntry(v11);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        v13 = v9;
        v12 = v8;
        WPP_SF_DDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
          v7,
          v12,
          v13);
      }
    }
  }
  v11 = (void *)*((_QWORD *)Adapter + 1);
  return StorCreateSystemLogEntry(v11);
}
