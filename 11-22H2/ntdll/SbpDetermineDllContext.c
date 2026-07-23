/*
 * XREFs of SbpDetermineDllContext @ 0x18002EAD4
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002F0C4 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     SbGetContextDetailsById @ 0x18002F30C (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002F334 (SbGetContextDetailsByGuid.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     SbGetContextDetailsByVersion @ 0x18007CF40 (SbGetContextDetailsByVersion.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007DCE0 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int MajorSubsystemVersion; // edi
  unsigned int MinorSubsystemVersion; // esi
  __int64 v8; // rdx
  __int64 v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF

  v2 = 0;
  v14[1] = 512LL;
  v12 = 0LL;
  v14[0] = 0LL;
  v13 = 0LL;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    MajorSubsystemVersion = v5->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v5->OptionalHeader.MinorSubsystemVersion;
    SbGetContextDetailsById(4LL, &v12);
    v8 = v12;
    if ( (unsigned __int16)MajorSubsystemVersion <= *(_WORD *)(v12 + 20)
      && ((_WORD)MajorSubsystemVersion != *(_WORD *)(v12 + 20)
       || (unsigned __int16)MinorSubsystemVersion < *(_WORD *)(v12 + 22)) )
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) && &v15 )
      {
        MinorSubsystemVersion += MajorSubsystemVersion << 16;
        if ( v15 )
        {
          v10 = v15;
          v11 = &v16;
          do
          {
            if ( *((_DWORD *)v11 + 4) == 1
              && (unsigned int)SbGetContextDetailsByGuid(v11, &v13)
              && *(unsigned __int16 *)(v13 + 22) + (*(unsigned __int16 *)(v13 + 20) << 16) >= MinorSubsystemVersion )
            {
              MinorSubsystemVersion = *(unsigned __int16 *)(v13 + 22) + (*(unsigned __int16 *)(v13 + 20) << 16);
            }
            v11 += 4;
            --v10;
          }
          while ( v10 );
        }
        MajorSubsystemVersion = HIWORD(MinorSubsystemVersion);
      }
      SbGetContextDetailsByVersion(
        (unsigned __int16)MajorSubsystemVersion,
        (unsigned __int16)MinorSubsystemVersion,
        v14);
      v8 = v14[0];
    }
    v2 = 1;
    *a2 = v8;
  }
  return v2;
}
