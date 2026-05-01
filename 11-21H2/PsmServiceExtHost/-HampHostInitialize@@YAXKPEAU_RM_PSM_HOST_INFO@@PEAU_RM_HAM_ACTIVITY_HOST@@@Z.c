/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027A10
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E70 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampHostInitialize(char a1, struct _RM_PSM_HOST_INFO *a2, struct _RM_HAM_ACTIVITY_HOST *a3)
{
  __int64 v6; // rbx
  char *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r14
  char v12; // dl
  int v13; // eax
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  char *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  __int64 *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  WCHAR String1[72]; // [rsp+E0h] [rbp-20h] BYREF

  memset_0((char *)a3 + 16, 0, 0x418uLL);
  *(_OWORD *)a3 = 0LL;
  RtlInitializeSRWLock(a3);
  *((_DWORD *)a3 + 2) = 0;
  *((_QWORD *)a3 + 77) = (char *)a3 + 608;
  *((_QWORD *)a3 + 76) = (char *)a3 + 608;
  RtlInitializeConditionVariable((char *)a3 + 16);
  RtlInitializeConditionVariable((char *)a3 + 696);
  v6 = -1LL;
  *((_OWORD *)a3 + 45) = 0LL;
  *((_QWORD *)a3 + 92) = -1LL;
  *(_OWORD *)((char *)a3 + 760) = 0LL;
  *((_QWORD *)a3 + 97) = -1LL;
  v7 = (char *)a3 + 24;
  *((_QWORD *)a3 + 128) = -1LL;
  *((_QWORD *)a3 + 129) = -1LL;
  *((_QWORD *)a3 + 130) = -1LL;
  *((_QWORD *)a3 + 131) = -1LL;
  *((_QWORD *)a3 + 83) &= 0xFFFFFFFFF997FFFFuLL;
  *((_QWORD *)a3 + 83) |= 0x19940000uLL;
  *((_DWORD *)a3 + 197) &= ~1u;
  *((_DWORD *)a3 + 197) |= a1 & 1;
  v8 = 4LL;
  do
  {
    v7 += 128;
    v9 = *(_OWORD *)a2;
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *((_OWORD *)v7 - 8) = v9;
    *((_OWORD *)v7 - 7) = *((_OWORD *)a2 - 7);
    *((_OWORD *)v7 - 6) = *((_OWORD *)a2 - 6);
    *((_OWORD *)v7 - 5) = *((_OWORD *)a2 - 5);
    *((_OWORD *)v7 - 4) = *((_OWORD *)a2 - 4);
    *((_OWORD *)v7 - 3) = *((_OWORD *)a2 - 3);
    *((_OWORD *)v7 - 2) = *((_OWORD *)a2 - 2);
    *((_OWORD *)v7 - 1) = *((_OWORD *)a2 - 1);
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v7 = *(_OWORD *)a2;
  *((_OWORD *)v7 + 1) = *((_OWORD *)a2 + 1);
  v10 = *((_QWORD *)a2 + 4);
  v11 = 0LL;
  *((_QWORD *)v7 + 4) = v10;
  if ( *((_DWORD *)a3 + 140) == 2 )
  {
    memset_0(String1, 0, 0x82uLL);
    v17 = 130;
    if ( (int)PsmGetApplicationNameFromKey((char *)a3 + 24, String1, &v17) >= 0 )
      v11 = CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2;
  }
  *((_QWORD *)a3 + 83) &= ~0x200000000000000uLL;
  *((_QWORD *)a3 + 83) |= v11 << 57;
  *((_QWORD *)a3 + 102) = 1LL;
  if ( (a1 & 4) != 0 )
  {
    *((_BYTE *)a3 + 592) = 1;
    v12 = 1;
  }
  else if ( (a1 & 8) != 0 )
  {
    *((_BYTE *)a3 + 592) = 2;
    v12 = 2;
  }
  else
  {
    *((_BYTE *)a3 + 592) = 0;
    v12 = 0;
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v18 = *((_DWORD *)a3 + 139);
    v16 = *((_BYTE *)a3 + 560);
    v19 = *((_QWORD *)a3 - 4);
    v15 = v12;
    v13 = *((unsigned __int8 *)a3 + 489);
    v36 = (char *)a3 + 488;
    v38 = 0;
    v35 = 4LL;
    v33 = 1LL;
    v37 = 4 * v13 + 8;
    v34 = &v18;
    v32 = &v15;
    v30 = &v16;
    v28 = &v19;
    v31 = 1LL;
    v29 = 8LL;
    while ( *((_WORD *)a3 + v6++ + 13) != 0 )
      ;
    v25 = (char *)a3 + 24;
    v26 = 2 * v6 + 2;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v27 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v22 = &unk_1800C08D3;
    UserData.Reserved = 2;
    v23 = 69;
    v24 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
}
