/*
 * XREFs of LdrLoadDll @ 0x18003AE00
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E2D70 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x1801257CC (SbpResolveBasedOnName.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, unsigned __int64 *a4)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 v14; // rdx
  int v15; // ebx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v22[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v23; // [rsp+BCh] [rbp-2Ch]

  if ( a2 )
  {
    v8 = *a2;
    v9 = 2 * (*a2 & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (*a2 & 0x800000) == 0 )
      v11 = v10;
    v12 = v11 | 0x100;
    if ( (*a2 & 0x1000) == 0 )
      v12 = v11;
    v13 = v12 | 0x400000;
    if ( *a2 >= 0 )
      v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  LdrpLogInternal((unsigned int)"minkernel\\ntdll\\ldrapi.c", 580, (unsigned int)"LdrLoadDll", 3, "DLL name: %wZ\n", a3);
  if ( (LdrpPolicyBits & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( (v13 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v15 = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(*(void **)(a3 + 8), a1, v22);
      v15 = LdrpLoadDll(a3, v22, v13, &v21);
      if ( v23 )
        RtlReleasePath(v22[0], v14, v16, v17);
      if ( v15 >= 0 )
      {
        v18 = v21;
        v19 = *(_QWORD *)(v21 + 48);
        *a4 = v19;
        LdrpDereferenceModule(v18, v19, v16, v17);
      }
    }
  }
  else
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      601,
      (unsigned int)"LdrLoadDll",
      0,
      "Nonpackaged process attempted to load a packaged DLL.\n");
    v15 = -1073741398;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    633,
    (unsigned int)"LdrLoadDll",
    4,
    "Status: 0x%08lx\n",
    v15);
  return (unsigned int)v15;
}
