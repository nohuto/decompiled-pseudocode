/*
 * XREFs of InitializeWow64OnBoot @ 0x14000E6B0
 * Callers:
 *     SmpInit @ 0x14000DDE0 (SmpInit.c)
 * Callees:
 *     CreateRegistryLinksForMachine @ 0x14000D180 (CreateRegistryLinksForMachine.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x140014B2B (__chkstk_0.c)
 */

__int64 InitializeWow64OnBoot()
{
  int RegistryLinksForMachine; // ecx
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  void *v4; // rsp
  int v5; // edx
  __int64 v6; // rdi
  unsigned __int16 *v7; // r8
  _DWORD v9[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v10; // [rsp+38h] [rbp+8h] BYREF

  v10 = 0LL;
  RegistryLinksForMachine = NtQuerySystemInformationEx(230LL, &v10, 8LL, 0LL, 0, v9);
  if ( RegistryLinksForMachine == -1073741789 )
  {
    v1 = v9[0] + 15LL;
    if ( v1 <= v9[0] )
      v1 = 0xFFFFFFFFFFFFFF0LL;
    v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = alloca(v2);
    v4 = alloca(v2);
    RegistryLinksForMachine = NtQuerySystemInformationEx(230LL, &v10, 8LL, v9, v9[0], v9);
    if ( RegistryLinksForMachine >= 0 )
    {
      v5 = v9[0];
      LODWORD(v6) = 0;
      if ( LOWORD(v9[0]) )
      {
        v7 = (unsigned __int16 *)v9;
        do
        {
          if ( (v5 & 0x20000) != 0 && (v5 & 0x40000) == 0 && (v5 & 0x100000) != 0 )
          {
            RegistryLinksForMachine = CreateRegistryLinksForMachine(*v7);
            if ( RegistryLinksForMachine < 0 )
              break;
          }
          v6 = (unsigned int)(v6 + 1);
          v7 = (unsigned __int16 *)&v9[v6];
          v5 = *(_DWORD *)v7;
        }
        while ( (unsigned __int16)*(_DWORD *)v7 );
      }
    }
  }
  return (unsigned int)RegistryLinksForMachine;
}
