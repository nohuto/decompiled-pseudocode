/*
 * XREFs of ReadEnergyEquation @ 0x1C0048A8C
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0048B64 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0002FEC (RtlStringCopyWorkerW.c)
 *     RtlStringCchPrintfW @ 0x1C0003048 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     RtlStringCchCatW @ 0x1C000DD68 (RtlStringCchCatW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  signed int RegistryDwordValueNoDefault; // ebx
  size_t v5; // rdx
  __int64 v6; // rdx
  wchar_t *v7; // rax
  __int64 v8; // r8
  wchar_t *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  wchar_t v12; // r9
  wchar_t *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // esi
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v23[192]; // [rsp+1E0h] [rbp+E0h] BYREF

  LODWORD(cchToCopy) = a1;
  v20 = 0;
  v19 = 0;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\EnergyEquation",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"EquationIndex",
                                    (__int64)&v20);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v20);
      if ( RegistryDwordValueNoDefault >= 0 )
      {
        RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, pszSrc);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)pszDest,
                                          (__int64)L"NumberOfCounters",
                                          (__int64)&v19);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            if ( v19 )
            {
              if ( v19 <= 0x10 )
              {
                v6 = 192LL;
                v7 = pszDest;
                do
                {
                  if ( !*v7 )
                    break;
                  ++v7;
                  --v6;
                }
                while ( v6 );
                v8 = (192 - v6) & -(__int64)(v6 != 0);
                RegistryDwordValueNoDefault = v6 == 0 ? 0xC000000D : 0;
                if ( v6 )
                {
                  v9 = &pszDest[v8];
                  v10 = 192 - v8;
                  if ( v8 != 192 )
                  {
                    v11 = 2147483646LL;
                    v8 = (char *)L"\\EnergyCounter" - (char *)v9;
                    do
                    {
                      if ( !v11 )
                        break;
                      v12 = *(wchar_t *)((char *)v9 + v8);
                      if ( !v12 )
                        break;
                      *v9 = v12;
                      --v11;
                      ++v9;
                      --v10;
                    }
                    while ( v10 );
                  }
                  v13 = v9 - 1;
                  if ( v10 )
                    v13 = v9;
                  *v13 = 0;
                  RegistryDwordValueNoDefault = v10 == 0 ? 0x80000005 : 0;
                }
                if ( RegistryDwordValueNoDefault >= 0 )
                {
                  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v23, 0xC0uLL, (size_t *)v8, pszDest, cchToCopy);
                  if ( RegistryDwordValueNoDefault >= 0 )
                  {
                    v14 = v19;
                    v15 = a2 + 44;
                    v16 = 0;
                    if ( !v19 )
                    {
LABEL_32:
                      *(_DWORD *)(a2 + 40) = v14;
                      return (unsigned int)RegistryDwordValueNoDefault;
                    }
                    while ( 1 )
                    {
                      LODWORD(cchToCopya) = v16;
                      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v23, cchToCopya);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterId",
                                                      v15);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterType",
                                                      v15 + 4);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"Factor",
                                                      v15 + 8);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      v14 = v19;
                      ++v16;
                      v15 += 12LL;
                      if ( v16 >= v19 )
                        goto LABEL_32;
                    }
                  }
                }
              }
              else
              {
                RegistryDwordValueNoDefault = -2147483643;
              }
            }
            else
            {
              RegistryDwordValueNoDefault = -1073741807;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 40) = 0;
  memset((void *)(a2 + 44), 0, 0xC0uLL);
  return (unsigned int)RegistryDwordValueNoDefault;
}
