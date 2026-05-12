/*
 * XREFs of sub_1C004F920 @ 0x1C004F920
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C000B604 @ 0x1C000B604 (sub_1C000B604.c)
 *     sub_1C004AF6C @ 0x1C004AF6C (sub_1C004AF6C.c)
 *     sub_1C004DC78 @ 0x1C004DC78 (sub_1C004DC78.c)
 *     sub_1C004FA08 @ 0x1C004FA08 (sub_1C004FA08.c)
 */

void __fastcall sub_1C004F920(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h]
  char v6; // [rsp+28h] [rbp-30h]
  char v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+38h] [rbp-20h]

  if ( sub_1C0008B84(Context) )
  {
    if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v8 = *(_BYTE *)(Context + 98);
      v7 = *(_BYTE *)(Context + 97);
      v6 = *(_BYTE *)(Context + 96);
      v5 = *(_DWORD *)(v4 + 56);
      sub_1C004AF6C(v4, v2, v3, **(_QWORD **)(Context + 1792), v5, v6, v7, v8);
    }
    sub_1C000B604(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 872) = 0;
    if ( *(_DWORD *)(Context + 976) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
      *(_BYTE *)(Context + 1782) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) & 4) != 0 )
    {
      if ( sub_1C0004890(Context, 5) )
        sub_1C004DC78(Context);
    }
    sub_1C004FA08((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
  }
}
