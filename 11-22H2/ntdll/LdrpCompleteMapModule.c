/*
 * XREFs of LdrpCompleteMapModule @ 0x18002CF00
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x1800824EC (LdrpLogError.c)
 *     LdrpRelocateImage @ 0x180085A68 (LdrpRelocateImage.c)
 *     LdrpCorValidateImage @ 0x18008E3D8 (LdrpCorValidateImage.c)
 *     LdrpCorFixupImage @ 0x1800DA7C8 (LdrpCorFixupImage.c)
 *     LdrpLogEtwEvent @ 0x1800DB9FC (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r8d
  int v31; // r9d
  int v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v3 + 48), 1, 0xEu, &v32, &v33);
  v12 = v33;
  if ( v8 < 0 )
    v12 = 0LL;
  if ( !v12 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  v14 = *(_DWORD *)(v3 + 104) | 0x400000;
  *(_DWORD *)(v3 + 104) = v14;
  if ( (*(_BYTE *)(v12 + 16) & 1) == 0
    || (v28 = *(_QWORD *)(v3 + 48),
        *(_DWORD *)(v3 + 104) = v14 | 0x1000000,
        v29 = LdrpCorValidateImage(v28),
        (v7 = v29, v29 >= 0)
     && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48)), v7 >= 0))) )
  {
LABEL_4:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(a1 + 32) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v15 = *(_QWORD *)(v3 + 48);
          v19 = 2147353476LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId((unsigned int)(a3 - 1073741827), v9, v10, v11) )
            v20 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v20 = 2147353476LL;
          v21 = 2147353477LL;
          if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v20 = (unsigned int)RtlGetCurrentServiceSessionId(v20, v16, v17, v18)
                ? (__int64)NtCurrentPeb()->SharedData + 555
                : 2147353477LL;
            if ( (*(_BYTE *)v20 & 0x20) != 0 )
            {
              LOBYTE(v18) = -1;
              LOBYTE(v17) = -1;
              LdrpLogEtwEvent(5264, v15, v17, v18, 0LL, 0LL);
            }
          }
          if ( a3 == 1073741827
            && (v22 = LdrpRelocateImage(*(_QWORD *)(v3 + 48), *(_QWORD *)(a1 + 168), a2, v3 + 72), v7 = v22, v22 < 0) )
          {
            LdrpLogError((unsigned int)v22, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v23 = *(_QWORD *)(v3 + 48);
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v16, v17, v18) )
              v19 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v24, v26, v27) )
                v21 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v21 & 0x20) != 0 )
              {
                LOBYTE(v31) = -1;
                LOBYTE(v30) = -1;
                LdrpLogEtwEvent(5265, v23, v30, v31, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          1009LL,
          (__int64)"LdrpCompleteMapModule",
          0LL,
          "Could not validate the crypto signature for DLL %wZ\n",
          v3 + 72);
        return (unsigned int)-1073740760;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 104) &= ~4u;
    }
  }
  return (unsigned int)v7;
}
