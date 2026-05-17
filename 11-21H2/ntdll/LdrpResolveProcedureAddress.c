/*
 * XREFs of LdrpResolveProcedureAddress @ 0x18003B748
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DAC98 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18003B720 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x18007A3C8 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpCheckRedirection @ 0x1800E1248 (LdrpCheckRedirection.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  char ShouldModuleImportBeRedirected; // al
  int ProcedureAddress; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  int ForwardedDll; // ebx
  unsigned __int64 v18; // rdi
  unsigned int v20; // eax
  __int64 v21; // rax
  char v22; // [rsp+30h] [rbp-D0h]
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int128 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29[16]; // [rsp+70h] [rbp-90h] BYREF

  v6 = *(_QWORD *)(a2 + 80);
  v7 = a3;
  v27 = a2;
  v9 = a2;
  v26 = a1;
  v10 = a4;
  v25 = a3;
  v24 = a2;
  v23 = a4;
  v11 = 0;
  memset(v29, 0, sizeof(v29));
  v29[4] = v6;
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v22 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected )
    {
      if ( v7 )
      {
        v21 = LdrpCheckRedirection(v26, v9, v7);
        if ( v21 != -4530927 )
        {
          *a6 = v21;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v9 + 48), v7, v10, a6);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v20 = v11++;
    if ( v20 >= 0x20 || (a5 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_12;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a6, &v28, &v25, &v23);
    if ( ForwardedDll < 0 )
      goto LABEL_12;
    LODWORD(v29[3]) = *(_DWORD *)(v9 + 272);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)&v28, (unsigned int)v29, v27, v9, 2, (__int64)&v24);
    if ( ForwardedDll < 0 )
      goto LABEL_12;
    v9 = v24;
    LdrpDereferenceModule(v24, v14, v15, v16);
    ShouldModuleImportBeRedirected = v22;
    v7 = v25;
    v10 = v23;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      LOBYTE(v14) = 1;
      RtlGuardCheckImageBase(*(_QWORD *)(v9 + 184), v14);
    }
    else
    {
      v18 = *(_QWORD *)(v9 + 48);
      if ( qword_18018F3A8 && (byte_18018F38C & 1) == 0 )
      {
        if ( v18 < *((_QWORD *)&xmmword_18018F510 + 1)
          || v18 >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
        {
          RtlpxLookupFunctionTable(v18, (__int64 *)&v28);
        }
        else
        {
          v28 = xmmword_18018F510;
        }
        if ( *((_QWORD *)&v28 + 1) != v18 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_12:
  if ( BYTE4(v29[15]) )
    RtlReleasePath(v29[0], v14, v15, v16);
  if ( ForwardedDll < 0 )
    *a6 = 0LL;
  return (unsigned int)ForwardedDll;
}
