/*
 * XREFs of LdrpInitializeNode @ 0x1800732F4
 * Callers:
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180042C6C (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpApplyPatchImage @ 0x1800E1480 (LdrpApplyPatchImage.c)
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 *v4; // rdx
  int v5; // esi
  __int64 i; // r15
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // r13
  char v9; // r12
  __int64 v10; // r9
  __int64 v12; // [rsp+58h] [rbp-E0h]
  __int64 v13; // [rsp+60h] [rbp-D8h]
  __int128 v14; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+90h] [rbp-A8h]
  __int64 v16; // [rsp+B0h] [rbp-88h] BYREF
  int v17; // [rsp+B8h] [rbp-80h]
  __int128 v18; // [rsp+C0h] [rbp-78h]
  __int128 v19; // [rsp+D0h] [rbp-68h]
  __int128 v20; // [rsp+E0h] [rbp-58h]
  __int64 v21; // [rsp+F0h] [rbp-48h]
  __int64 v22; // [rsp+158h] [rbp+20h]

  v1 = a1;
  v12 = a1;
  *(_QWORD *)&v14 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = LdrpImageEntry;
  v3 = (__int64 **)qword_18017A178;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      if ( *v3 != &qword_18017A170 )
        __fastfail(3u);
      *v4 = (__int64)&qword_18017A170;
      *(_QWORD *)(a1 - 160 + 40) = v3;
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_18017A178 = (__int64)v3;
    }
  }
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v7 = i - 160;
    if ( i - 160 != v2 )
    {
      if ( *(_DWORD *)(v7 + 268) == 9 )
      {
        v5 = LdrpApplyPatchImage(i - 160);
        if ( v5 < 0 )
        {
          v14 = *(_OWORD *)(v7 + 72);
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1394,
            (__int64)"LdrpInitializeNode",
            0,
            "Applying patch \"%wZ\" failed\n",
            &v14);
          break;
        }
      }
      v13 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v7 + 56);
      v22 = v7 + 72;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1413,
        (__int64)"LdrpInitializeNode",
        2u,
        "Calling init routine %p for DLL \"%wZ\"\n",
        v8,
        v7 + 72);
      v9 = 1;
      v16 = 72LL;
      v17 = 1;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        LdrpCallTlsInitializers(1u, i - 160);
      if ( v8 )
      {
        v10 = 0LL;
        if ( (*(_BYTE *)(v7 + 104) & 0x20) != 0 )
          v10 = LdrpProcessInitContextRecord;
        v15 = v10;
        if ( *(_DWORD *)(v7 + 268) == 9 )
          v9 = 1;
        else
          v9 = LdrpCallInitRoutine(v8, *(_QWORD *)(v7 + 48), 1u, v10);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
      LdrpCurrentDllInitializer = v13;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v9 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1476,
          (__int64)"LdrpInitializeNode",
          0,
          "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
          v8,
          v22);
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v7 + 48), v22, 0x14AEu);
      v2 = LdrpImageEntry;
    }
  }
  *(_DWORD *)(v12 + 56) = v5 != 0 ? -4 : 9;
  return (unsigned int)v5;
}
