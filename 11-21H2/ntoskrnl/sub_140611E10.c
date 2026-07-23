/*
 * XREFs of sub_140611E10 @ 0x140611E10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

void __fastcall sub_140611E10(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 *i; // rdi
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v13 = 0LL;
  v4 = sub_140604844(229);
  if ( !v4 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)v4 + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v8 = sub_140628C98(v3, v2, v5, v6);
    goto LABEL_12;
  }
  v8 = retaddr;
LABEL_12:
  *(_QWORD *)&v13 = v8;
LABEL_13:
  *((_QWORD *)&v13 + 1) = FastMutex;
  for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v13, v2);
  }
LABEL_18:
  ExAcquireFastMutex(FastMutex);
  if ( v4 )
  {
    v11 = v4 + 6;
    for ( j = (__int64 *)v4[6]; j != v11; j = (__int64 *)*j )
    {
      if ( j != (__int64 *)16 )
        sub_14042A5E0(&v13, v10);
    }
  }
}
