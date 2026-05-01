/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C484 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087514 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180017D50 (RmpActivityImportanceMergeVectors.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v3; // edi
  DWORD v4; // r15d
  _QWORD *Value; // rbx
  unsigned int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // rdx
  int v10; // eax
  int v11; // edx
  struct _RM_ACTIVITY_HOST *v12; // r14
  char *v13; // r14
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v19; // [rsp+3Eh] [rbp-CAh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v23; // [rsp+4Ch] [rbp-BCh] BYREF
  BOOL v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  BOOL v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  _DWORD v32[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v36; // [rsp+A8h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B4h] [rbp-54h]
  __int64 *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  _DWORD *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  BOOL *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  unsigned int *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  __int16 *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  __int16 *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  int *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  int *v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  int *v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  int *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  BOOL *v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  BOOL *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  int *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  BOOL *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]

  if ( (a2 & 2) != 0 )
  {
    v3 = *((_DWORD *)a1 + 370);
    if ( (*((_BYTE *)a1 + 852) & 1) != 0 )
    {
      v4 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockShared((char *)a1 + 64);
      v6 = *((_DWORD *)a1 + 186);
      if ( HampLockTrackerId != -1 )
      {
        v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v8 = *v7;
        if ( (*v7 & 2) == 0 )
          __int2c();
        if ( v7[2]-- == 1 )
          *v7 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared((char *)a1 + 64);
    }
    else
    {
      v17 = 0;
      v12 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 144);
      LOWORD(v17) = 1;
      if ( v12 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1152) || (v13 = (char *)v12 - 1296) == 0LL )
      {
        v6 = v17;
      }
      else
      {
        v6 = v17;
        do
        {
          if ( *((_DWORD *)v13 + 320) == 2 || (v13[1332] & 4) != 0 )
            v6 = RmpActivityImportanceMergeVectors(v6, *((_DWORD *)v13 + 338));
          v14 = *((_QWORD *)v13 + 162);
          v15 = 3 * (*((int *)v13 + 332) + 47LL);
          v16 = *((_QWORD *)v13 + 165);
          v13 = 0LL;
          if ( v14 != v16 + 8 * v15 )
            v13 = (char *)(v14 - 1296);
        }
        while ( v13 );
      }
    }
    *((_DWORD *)a1 + 370) = v6;
    if ( (*((_WORD *)a1 + 740) & 0x400) == 0 )
    {
      v10 = *((_DWORD *)a1 + 314);
      if ( (v10 & 2) != 0 )
        *((_DWORD *)a1 + 314) = v10 & 0xFFFFFFFD;
    }
    v11 = *((_DWORD *)a1 + 370);
    if ( v3 != v11
      && (unsigned int)dword_1800DC1E0 > 4
      && (byte_1800DC1F0 & 9) != 0
      && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
    {
      v72 = 4LL;
      v70 = 4LL;
      v21 = (v11 & 0x400) != 0;
      v68 = 4LL;
      v22 = (v3 >> 10) & 1;
      v66 = 4LL;
      v64 = 4LL;
      v23 = (v11 & 0x200) != 0;
      v24 = (v3 & 0x200) != 0;
      v25 = BYTE1(v11) & 1;
      v26 = (v3 >> 8) & 1;
      v27 = ((unsigned __int16)v11 >> 7) & 1;
      v29 = ((unsigned __int16)v11 >> 6) & 1;
      v28 = (v3 >> 7) & 1;
      v30 = (v3 >> 6) & 1;
      v18 = ((unsigned __int16)v11 >> 4) & 3;
      v19 = ((unsigned __int16)v3 >> 4) & 3;
      LOWORD(v20) = ((unsigned __int16)v11 >> 1) & 7;
      LOWORD(v17) = ((unsigned __int16)v3 >> 1) & 7;
      v31 = (v11 & 1) != 0;
      v33 = *((_QWORD *)a1 + 4);
      v71 = &v21;
      v69 = &v22;
      v67 = &v23;
      v65 = &v24;
      v63 = &v25;
      v61 = &v26;
      v32[0] = v3 & 1;
      v62 = 4LL;
      v59 = &v27;
      v60 = 4LL;
      v57 = &v28;
      v58 = 4LL;
      v55 = &v29;
      v56 = 4LL;
      v53 = &v30;
      v54 = 4LL;
      v51 = &v18;
      v49 = &v19;
      v47 = &v20;
      v45 = &v17;
      v43 = &v31;
      v41 = v32;
      v39 = &v33;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DC1E8;
      v52 = 2LL;
      v50 = 2LL;
      v48 = 2LL;
      v46 = 2LL;
      v44 = 4LL;
      v42 = 4LL;
      v40 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
      v36 = &unk_1800C3707;
      UserData.Reserved = 2;
      v37 = 399;
      v38 = 1;
      v32[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
