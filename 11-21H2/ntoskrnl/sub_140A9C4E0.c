/*
 * XREFs of sub_140A9C4E0 @ 0x140A9C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

PVOID __fastcall sub_140A9C4E0(unsigned int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v6; // rcx

  if ( (dword_140C29FC0 & 8) != 0 )
  {
    if ( *((PVOID *)KeGetCurrentThread() + 23) == qword_140D06940 )
      sub_140A8C924(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 )
      sub_140A8C924(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  v6 = PoolType & 0xFFFFFFF7;
  if ( (PoolType & 8) == 0 )
    v6 = PoolType;
  if ( (qword_140D01450 & 0x400000) != 0 && (dword_140C29FC0 & 1) == 0 )
    return ExAllocatePoolWithQuotaTag((POOL_TYPE)v6, NumberOfBytes, Tag);
  LODWORD(v6) = v6 | 0x80;
  return (PVOID)sub_14042A5E0(v6, 0LL);
}
