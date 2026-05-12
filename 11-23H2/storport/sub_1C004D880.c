/*
 * XREFs of sub_1C004D880 @ 0x1C004D880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004960 @ 0x1C0004960 (sub_1C0004960.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C004D914 @ 0x1C004D914 (sub_1C004D914.c)
 */

void __fastcall sub_1C004D880(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // al
  int v6; // edx
  __int64 v7; // r8

  v5 = sub_1C0008B84(a3);
  v6 = 0;
  if ( v5 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      v7 = *(_QWORD *)(a3 + 1792);
      LOBYTE(v6) = a1 == 1;
      if ( ((*(_DWORD *)(v7 + 32) >> 10) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFFFFBFF | (v6 << 10);
        if ( (*(_DWORD *)(*(_QWORD *)(a3 + 1792) + 32LL) & 0x100) != 0 )
        {
          sub_1C004D914(a3);
          sub_1C0004960(a3);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 1784));
  }
}
