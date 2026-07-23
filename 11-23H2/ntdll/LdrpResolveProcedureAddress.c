/*
 * XREFs of LdrpResolveProcedureAddress @ 0x180022920
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DA738 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpLoadForwardedDll @ 0x180018DF0 (LdrpLoadForwardedDll.c)
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x180021B00 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     LdrpParseForwarderDescription @ 0x180073010 (LdrpParseForwarderDescription.c)
 *     RtlGuardCheckImageBase @ 0x180074418 (RtlGuardCheckImageBase.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     LdrpCheckRedirection @ 0x1800E0D7C (LdrpCheckRedirection.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5, __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  PVOID *v9; // rdi
  unsigned int v10; // r15d
  char ShouldModuleImportBeRedirected; // al
  int ProcedureAddress; // eax
  int ForwardedDll; // ebx
  PVOID v14; // rdi
  int v15; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  char v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  _QWORD *v24; // [rsp+50h] [rbp-B0h]
  __int128 v25; // [rsp+58h] [rbp-A8h] BYREF
  PWSTR Path[3]; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  char v29; // [rsp+ECh] [rbp-14h]

  v6 = a2[10];
  v7 = a3;
  v24 = a2;
  v9 = (PVOID *)a2;
  v23 = a1;
  v22 = a3;
  BaseAddress = a2;
  v20 = a4;
  v10 = 0;
  memset_thunk_772440563353939046(Path, 0, 0x80uLL);
  v28 = v6;
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v19 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected )
    {
      if ( v7 )
      {
        v18 = LdrpCheckRedirection(v23, v9, v7);
        if ( v18 != -4530927 )
        {
          *a6 = v18;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(v9[6]);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v17 = v10++;
    if ( v17 >= 0x20 || (a5 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_11;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a6, &v25, &v22, &v20);
    if ( ForwardedDll < 0 )
      goto LABEL_11;
    v27 = *((_DWORD *)v9 + 68);
    ForwardedDll = LdrpLoadForwardedDll((__int64)&v25, (int)Path, (__int64)v24, v9, 2, (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      goto LABEL_11;
    v9 = (PVOID *)BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
    ShouldModuleImportBeRedirected = v19;
    v7 = v22;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      RtlGuardCheckImageBase(v9[23]);
    }
    else
    {
      v14 = v9[6];
      LOBYTE(v15) = LdrControlFlowGuardEnforced();
      if ( v15 )
      {
        if ( (unsigned __int64)v14 < *((_QWORD *)&xmmword_18019C530 + 1)
          || (unsigned __int64)v14 >= *((_QWORD *)&xmmword_18019C530 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18019C540 )
        {
          RtlpxLookupFunctionTable(v14, (__int64 *)&v25);
        }
        else
        {
          v25 = xmmword_18019C530;
        }
        if ( *((PVOID *)&v25 + 1) != v14 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_11:
  if ( v29 )
    RtlReleasePath(Path[0]);
  if ( ForwardedDll < 0 )
    *a6 = 0LL;
  return (unsigned int)ForwardedDll;
}
