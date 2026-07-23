/*
 * XREFs of sub_1406169F0 @ 0x1406169F0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

PMDL __fastcall sub_1406169F0(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  unsigned __int128 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r15
  int v14; // eax
  __int64 v15; // rax
  __int64 *i; // r14
  PMDL result; // rax
  __int64 v18; // rdx
  __int64 *v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h]
  unsigned __int128 v22; // [rsp+50h] [rbp-20h]
  PMDL v23; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v23 = 0LL;
  v20 = 0LL;
  v8 = __PAIR128__(LowAddress.QuadPart, HighAddress.QuadPart);
  v21 = 0LL;
  v22 = 0LL;
  v13 = sub_140604844(320);
  if ( !v13 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v10 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v13 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v14 = *((_DWORD *)v13 + 3);
  if ( (v14 & 0x18) == 0 )
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v15 = sub_140628C98(v10, v9, v11, v12);
    goto LABEL_12;
  }
  v15 = retaddr;
LABEL_12:
  *(_QWORD *)&v20 = v15;
LABEL_13:
  *((_QWORD *)&v20 + 1) = __PAIR64__(CacheType, Flags);
  v22 = v8;
  *((PHYSICAL_ADDRESS *)&v21 + 1) = SkipBytes;
  *(_QWORD *)&v21 = TotalBytes;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v20, v9);
  }
LABEL_18:
  result = MmAllocatePagesForMdlEx(
             *(PHYSICAL_ADDRESS *)((char *)&v8 + 8),
             *(PHYSICAL_ADDRESS *)&v8,
             SkipBytes,
             TotalBytes,
             CacheType,
             Flags);
  v23 = result;
  if ( v13 )
  {
    v19 = (__int64 *)v13[6];
    if ( v19 != v13 + 6 )
    {
      do
      {
        if ( v19 != (__int64 *)16 )
          sub_14042A5E0(&v20, v18);
        v19 = (__int64 *)*v19;
      }
      while ( v19 != v13 + 6 );
      return v23;
    }
  }
  return result;
}
