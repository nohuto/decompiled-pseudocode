/*
 * XREFs of sub_1C004EDF0 @ 0x1C004EDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C000B604 @ 0x1C000B604 (sub_1C000B604.c)
 *     sub_1C004B034 @ 0x1C004B034 (sub_1C004B034.c)
 *     sub_1C004DC78 @ 0x1C004DC78 (sub_1C004DC78.c)
 *     sub_1C004F060 @ 0x1C004F060 (sub_1C004F060.c)
 *     sub_1C0074A08 @ 0x1C0074A08 (sub_1C0074A08.c)
 */

void __fastcall sub_1C004EDF0(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  char v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+38h] [rbp-20h]

  if ( sub_1C0008B84(Context) )
  {
    v4 = *(_QWORD *)(Context + 1792);
    if ( (*(_DWORD *)(v4 + 32) & 0x300) == 0x300 )
    {
      if ( (*(_BYTE *)(Context + 451) & 4) == 0 )
        sub_1C0074A08(Context);
      PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1792), v2, v3);
    }
    else
    {
      if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(Context + 24);
        v9 = *(_BYTE *)(Context + 98);
        v8 = *(_BYTE *)(Context + 97);
        v7 = *(_BYTE *)(Context + 96);
        v6 = *(_DWORD *)(v5 + 56);
        sub_1C004B034(v5, &stru_1C0088BA0, v3, *(_QWORD *)v4, v6, v7, v8, v9);
      }
      sub_1C000B604(Context, 0);
      *(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) &= ~8u;
      *(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) &= ~0x10u;
      if ( *(_DWORD *)(Context + 976) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
        *(_BYTE *)(Context + 1782) = 0;
      if ( sub_1C0004890(Context, 5) )
        sub_1C004DC78(Context);
      sub_1C004F060((PVOID)Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
    }
  }
}
