/*
 * XREFs of sub_1402F8EF0 @ 0x1402F8EF0
 * Callers:
 *     sub_14023B484 @ 0x14023B484 (sub_14023B484.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 * Callees:
 *     sub_1402324B4 @ 0x1402324B4 (sub_1402324B4.c)
 *     sub_1402F9578 @ 0x1402F9578 (sub_1402F9578.c)
 */

char __fastcall sub_1402F8EF0(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  *a3 = 0;
  *a4 = 0LL;
  v5 = sub_1402F9578(a2);
  if ( v5 )
  {
    LOBYTE(v5) = sub_1402324B4(v5);
    if ( !(_BYTE)v5 )
      goto LABEL_12;
  }
  if ( !v6 )
    return v5;
  LOBYTE(v5) = sub_1402324B4(v6);
  if ( !(_BYTE)v5 )
    goto LABEL_12;
  if ( !v8 )
  {
    if ( !*(_DWORD *)(v9 + 8) )
      return v5;
    goto LABEL_12;
  }
  LODWORD(v5) = *(_DWORD *)(v9 + 8);
  if ( *(_DWORD *)(v8 + 8) < (unsigned int)v5
    || (LODWORD(v5) = *(_DWORD *)(v9 + 12), *(_DWORD *)(v8 + 12) < (unsigned int)v5) )
  {
LABEL_12:
    *a3 = 1;
    *v7 = v8;
  }
  return v5;
}
