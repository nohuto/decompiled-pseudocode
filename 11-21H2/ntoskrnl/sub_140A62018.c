/*
 * XREFs of sub_140A62018 @ 0x140A62018
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_140416FEC @ 0x140416FEC (sub_140416FEC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A62138 @ 0x140A62138 (sub_140A62138.c)
 */

void __fastcall sub_140A62018(int a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  PHYSICAL_ADDRESS v3; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp+18h] BYREF

  if ( (a1 & 0x20000) != 0 )
  {
    HighLimit = 0LL;
    LowLimit = 0LL;
    RtlClearAllBits(&stru_140C4A800);
    IoGetStackLimits(&LowLimit, &HighLimit);
    v1 = (char *)(LowLimit & 0xFFFFFFFFFFFFF000uLL);
    v2 = (HighLimit + 4095) & 0xFFFFFFFFFFFFF000uLL;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3.QuadPart = MmGetPhysicalAddress(v1).QuadPart >> 12;
      if ( v3.QuadPart < 0x100uLL )
        _bittestandset((signed __int32 *)stru_140C4A800.Buffer, v3.LowPart);
      v1 += 4096;
    }
    memset(byte_140C4A680, 0, sizeof(byte_140C4A680));
    for ( i = 0LL; i < 0x100; ++i )
    {
      if ( !_bittest((const signed __int32 *)stru_140C4A810.Buffer, i)
        && !_bittest((const signed __int32 *)stru_140C4A800.Buffer, i) )
      {
        v5 = sub_140416FEC(i << 12, 1LL, 0, 4LL);
        if ( v5 )
        {
          byte_140C4A680[i] = sub_140A62138(v5, v6, v7, v5);
          sub_1403BF310(v8, 1LL, 0LL);
        }
      }
    }
  }
}
