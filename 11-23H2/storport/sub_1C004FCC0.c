/*
 * XREFs of sub_1C004FCC0 @ 0x1C004FCC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C000B604 @ 0x1C000B604 (sub_1C000B604.c)
 *     sub_1C004B034 @ 0x1C004B034 (sub_1C004B034.c)
 *     sub_1C004DC78 @ 0x1C004DC78 (sub_1C004DC78.c)
 *     sub_1C004FE34 @ 0x1C004FE34 (sub_1C004FE34.c)
 */

void __fastcall sub_1C004FCC0(char *Context)
{
  __int64 *v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  char v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+38h] [rbp-20h]

  if ( sub_1C0008B84((__int64)Context) )
  {
    v2 = (__int64 *)(Context + 24);
    if ( *((_QWORD *)Context + 259) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 0x20) != 0 || (*(_BYTE *)(*v2 + 108) & 1) != 0 )
      {
        v3 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)Context + 259);
        *((_QWORD *)Context + 260) += v3 / 0x2710;
        if ( v3 / 0x2710 >= 0x2710 )
          ++*((_DWORD *)Context + 530);
        if ( !*((_QWORD *)Context + 256) )
          *((_QWORD *)Context + 256) = *(_QWORD *)(*v2 + 5152);
      }
      *((_QWORD *)Context + 259) = 0LL;
    }
    ++*((_DWORD *)Context + 528);
    if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    {
      v9 = Context[98];
      v8 = Context[97];
      v7 = Context[96];
      v6 = *(_DWORD *)(*v2 + 56);
      sub_1C004B034(*v2, &stru_1C0088BB0, (__int64)v2, **((_QWORD **)Context + 224), v6, v7, v8, v9);
    }
    sub_1C000B604((__int64)Context, 0);
    *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) |= 8u;
    v4 = *((_QWORD *)Context + 224);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 32) = v5 & 0xFFFFFFEF;
    else
      *((_DWORD *)Context + 218) = 1;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 4) != 0 )
    {
      if ( sub_1C0004890((__int64)Context, 5) )
        sub_1C004DC78((__int64)Context);
    }
    sub_1C004FE34(Context);
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
  }
}
