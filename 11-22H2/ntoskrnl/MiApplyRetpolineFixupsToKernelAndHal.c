/*
 * XREFs of MiApplyRetpolineFixupsToKernelAndHal @ 0x140B48EF0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140B47664 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     RtlLookupImageSectionByName @ 0x14035FAF4 (RtlLookupImageSectionByName.c)
 *     RtlUpdateImportRelocationsInImage @ 0x140376274 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x1405B20F0 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14067A69C (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall MiApplyRetpolineFixupsToKernelAndHal(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbx
  unsigned int (*v5)(void); // r14
  unsigned int v6; // esi
  int updated; // ecx
  char *v9; // rbx
  PIMAGE_NT_HEADERS v10; // rax
  const char *v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  PIMAGE_NT_HEADERS v15; // rbx
  const char *v16; // rax
  int v17; // esi
  __int64 *v18; // r14
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int64 v21; // rbx
  const char *v22; // rax
  PVOID v23; // r9
  unsigned int v24; // r8d
  int v25; // ecx
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  _IMAGE_NT_HEADERS64 *v29; // [rsp+68h] [rbp-A0h]
  _QWORD v30[14]; // [rsp+70h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(a1 + 16);
  v26 = 0LL;
  dword_140C65944 = *(_DWORD *)(v1 + 3500) >> 12;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
    && (v26 = v3,
        v9 = *(char **)(v3 + 48),
        v10 = RtlImageNtHeader(v9),
        v11 = RtlLookupImageSectionByName((__int64)v10, "RETPOL"),
        v12 = *((_DWORD *)v11 + 2),
        Base = &v9[*((unsigned int *)v11 + 3)],
        dword_140C65980 = (v12 >> 12) + ((v12 & 0xFFF) != 0),
        dword_140C65980 > (unsigned int)dword_140C65944) )
  {
    updated = -1073741811;
  }
  else if ( (MiFlags & 0x4000) != 0
         && ((KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiSpeculationFeatures & 0x40000000000LL) != 0) )
  {
    v13 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1;
    if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
      LODWORD(v13) = v13 | 2;
    memset(v30, 0, 0x68uLL);
    v30[1] = (unsigned int)v13;
    updated = VslpEnterIumSecureMode(2u, 221, 0, (__int64)v30);
  }
  else if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v14 = v26;
    v15 = RtlImageNtHeader(*(PVOID *)(v26 + 48));
    v16 = RtlLookupImageSectionByName((__int64)v15, "INITKDBG");
    v17 = 0;
    v18 = &v26;
    LODWORD(v28) = *((_DWORD *)v16 + 3);
    v19 = 1;
    LODWORD(v27) = *((_DWORD *)v16 + 2);
    while ( 1 )
    {
      v29 = v15;
      v20 = (__int64)v15;
      v21 = *v18;
      v22 = RtlLookupImageSectionByName(v20, "MINIEX");
      v23 = Base;
      v24 = *(_DWORD *)(v21 + 64);
      v25 = *((_DWORD *)v22 + 3);
      *((_DWORD *)&v27 + v19) = *((_DWORD *)v22 + 2);
      *((_DWORD *)&v28 + v19) = v25;
      updated = RtlPerformRetpolineRelocationsOnImageEx(
                  *(char **)(v21 + 48),
                  *(_QWORD *)(v21 + 48),
                  v24,
                  (__int64)v23,
                  (__int64)v23,
                  1,
                  (__int64)&v28,
                  (__int64)&v27,
                  v19 + 1);
      if ( updated < 0 )
        break;
      v15 = v29;
      v19 = 0;
      ++v17;
      ++v18;
      if ( v17 )
      {
        updated = RtlCopyRetpolineStubsUnwindInfo(
                    *(_QWORD *)(v14 + 48),
                    *(_QWORD *)(v14 + 48),
                    (unsigned int *)Base,
                    (int)Base);
        if ( updated < 0 )
          break;
        goto LABEL_4;
      }
    }
  }
  else
  {
LABEL_4:
    if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
    {
      v4 = *(__int64 **)(a1 + 16);
      v5 = (unsigned int (*)(void))((unsigned __int64)MiIsBootImageTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0));
      v6 = 0;
      while ( 1 )
      {
        updated = RtlUpdateImportRelocationsInImage(
                    (char *)v4[6],
                    v4[6],
                    *((_DWORD *)v4 + 16),
                    v5,
                    (__int64)Base,
                    (__int64)Base,
                    1,
                    (KiSpeculationFeatures & 0x20000000000LL) == 0);
        if ( ((updated + 0x80000000) & 0x80000000) == 0 && updated != -1073741637 )
          break;
        *((_DWORD *)v4 + 26) |= 0x80u;
        ++v6;
        v4 = (__int64 *)*v4;
        if ( v6 >= 2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      updated = 0;
    }
  }
  dword_140C65984 = updated;
  return (unsigned int)updated;
}
