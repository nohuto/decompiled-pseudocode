/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x180015ED4
 * Callers:
 *     EtwpProcessNotification @ 0x180007988 (EtwpProcessNotification.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x1800165B8 (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x180090A24 (EtwpDisableTraceProviders.c)
 * Callees:
 *     EtwpDereferenceUmGuidEntry @ 0x180007B1C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180007BA4 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180007BD4 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x180007BF8 (EtwpAllocateUmGuidEntry.c)
 *     EtwpEventApiCallback @ 0x180015800 (EtwpEventApiCallback.c)
 *     EtwpFindGuidEntry @ 0x180016878 (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180088038 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x180088334 (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpIsPrivateLoggerOn @ 0x18008A428 (EtwpIsPrivateLoggerOn.c)
 *     EtwpGetUmProcessImageInfo @ 0x180122610 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2)
{
  int v2; // r15d
  char *GuidEntry; // rbx
  unsigned int v4; // r14d
  char v7; // bp
  char v8; // r12
  char *v9; // r8
  char v10; // r9
  _BYTE *v11; // rax
  unsigned int v12; // edx
  _BYTE *v13; // rax
  char *v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _BYTE *v17; // rax

  v2 = *(_DWORD *)(a2 + 72);
  GuidEntry = *(char **)(a1 + 248);
  v4 = 4;
  v7 = 0;
  v8 = 0;
  if ( v2 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v9 = (char *)(a1 + 104);
LABEL_4:
      v7 = v9[20];
      *(_QWORD *)v9 = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a2 + 88);
      v9[21] = *(_BYTE *)(a2 + 76);
      *((_DWORD *)v9 + 4) = *(_DWORD *)(a2 + 80);
      v9[20] = v2 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v4 < 4 )
        {
          v15 = 3LL * v4;
          *(_OWORD *)(a1 + 8 * v15 + 128) = *(_OWORD *)v9;
          *(_QWORD *)(a1 + 8 * v15 + 144) = *((_QWORD *)v9 + 2);
        }
        EtwpUpdatePrivateEnableInfo(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v8 )
      {
        *((_DWORD *)GuidEntry + 12) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
        if ( v4 < 4 && !v2 )
          EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
      }
      goto LABEL_6;
    }
    v8 = 1;
    if ( v2 == 1 && !(unsigned __int8)EtwpIsPrivateLoggerOn(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL) )
      return;
    if ( !GuidEntry )
    {
      if ( !v2 )
        return;
      GuidEntry = (char *)EtwpFindGuidEntry((void *)(a1 + 32));
      if ( !GuidEntry )
      {
        GuidEntry = EtwpAllocateUmGuidEntry((_OWORD *)(a1 + 32));
        if ( !GuidEntry )
          return;
      }
      *(_QWORD *)(a1 + 248) = GuidEntry;
    }
    EtwpAcquireGuidEntryExclusive((__int64)GuidEntry);
    v10 = *(_BYTE *)(a2 + 78);
    v11 = GuidEntry + 78;
    v12 = 0;
    while ( !*(v11 - 2) || *v11 != v10 )
    {
      ++v12;
      v11 += 24;
      if ( v12 >= 4 )
        goto LABEL_18;
    }
    v4 = v12;
    v9 = &GuidEntry[16 * v12 + 56 + 8 * v12];
    if ( v9 )
      goto LABEL_4;
LABEL_18:
    if ( v2 )
    {
      v4 = 0;
      v13 = GuidEntry + 76;
      while ( *v13 )
      {
        ++v4;
        v13 += 24;
        if ( v4 >= 4 )
          goto LABEL_47;
      }
      v14 = &GuidEntry[16 * v4 + 56 + 8 * v4];
      if ( v14 )
      {
        v14[22] = v10;
        EtwpReferenceUmGuidEntry((__int64)GuidEntry);
        goto LABEL_4;
      }
    }
    else
    {
      v16 = 0;
      v17 = (_BYTE *)(a1 + 150);
      while ( !*(v17 - 2) || *v17 != v10 )
      {
        ++v16;
        v17 += 24;
        if ( v16 >= 4 )
          goto LABEL_47;
      }
      v9 = (char *)(a1 + 8 * (v16 + 2 * (v16 + 8LL)));
      if ( v9 )
        goto LABEL_4;
    }
LABEL_47:
    *((_DWORD *)GuidEntry + 12) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v7 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      EtwpRegisterGuidsApiCallback(a2, a1, 0LL);
    else
      EtwpEventApiCallback(a2, a1);
  }
}
