/*
 * XREFs of RtlpQueryProcessMachine @ 0x1800E484C
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x1800E42EC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A3C20 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A5E30 (_alloca_probe.c)
 */

__int64 __fastcall RtlpQueryProcessMachine(__int64 a1, _WORD *a2)
{
  unsigned int *v3; // rbx
  int SystemInformation; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  unsigned int v9; // edx
  __int64 v10; // r9
  __int64 v11; // r8
  __int16 v13; // ax
  unsigned int v14; // [rsp+30h] [rbp+0h] BYREF
  __int64 v15; // [rsp+38h] [rbp+8h]
  char v16; // [rsp+40h] [rbp+10h] BYREF

  v15 = a1;
  v14 = 20;
  v3 = (unsigned int *)&v16;
  SystemInformation = NtQuerySystemInformationEx();
  if ( SystemInformation == -1073741789 )
  {
    v5 = v14 + 15LL;
    if ( v5 <= v14 )
      v5 = 0xFFFFFFFFFFFFFF0LL;
    v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = alloca(v6);
    v8 = alloca(v6);
    v3 = &v14;
    SystemInformation = NtQuerySystemInformationEx();
  }
  if ( SystemInformation >= 0 )
  {
    v9 = *v3;
    LODWORD(v10) = 0;
    if ( !(unsigned __int16)*v3 )
      return (unsigned int)-1073741816;
    v11 = 0LL;
    while ( (v9 & 0x80000) == 0 )
    {
      v10 = (unsigned int)(v10 + 1);
      v11 = (unsigned int)v10;
      v9 = v3[v10];
      if ( !(_WORD)v9 )
        return (unsigned int)-1073741816;
    }
    v13 = v3[v11];
    if ( v13 )
      *a2 = v13;
    else
      return (unsigned int)-1073741816;
  }
  return (unsigned int)SystemInformation;
}
