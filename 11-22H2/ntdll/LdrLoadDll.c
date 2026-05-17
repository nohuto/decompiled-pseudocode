/*
 * XREFs of LdrLoadDll @ 0x18002A8A0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E19E0 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x18012723C (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // ebx
  int Dll; // ebx
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v17[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v18; // [rsp+BCh] [rbp-2Ch]

  if ( a2 )
  {
    v7 = *a2;
    v8 = 2 * (*a2 & 4);
    v9 = v8 | 0x40;
    if ( (v7 & 2) == 0 )
      v9 = v8;
    v10 = v9 | 0x80;
    if ( (v7 & 0x800000) == 0 )
      v10 = v9;
    v11 = v10 | 0x100;
    if ( (v7 & 0x1000) == 0 )
      v11 = v10;
    v12 = v11 | 0x400000;
    if ( v7 >= 0 )
      v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  LdrpLogInternal((unsigned int)"minkernel\\ntdll\\ldrapi.c", 580LL, (__int64)"LdrLoadDll", 3LL, "DLL name: %wZ\n", a3);
  if ( (LdrpPolicyBits & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( (v12 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      Dll = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a1, v17);
      Dll = LdrpLoadDll(a3, (int)v17, v12, (__int64)&v16);
      if ( v18 )
        RtlReleasePath(v17[0]);
      if ( Dll >= 0 )
      {
        v14 = v16;
        *a4 = *(_QWORD *)(v16 + 48);
        LdrpDereferenceModule(v14);
      }
    }
  }
  else
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      601LL,
      (__int64)"LdrLoadDll",
      0LL,
      "Nonpackaged process attempted to load a packaged DLL.\n");
    Dll = -1073741398;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    633LL,
    (__int64)"LdrLoadDll",
    4LL,
    "Status: 0x%08lx\n",
    Dll);
  return (unsigned int)Dll;
}
