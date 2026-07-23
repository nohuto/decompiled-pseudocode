/*
 * XREFs of sub_140616B60 @ 0x140616B60
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdl @ 0x1403D8690 (MmAllocatePagesForMdl.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

PMDL __fastcall sub_140616B60(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  int v13; // eax
  __int64 v14; // rax
  __int64 *i; // r14
  PMDL result; // rax
  __int64 v17; // rdx
  __int64 *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v12 = sub_140604844(319);
  if ( !v12 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v9 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v12 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v13 = *((_DWORD *)v12 + 3);
  if ( (v13 & 0x18) == 0 )
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v14 = sub_140628C98(v9, v8, v10, v11);
    goto LABEL_12;
  }
  v14 = retaddr;
LABEL_12:
  *(_QWORD *)&v19 = v14;
LABEL_13:
  *(PHYSICAL_ADDRESS *)&v21 = LowAddress;
  *((PHYSICAL_ADDRESS *)&v20 + 1) = HighAddress;
  *(PHYSICAL_ADDRESS *)&v20 = SkipBytes;
  *((_QWORD *)&v19 + 1) = TotalBytes;
  for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v19, v8);
  }
LABEL_18:
  result = MmAllocatePagesForMdl(LowAddress, HighAddress, SkipBytes, TotalBytes);
  *((_QWORD *)&v21 + 1) = result;
  if ( v12 )
  {
    v18 = (__int64 *)v12[6];
    if ( v18 != v12 + 6 )
    {
      do
      {
        if ( v18 != (__int64 *)16 )
          sub_14042A5E0(&v19, v17);
        v18 = (__int64 *)*v18;
      }
      while ( v18 != v12 + 6 );
      return (PMDL)*((_QWORD *)&v21 + 1);
    }
  }
  return result;
}
