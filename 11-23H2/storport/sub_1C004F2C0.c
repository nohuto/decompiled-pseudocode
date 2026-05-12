/*
 * XREFs of sub_1C004F2C0 @ 0x1C004F2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C000B604 @ 0x1C000B604 (sub_1C000B604.c)
 *     sub_1C004B034 @ 0x1C004B034 (sub_1C004B034.c)
 *     sub_1C004DC78 @ 0x1C004DC78 (sub_1C004DC78.c)
 *     sub_1C004F478 @ 0x1C004F478 (sub_1C004F478.c)
 *     sub_1C0074A08 @ 0x1C0074A08 (sub_1C0074A08.c)
 */

void __fastcall sub_1C004F2C0(char *Context)
{
  __int64 v2; // r9
  int v3; // ecx
  __int64 *v4; // r8
  unsigned __int64 v5; // rcx

  if ( sub_1C0008B84((__int64)Context) )
  {
    v2 = *((_QWORD *)Context + 224);
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x300) == 0x300 )
    {
      if ( (Context[451] & 4) == 0 )
        sub_1C0074A08(Context);
      PoFxReportDevicePoweredOn(**((_QWORD **)Context + 224));
    }
    else
    {
      v4 = (__int64 *)(Context + 24);
      if ( *((_QWORD *)Context + 267) )
      {
        if ( (v3 & 0x80u) != 0 || (*(_BYTE *)(*v4 + 108) & 1) != 0 )
        {
          v5 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)Context + 267);
          *((_QWORD *)Context + 268) += v5 / 0x2710;
          if ( v5 / 0x2710 >= 0x2710 )
            ++*((_DWORD *)Context + 530);
          if ( !*((_QWORD *)Context + 266) )
            *((_QWORD *)Context + 266) = *(_QWORD *)(*v4 + 5152);
        }
        *((_QWORD *)Context + 267) = 0LL;
        v2 = *((_QWORD *)Context + 224);
      }
      ++*((_DWORD *)Context + 528);
      if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
        sub_1C004B034(
          *v4,
          &stru_1C0088F98,
          (__int64)v4,
          *(_QWORD *)v2,
          *(_DWORD *)(*v4 + 56),
          Context[96],
          Context[97],
          Context[98]);
      sub_1C000B604((__int64)Context, 0);
      *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) |= 8u;
      if ( sub_1C0004890((__int64)Context, 5) )
        sub_1C004DC78((__int64)Context);
      sub_1C004F478(Context);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
    }
  }
}
