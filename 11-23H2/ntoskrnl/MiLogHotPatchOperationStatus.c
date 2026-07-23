/*
 * XREFs of MiLogHotPatchOperationStatus @ 0x140A39208
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140A348C0 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToDriver @ 0x140A35120 (MiApplyHotPatchToDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiApplySingleSessionPatch @ 0x140A36350 (MiApplySingleSessionPatch.c)
 *     MiInjectThreadForHotPatch @ 0x140A37C04 (MiInjectThreadForHotPatch.c)
 *     MiLoadHotPatch @ 0x140A38210 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x140A3C1E4 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B73D38 (MmRegisterHotPatches.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     MiFillLogProcessInfo @ 0x14025B6F0 (MiFillLogProcessInfo.c)
 *     PsGetProcessId @ 0x1402FA720 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall MiLogHotPatchOperationStatus(
        unsigned int a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5)
{
  UNICODE_STRING *p_DestinationString_8; // rdi
  __int64 v9; // r14
  struct _KPROCESS *v10; // r9
  __int64 v11; // r8
  ULONG v12; // r9d
  __int16 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // r11d
  unsigned int v17; // ecx
  __int64 v18; // r14
  struct _KPROCESS *v19; // r9
  __int64 v20; // r8
  int v21; // r11d
  int v22; // r9d
  __int64 v23; // r10
  int v24; // r11d
  bool v25; // zf
  int v26; // r9d
  __int64 *v27; // rax
  int v28; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+30h] [rbp-D8h]
  ULONG v30; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING *DestinationString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  unsigned int *v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h]
  unsigned int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int64 *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  __int64 *Buffer; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h] BYREF
  __int64 *p_DestinationString; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  __int64 *v54; // [rsp+118h] [rbp+10h]
  _QWORD v55[3]; // [rsp+120h] [rbp+18h] BYREF

  p_DestinationString_8 = a3;
  v38 = 0LL;
  DestinationString_8 = 0LL;
  if ( !*(_QWORD *)&qword_140C698E8 )
    return;
  if ( !a3 )
  {
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    p_DestinationString_8 = &DestinationString_8;
  }
  if ( a5 )
  {
    if ( a5 == 1 || a5 == 7 )
    {
      if ( **(_DWORD **)&qword_140C698E8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000020LL) )
        return;
      v25 = v26 == 7;
      v13 = (__int16 *)&byte_14003935D;
    }
    else
    {
      if ( ((a5 - 2) & 0xFFFFFFFB) != 0 )
      {
        if ( a5 == 3 )
        {
          if ( **(_DWORD **)&qword_140C698E8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000020LL) )
            return;
          ProcessId = a4;
          p_ProcessId = &ProcessId;
          v13 = (__int16 *)byte_140039475;
          v43 = 4LL;
          v44 = &v32;
          v46 = (unsigned int *)&v35;
          v48 = &v51;
          Buffer = (__int64 *)p_DestinationString_8->Buffer;
          LODWORD(v51) = p_DestinationString_8->Length;
          v32 = a1;
          v45 = 4LL;
          LODWORD(v35) = a2;
          v47 = 4LL;
          v49 = 2LL;
          HIDWORD(v51) = v16;
          v17 = *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 8);
          p_DestinationString = (__int64 *)&v34;
          v38 = 2164260864LL;
          v54 = &v38;
          v30 = 9;
          v34 = v17;
          v53 = 4LL;
          v55[0] = 8LL;
        }
        else
        {
          if ( a5 == 4 )
          {
            MiFillLogProcessInfo(
              (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
              &v34,
              &v38);
            v18 = *(_QWORD *)&qword_140C698E8;
            if ( **(_DWORD **)&qword_140C698E8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000020LL) )
            {
              ProcessId = (unsigned int)PsGetProcessId(v19);
              p_ProcessId = &ProcessId;
              v43 = 4LL;
              tlgCreate1Sz_char((__int64)&v44, (const CHAR *)v38);
              v32 = a4;
              v46 = &v32;
              v47 = 4LL;
              v48 = &v35;
              LODWORD(v35) = a1;
              Buffer = &v36;
              v49 = 4LL;
              p_DestinationString = (__int64 *)&DestinationString;
              v37 = 2164260864LL;
              v54 = &v37;
              LODWORD(v36) = a2;
              v51 = 4LL;
              DestinationString = p_DestinationString_8;
              v53 = 8LL;
              v55[0] = 8LL;
              tlgWriteEx_EtwWriteEx(v18, (unsigned __int8 *)byte_1400394EF, v20, 1u, v28, v29, 9u, v41);
            }
            return;
          }
          if ( **(_DWORD **)&qword_140C698E8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000020LL) )
            return;
          LODWORD(v36) = a4;
          p_ProcessId = (unsigned int *)&v36;
          v13 = word_140039582;
          v43 = 4LL;
          v44 = &ProcessId;
          v46 = &v32;
          v48 = &v51;
          Buffer = (__int64 *)p_DestinationString_8->Buffer;
          LODWORD(v51) = p_DestinationString_8->Length;
          v37 = 2164260864LL;
          p_DestinationString = &v37;
          v30 = 8;
          ProcessId = a1;
          v45 = 4LL;
          v32 = a2;
          v47 = 4LL;
          v49 = 2LL;
          HIDWORD(v51) = v21;
          v53 = 8LL;
        }
        v12 = 1;
        v14 = v15;
LABEL_31:
        tlgWriteEx_EtwWriteEx(v14, (unsigned __int8 *)v13, v11, v12, v28, v29, v30, v41);
        return;
      }
      if ( **(_DWORD **)&qword_140C698E8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000020LL) )
        return;
      v25 = v22 == 6;
      v13 = &word_1400393E6;
    }
    v32 = a2;
    p_ProcessId = (unsigned int *)&v36;
    v44 = &ProcessId;
    v45 = 4LL;
    ProcessId = a1;
    v43 = 4LL;
    LODWORD(v36) = a4;
    v46 = &v32;
    v14 = v23;
    v55[0] = 8LL;
    v48 = &v51;
    v12 = 1;
    v27 = (__int64 *)p_DestinationString_8->Buffer;
    LOBYTE(v31) = v25;
    Buffer = v27;
    LODWORD(v51) = p_DestinationString_8->Length;
    p_DestinationString = (__int64 *)&v31;
    v37 = 2164260864LL;
    v54 = &v37;
    v30 = 9;
    v53 = 1LL;
    HIDWORD(v51) = v24;
    v49 = 2LL;
    goto LABEL_30;
  }
  MiFillLogProcessInfo(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
    &v34,
    &v38);
  v9 = *(_QWORD *)&qword_140C698E8;
  if ( **(_DWORD **)&qword_140C698E8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000020LL) )
  {
    v34 = (unsigned int)PsGetProcessId(v10);
    v43 = 4LL;
    p_ProcessId = &v34;
    tlgCreate1Sz_char((__int64)&v44, (const CHAR *)v38);
    LODWORD(v35) = a4;
    v46 = (unsigned int *)&v35;
    v12 = v11 + 1;
    v32 = a1;
    v48 = (__int64 *)&v32;
    v13 = word_1400392D2;
    v49 = 4LL;
    Buffer = (__int64 *)&ProcessId;
    v14 = v9;
    ProcessId = a2;
    p_DestinationString = v55;
    v54 = (__int64 *)p_DestinationString_8->Buffer;
    LODWORD(v55[0]) = p_DestinationString_8->Length;
    v36 = 2164260864LL;
    v55[1] = &v36;
    v30 = 10;
    v51 = 4LL;
    v53 = 2LL;
    HIDWORD(v55[0]) = v11;
    v55[2] = 8LL;
LABEL_30:
    v47 = 4LL;
    goto LABEL_31;
  }
}
