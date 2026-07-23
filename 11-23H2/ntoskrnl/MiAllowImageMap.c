/*
 * XREFs of MiAllowImageMap @ 0x1406AF6D4
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140214E04 (MiGetControlAreaLoadConfig.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     SeGetTrustLabelAce @ 0x1402B5EB0 (SeGetTrustLabelAce.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30E0 (ObReleaseObjectSecurityEx.c)
 *     MiReferenceFileObjectForMap @ 0x140721018 (MiReferenceFileObjectForMap.c)
 *     ObpGetObjectSecurity @ 0x140736410 (ObpGetObjectSecurity.c)
 *     SeQueryMandatoryLabel @ 0x1407DD6B0 (SeQueryMandatoryLabel.c)
 *     PsBlockNonCetBinaries @ 0x1409AE364 (PsBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409EA224 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409EB9FC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  bool v8; // al
  int v9; // edi
  _DWORD *ControlAreaLoadConfig; // rax
  int ObjectSecurity; // ebx
  int v12; // ebp
  bool v13; // al
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // rbx
  __int64 *v20; // r8
  bool v21; // di
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rdx
  int v26; // edi
  __int64 v27[7]; // [rsp+20h] [rbp-38h] BYREF
  char v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 2512);
  v27[0] = 0LL;
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v18 = MiReferenceFileObjectForMap(a2);
    v19 = (void *)v18;
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 8) + 52LL) & 0x80000) == 0 )
    {
      v20 = MITIGATION_AUDIT_PROHIBIT_REMOTE_IMAGE_MAP;
      if ( v9 )
        v20 = MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
      EtwpTimLogMitigationForProcess(1LL, (unsigned int)(v9 != 0) + 1, v20, a1);
      if ( v9 )
      {
        ObfDereferenceObject(v19);
        return 3221225506LL;
      }
    }
    ObfDereferenceObject(v19);
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_7;
  ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
  if ( (*(_DWORD *)(a1 + 2512) & 4) != 0 && (!ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 2516) & 0x200000) == 0 )
    goto LABEL_7;
  v21 = 0;
  if ( ControlAreaLoadConfig )
    v21 = (*(_BYTE *)ControlAreaLoadConfig & 0x40) != 0;
  v22 = MiReferenceControlAreaFile(a3);
  LOBYTE(v23) = v21;
  v24 = v22;
  v25 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  LOBYTE(v25) = *(_BYTE *)(v25 + 76) & 1;
  v26 = PsBlockNonCetBinaries(a1, v25, v23, v22 + 88);
  MiDereferenceControlAreaFile(a3, v24);
  if ( v26 >= 0 )
  {
LABEL_7:
    ObjectSecurity = 0;
    v12 = v4 & 0x200000;
    v13 = (v4 & 0x400000) != 0;
    if ( (v4 & 0x200000) != 0 )
      v13 = 1;
    if ( !v13 )
      return (unsigned int)ObjectSecurity;
    v28 = 0;
    v15 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v15, v27, &v28, 0LL);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      v16 = v27[0];
      if ( (unsigned int)SeQueryMandatoryLabel(v27[0]) <= 0x1000 && !SeGetTrustLabelAce(v16) )
        ObjectSecurity = -1073741790;
      LOBYTE(v17) = v28;
      ObReleaseObjectSecurityEx(v16, v17, v15);
      if ( ObjectSecurity != -1073741790 )
        goto LABEL_16;
    }
    EtwTimLogProhibitLowILImageMap((unsigned int)(v12 != 0) + 1, a1, v15 + 88);
    if ( !v12 )
      ObjectSecurity = 0;
LABEL_16:
    MiDereferenceControlAreaFile(a3, v15);
    return (unsigned int)ObjectSecurity;
  }
  return (unsigned int)v26;
}
