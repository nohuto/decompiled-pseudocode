/*
 * XREFs of sub_140616490 @ 0x140616490
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_140616490(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        ULONG_PTR **BugCheckParameter2,
        unsigned int a8,
        int a9,
        unsigned __int64 *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r15
  int v19; // eax
  __int64 v20; // rax
  __int64 *i; // r14
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 *v24; // rbx
  _QWORD v25[10]; // [rsp+58h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+2Fh]

  memset(v25, 0, sizeof(v25));
  v18 = sub_140604844(314);
  if ( !v18 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v18 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v19 = *((_DWORD *)v18 + 3);
  if ( (v19 & 0x18) == 0 )
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v20 = sub_140628C98(v15, v14, v16, v17);
    goto LABEL_12;
  }
  v20 = retaddr;
LABEL_12:
  v25[0] = v20;
LABEL_13:
  v25[4] = __PAIR64__(a5, a6);
  v25[3] = BugCheckParameter2;
  v25[2] = __PAIR64__(a8, a9);
  v25[1] = a10;
  v25[8] = a1;
  v25[7] = a2;
  v25[6] = a3;
  v25[5] = a4;
  for ( i = (__int64 *)v18[4]; i != v18 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v25, v14);
  }
LABEL_18:
  result = MmAllocateContiguousMemoryEx(a1, a2, a3, a4, a5, a6, BugCheckParameter2, a8, a9, a10);
  LODWORD(v25[9]) = result;
  if ( v18 )
  {
    v24 = (__int64 *)v18[6];
    if ( v24 != v18 + 6 )
    {
      do
      {
        if ( v24 != (__int64 *)16 )
          sub_14042A5E0(v25, v23);
        v24 = (__int64 *)*v24;
      }
      while ( v24 != v18 + 6 );
      return LODWORD(v25[9]);
    }
  }
  return result;
}
