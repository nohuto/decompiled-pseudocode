/*
 * XREFs of sub_14082CE58 @ 0x14082CE58
 * Callers:
 *     sub_14082CDB4 @ 0x14082CDB4 (sub_14082CDB4.c)
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14082CE58(int a1, __int64 a2)
{
  char v2; // r9
  __int64 v3; // rax
  char *i; // r8
  __int64 v5; // xmm0_8
  int v6; // eax

  v2 = 0;
  v3 = 0LL;
  for ( i = byte_140A3BFC0; *(_DWORD *)i != a1; i += 12 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x33 )
      return v2;
  }
  v2 = 1;
  v5 = *(_QWORD *)&byte_140A3BFC0[12 * v3];
  v6 = *(_DWORD *)&byte_140A3BFC0[12 * v3 + 8];
  *(_QWORD *)a2 = v5;
  *(_DWORD *)(a2 + 8) = v6;
  return v2;
}
