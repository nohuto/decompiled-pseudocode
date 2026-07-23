/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x1800320D8
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18003266C (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x1800613AC (EtwpDisableTraceProviders.c)
 *     EtwpProcessNotification @ 0x180061B34 (EtwpProcessNotification.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x1800020AC (EtwpGetUmProcessImageInfo.c)
 *     EtwpEventApiCallback @ 0x180030A14 (EtwpEventApiCallback.c)
 *     EtwpFindGuidEntry @ 0x1800324AC (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180061CE0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180061D10 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpReferenceUmGuidEntry @ 0x180061D98 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x180061DBC (EtwpAllocateUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180081DE8 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x180082594 (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpIsPrivateLoggerOn @ 0x18008595C (EtwpIsPrivateLoggerOn.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 GuidEntry; // rbx
  unsigned int v4; // ebp
  char v7; // r14
  char v8; // r12
  __int64 v9; // r8
  char v10; // dl
  _BYTE *v11; // rax
  unsigned int v12; // ecx
  _BYTE *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _BYTE *v17; // rax

  v2 = *(_DWORD *)(a2 + 72);
  GuidEntry = *(_QWORD *)(a1 + 240);
  v4 = 4;
  v7 = 0;
  v8 = 0;
  if ( v2 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v9 = a1 + 96;
LABEL_4:
      v7 = *(_BYTE *)(v9 + 20);
      *(_QWORD *)v9 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v9 + 21) = *(_BYTE *)(a2 + 76);
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 80);
      *(_BYTE *)(v9 + 20) = v2 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v4 < 4 )
        {
          v15 = 3 * (v4 + 5LL);
          *(_OWORD *)(a1 + 8 * v15) = *(_OWORD *)v9;
          *(_QWORD *)(a1 + 8 * v15 + 16) = *(_QWORD *)(v9 + 16);
        }
        EtwpUpdatePrivateEnableInfo(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 || *(__int16 *)(a1 + 86) < 0 )
          EtwpGetUmProcessImageInfo(*(_WORD *)(a2 + 78), a1);
      }
      if ( v8 )
      {
        *(_DWORD *)(GuidEntry + 48) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(GuidEntry + 40));
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
      GuidEntry = EtwpFindGuidEntry((void *)(a1 + 32));
      if ( !GuidEntry )
      {
        GuidEntry = EtwpAllocateUmGuidEntry(a1 + 32);
        if ( !GuidEntry )
          return;
      }
      *(_QWORD *)(a1 + 240) = GuidEntry;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry);
    v10 = *(_BYTE *)(a2 + 78);
    v11 = (_BYTE *)(GuidEntry + 78);
    v12 = 0;
    while ( !*(v11 - 2) || *v11 != v10 )
    {
      ++v12;
      v11 += 24;
      if ( v12 >= 4 )
        goto LABEL_18;
    }
    v4 = v12;
    v9 = GuidEntry + 8 * (v12 + 2LL * v12 + 7);
    if ( v9 )
      goto LABEL_4;
LABEL_18:
    if ( v2 )
    {
      v4 = 0;
      v13 = (_BYTE *)(GuidEntry + 76);
      while ( *v13 )
      {
        ++v4;
        v13 += 24;
        if ( v4 >= 4 )
          goto LABEL_47;
      }
      v14 = GuidEntry + 8 * (v4 + 2LL * v4 + 7);
      if ( v14 )
      {
        *(_BYTE *)(v14 + 22) = v10;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_4;
      }
    }
    else
    {
      v16 = 0;
      v17 = (_BYTE *)(a1 + 142);
      while ( !*(v17 - 2) || *v17 != v10 )
      {
        ++v16;
        v17 += 24;
        if ( v16 >= 4 )
          goto LABEL_47;
      }
      v9 = a1 + 24 * (v16 + 5LL);
      if ( v9 )
        goto LABEL_4;
    }
LABEL_47:
    *(_DWORD *)(GuidEntry + 48) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(GuidEntry + 40));
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v7 )
  {
    if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
      EtwpRegisterGuidsApiCallback(a2, a1, 0LL);
    else
      EtwpEventApiCallback(a2, a1);
  }
}
