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
  unsigned int v11; // r15d
  char ShouldModuleImportBeRedirected; // al
  int ProcedureAddress; // eax
  __int64 v14; // rdx
  int ForwardedDll; // ebx
  unsigned __int64 v16; // rdi
  unsigned int v18; // eax
  __int64 v19; // rax
  char v20; // [rsp+30h] [rbp-D0h]
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int128 v26; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v27[3]; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  char v30; // [rsp+ECh] [rbp-14h]

  v6 = *(_QWORD *)(a2 + 80);
  v7 = a3;
  v25 = a2;
  v9 = a2;
  v24 = a1;
  v10 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a4;
  v11 = 0;
  memset_thunk_772440563353939046(v27, 0, 0x80uLL);
  v29 = v6;
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v20 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected )
    {
      if ( v7 )
      {
        v19 = LdrpCheckRedirection(v24, v9, v7);
        if ( v19 != -4530927 )
        {
          *a6 = v19;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v9 + 48), v7, v10, a6);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v18 = v11++;
    if ( v18 >= 0x20 || (a5 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_11;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a6, &v26, &v23, &v21);
    if ( ForwardedDll < 0 )
      goto LABEL_11;
    v28 = *(_DWORD *)(v9 + 272);
    ForwardedDll = LdrpLoadForwardedDll((__int64)&v26, (int)v27, v25, v9, 2, (__int64)&v22);
    if ( ForwardedDll < 0 )
      goto LABEL_11;
    v9 = v22;
    LdrpDereferenceModule(v22);
    ShouldModuleImportBeRedirected = v20;
    v7 = v23;
    v10 = v21;
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
      v16 = *(_QWORD *)(v9 + 48);
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        if ( v16 < *((_QWORD *)&xmmword_18019C530 + 1)
          || v16 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
        {
          RtlpxLookupFunctionTable(v16, (__int64 *)&v26);
        }
        else
        {
          v26 = xmmword_18019C530;
        }
        if ( *((_QWORD *)&v26 + 1) != v16 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_11:
  if ( v30 )
    RtlReleasePath(v27[0]);
  if ( ForwardedDll < 0 )
    *a6 = 0LL;
  return (unsigned int)ForwardedDll;
}
