/*
 * XREFs of sub_140608F50 @ 0x140608F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

void __noreturn sub_140608F50()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 *i; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = sub_140604844(57);
  if ( !v2 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v1 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v2 + 3) & 0x20) != 0 )
      goto LABEL_13;
  }
  else
  {
    v5 = *((_DWORD *)v2 + 3);
    if ( (v5 & 0x18) != 0 )
    {
      v6 = retaddr;
LABEL_12:
      v10 = v6;
LABEL_13:
      v7 = v2 + 4;
      for ( i = (__int64 *)v2[4]; i != v7; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          sub_14042A5E0(&v10, v0);
      }
LABEL_18:
      ExRaiseDatatypeMisalignment();
    }
    if ( (v5 & 4) == 0 )
      goto LABEL_13;
  }
  v6 = sub_140628C98(v1, v0, v3, v4);
  goto LABEL_12;
}
