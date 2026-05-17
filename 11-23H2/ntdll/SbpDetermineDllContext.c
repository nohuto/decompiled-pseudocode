/*
 * XREFs of SbpDetermineDllContext @ 0x18002E904
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002EEF4 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     SbGetContextDetailsById @ 0x18002F13C (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002F164 (SbGetContextDetailsByGuid.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     SbGetContextDetailsByVersion @ 0x18007D5B0 (SbGetContextDetailsByVersion.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007E350 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rdx
  _BYTE *v10; // r14
  __int64 v11; // r15
  _DWORD *v12; // rdi
  _DWORD *v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[512]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v17 = 512LL;
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v13 = v18;
  if ( a2 && a1 )
  {
    v5 = RtlImageNtHeader(a1);
    v6 = *(unsigned __int16 *)(v5 + 72);
    v7 = *(unsigned __int16 *)(v5 + 74);
    SbGetContextDetailsById(4LL, &v14);
    v8 = v14;
    if ( (unsigned __int16)v6 <= *(_WORD *)(v14 + 20)
      && ((_WORD)v6 != *(_WORD *)(v14 + 20) || (unsigned __int16)v7 < *(_WORD *)(v14 + 22)) )
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(a1, &v13, &v17) )
      {
        v10 = v13;
        if ( v13 )
        {
          v7 += v6 << 16;
          if ( *v13 )
          {
            v11 = (unsigned int)*v13;
            v12 = v13 + 2;
            do
            {
              if ( v12[4] == 1
                && (unsigned int)SbGetContextDetailsByGuid(v12, &v15)
                && *(unsigned __int16 *)(v15 + 22) + (*(unsigned __int16 *)(v15 + 20) << 16) >= v7 )
              {
                v7 = *(unsigned __int16 *)(v15 + 22) + (*(unsigned __int16 *)(v15 + 20) << 16);
              }
              v12 += 8;
              --v11;
            }
            while ( v11 );
          }
          if ( v10 != v18 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v13);
          v6 = HIWORD(v7);
        }
      }
      SbGetContextDetailsByVersion((unsigned __int16)v6, (unsigned __int16)v7, &v16);
      v8 = v16;
    }
    v2 = 1;
    *a2 = v8;
  }
  return v2;
}
