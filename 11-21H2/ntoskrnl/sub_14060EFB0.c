/*
 * XREFs of sub_14060EFB0 @ 0x14060EFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoGetConfigurationInformation @ 0x140811D00 (IoGetConfigurationInformation.c)
 */

PCONFIGURATION_INFORMATION sub_14060EFB0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rax
  __int64 *i; // rdi
  PCONFIGURATION_INFORMATION result; // rax
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v12 = 0LL;
  v2 = sub_140604844(164);
  if ( !v2 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v1 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v2 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v5 = *((_DWORD *)v2 + 3);
  if ( (v5 & 0x18) == 0 )
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v6 = sub_140628C98(v1, v0, v3, v4);
    goto LABEL_12;
  }
  v6 = retaddr;
LABEL_12:
  *(_QWORD *)&v12 = v6;
LABEL_13:
  for ( i = (__int64 *)v2[4]; i != v2 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v12, v0);
  }
LABEL_18:
  result = IoGetConfigurationInformation();
  *((_QWORD *)&v12 + 1) = result;
  if ( v2 )
  {
    v10 = v2 + 6;
    v11 = (__int64 *)v2[6];
    if ( v11 != v10 )
    {
      do
      {
        if ( v11 != (__int64 *)16 )
          sub_14042A5E0(&v12, v9);
        v11 = (__int64 *)*v11;
      }
      while ( v11 != v10 );
      return (PCONFIGURATION_INFORMATION)*((_QWORD *)&v12 + 1);
    }
  }
  return result;
}
