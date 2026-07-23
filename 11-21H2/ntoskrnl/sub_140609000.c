/*
 * XREFs of sub_140609000 @ 0x140609000
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

void __fastcall __noreturn sub_140609000(NTSTATUS Status)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *i; // rbx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v11 = 0LL;
  v4 = sub_140604844(58);
  if ( !v4 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x20) != 0 )
      goto LABEL_13;
  }
  else
  {
    v7 = *((_DWORD *)v4 + 3);
    if ( (v7 & 0x18) != 0 )
    {
      v8 = retaddr;
LABEL_12:
      *(_QWORD *)&v11 = v8;
LABEL_13:
      v9 = v4 + 4;
      DWORD2(v11) = Status;
      for ( i = (__int64 *)v4[4]; i != v9; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          sub_14042A5E0(&v11, v2);
      }
LABEL_18:
      RtlRaiseStatus(Status);
    }
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
  }
  v8 = sub_140628C98(v3, v2, v5, v6);
  goto LABEL_12;
}
