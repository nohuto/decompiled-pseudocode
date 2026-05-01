/*
 * XREFs of HamSetCommitProperties @ 0x18001DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180019AB4 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall HamSetCommitProperties(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v5; // r11
  _QWORD *v6; // r10
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r8
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v5 = a2;
  v6 = a1;
  if ( !a2 )
    return (unsigned int)-1073741584;
  if ( !a3 )
    return (unsigned int)-1073741583;
  if ( a2 > a3 )
    return (unsigned int)-1073741776;
  if ( a2 == -1LL )
  {
    a1[41] = -1LL;
    a1[42] = -1LL;
    a1[36] = 0LL;
LABEL_11:
    v6[44] = a3;
    v6[43] = v5;
    *((_DWORD *)v6 + 74) |= 4u;
    v6[40] |= 0xFuLL;
    return v3;
  }
  if ( (int)RtlULongLongMult(a2, 0x5AuLL, &v11) >= 0 )
  {
    *(_QWORD *)(v7 + 336) = v11 / 0x64;
    RtlULongLongMult(v8, 0x32uLL, &v11);
    v9 = v11 / 0x64;
    v6[41] = v11 / 0x64;
    v6[36] = v9;
    goto LABEL_11;
  }
  return (unsigned int)-1073741584;
}
