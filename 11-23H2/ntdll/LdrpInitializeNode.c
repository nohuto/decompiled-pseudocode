/*
 * XREFs of LdrpInitializeNode @ 0x18006D4F4
 * Callers:
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180028BA4 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     LdrpApplyPatchImage @ 0x1800E0FB4 (LdrpApplyPatchImage.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 **v4; // rax
  __int64 *v5; // rcx
  unsigned int v6; // edi
  __int64 i; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // r12
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r9
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-118h]
  char v16; // [rsp+40h] [rbp-108h]
  _DWORD *v17; // [rsp+58h] [rbp-F0h]
  __int64 v18; // [rsp+60h] [rbp-E8h]
  __int128 v19; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-A8h]
  __int64 v21; // [rsp+C0h] [rbp-88h] BYREF
  int v22; // [rsp+C8h] [rbp-80h]
  __int128 v23; // [rsp+D0h] [rbp-78h]
  __int128 v24; // [rsp+E0h] [rbp-68h]
  __int128 v25; // [rsp+F0h] [rbp-58h]
  __int64 v26; // [rsp+100h] [rbp-48h]
  __int64 v27; // [rsp+168h] [rbp+20h]

  v17 = (_DWORD *)(a1 + 56);
  *(_QWORD *)&v19 = a1 + 56;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = LdrpImageEntry;
  v4 = (__int64 **)qword_180187478;
  while ( v2 != a1 )
  {
    if ( v2 - 160 != v3 )
    {
      v5 = (__int64 *)(v2 - 160 + 32);
      if ( *v4 != &qword_180187470 )
        __fastfail(3u);
      *v5 = (__int64)&qword_180187470;
      *(_QWORD *)(v2 - 160 + 40) = v4;
      *v4 = v5;
      v4 = (__int64 **)(v2 - 160 + 32);
      qword_180187478 = (__int64)v4;
    }
    v2 = *(_QWORD *)(v2 + 8);
  }
  v6 = 0;
  for ( i = *(_QWORD *)(a1 + 8); i != a1; i = *(_QWORD *)(i + 8) )
  {
    v8 = i - 160;
    if ( i - 160 != v3 )
    {
      if ( *(_DWORD *)(v8 + 268) == 9 )
      {
        v14 = LdrpApplyPatchImage(i - 160);
        v6 = v14;
        if ( v14 < 0 )
        {
          v19 = *(_OWORD *)(v8 + 72);
          LODWORD(v15) = v14;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1394LL,
            (__int64)"LdrpInitializeNode",
            0LL,
            "Applying patch \"%wZ\" failed - Status = 0x%x\n",
            &v19,
            v15);
          break;
        }
      }
      v18 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v8 + 56);
      v27 = v8 + 72;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1413LL,
        (__int64)"LdrpInitializeNode",
        2LL,
        "Calling init routine %p for DLL \"%wZ\"\n",
        v9,
        v8 + 72);
      v16 = 1;
      v21 = 72LL;
      v22 = 1;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)&v21, *(_QWORD *)(v8 + 136));
      if ( *(_WORD *)(v8 + 110) )
        LdrpCallTlsInitializers(1u, i - 160, v10, v11);
      if ( v9 )
      {
        v12 = 0LL;
        if ( (*(_BYTE *)(v8 + 104) & 0x20) != 0 )
          v12 = LdrpProcessInitContextRecord;
        v20 = v12;
        v16 = LdrpCallInitRoutine(v9, *(_QWORD *)(v8 + 48), 1LL, v12);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)&v21);
      LdrpCurrentDllInitializer = v18;
      *(_DWORD *)(v8 + 104) |= 0x80000u;
      if ( !v16 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1465LL,
          (__int64)"LdrpInitializeNode",
          0LL,
          "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
          v9,
          v27);
        v6 = -1073741502;
        *(_DWORD *)(v8 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v8 + 48), v27, 0x14AEu);
      v3 = LdrpImageEntry;
    }
  }
  *v17 = v6 != 0 ? -4 : 9;
  return v6;
}
