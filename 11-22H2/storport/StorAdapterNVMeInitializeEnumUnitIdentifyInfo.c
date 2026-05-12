/*
 * XREFs of StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1C009F400
 * Callers:
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjshhssqdu_EtwWriteTransfer @ 0x1C00231C0 (McTemplateK0qjshhssqdu_EtwWriteTransfer.c)
 *     StorUnitReleaseIdentifyNamespaceResources @ 0x1C0023364 (StorUnitReleaseIdentifyNamespaceResources.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 */

__int64 __fastcall StorAdapterNVMeInitializeEnumUnitIdentifyInfo(__int64 a1, int a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  unsigned __int8 *v7; // r13
  void *v8; // r12
  char v9; // di
  char v11; // r10
  __int64 v12; // r9
  _BYTE *Pool; // rax
  int NVMeIdentifyInfo; // ebx
  unsigned __int8 *v15; // rax
  unsigned __int16 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  unsigned __int8 *v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r9
  void *v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v28; // [rsp+20h] [rbp-B1h]
  int v29; // [rsp+20h] [rbp-B1h]
  int v30; // [rsp+20h] [rbp-B1h]
  int v31; // [rsp+28h] [rbp-A9h]
  int v32; // [rsp+28h] [rbp-A9h]
  int v33; // [rsp+28h] [rbp-A9h]
  _BYTE *v36; // [rsp+88h] [rbp-49h] BYREF
  char v37; // [rsp+90h] [rbp-41h]
  __int128 v38; // [rsp+98h] [rbp-39h] BYREF
  int v39; // [rsp+A8h] [rbp-29h]
  char v40; // [rsp+ACh] [rbp-25h]
  __int128 v41; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-11h]
  __int64 v43; // [rsp+D0h] [rbp-1h]
  char v44; // [rsp+D8h] [rbp+7h]

  v5 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v36 = a5;
  v11 = a2;
  v12 = a1;
  if ( !a4 || !a5 )
  {
    NVMeIdentifyInfo = -1073741811;
    v9 = 1;
    goto LABEL_15;
  }
  *a4 = 0;
  *a5 = 0;
  Pool = (_BYTE *)RaidAllocatePool(64LL, 4096LL, 1229873490LL, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL));
  v5 = Pool;
  if ( !Pool )
    goto LABEL_4;
  NVMeIdentifyInfo = StorGetNVMeIdentifyInfo(a1, *(_QWORD *)(a3 + 8), a2, 0, v28, v31, 0, Pool);
  if ( NVMeIdentifyInfo < 0 )
  {
    v9 = 2;
    goto LABEL_5;
  }
  if ( !v5[4 * (v5[26] & 0xF) + 130] && !*(_QWORD *)v5 )
    goto LABEL_5;
  *a4 = 1;
  v15 = (unsigned __int8 *)RaidAllocatePool(64LL, 4096LL, 1229873490LL, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL));
  v7 = v15;
  if ( !v15 )
  {
LABEL_4:
    NVMeIdentifyInfo = -1073741670;
    v9 = 1;
LABEL_5:
    v12 = a1;
LABEL_14:
    v11 = a2;
    goto LABEL_15;
  }
  NVMeIdentifyInfo = StorGetNVMeIdentifyInfo(a1, *(_QWORD *)(a3 + 8), a2, 3, v29, v32, 0, v15);
  if ( NVMeIdentifyInfo < 0 )
  {
    v9 = 3;
LABEL_13:
    v12 = a1;
    goto LABEL_14;
  }
  v19 = *v7;
  v20 = v7;
  if ( *v7 )
  {
    v21 = 0;
    while ( v21 < 0x1000 )
    {
      if ( v19 == 4 && v20[4] == 2 )
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 8) + 1872LL) |= 0x20u;
        break;
      }
      v22 = v20[1];
      v21 += v22 + 4;
      v20 += v22 + 4;
      v19 = *v20;
      if ( !*v20 )
        break;
    }
  }
  v23 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v23 + 1872) & 0x20) == 0 )
    goto LABEL_13;
  v24 = (void *)RaidAllocatePool(64LL, 4096LL, 1229873490LL, *(_QWORD *)(v23 + 8));
  v25 = *(_QWORD *)(a3 + 8);
  v8 = v24;
  if ( !v24 )
  {
    *(_DWORD *)(v25 + 1872) &= ~0x20u;
    v9 = 1;
    NVMeIdentifyInfo = -1073741670;
    goto LABEL_13;
  }
  v26 = StorGetNVMeIdentifyInfo(a1, v25, a2, 5, v30, v33, 2, v24);
  v11 = a2;
  NVMeIdentifyInfo = v26;
  v12 = a1;
  if ( v26 >= 0 )
    *v36 = 1;
  else
    v9 = 4;
LABEL_15:
  if ( StorEtwLoggingEnabled && NVMeIdentifyInfo < 0 )
  {
    v16 = *(unsigned __int16 **)(v12 + 5912);
    v39 = 0;
    v40 = 0;
    v43 = 0LL;
    v44 = 0;
    v36 = 0LL;
    v37 = 0;
    v38 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    if ( v16 )
    {
      v41 = *(_OWORD *)(v16 + 12);
      v42 = *(_OWORD *)(v16 + 20);
      v43 = *((_QWORD *)v16 + 7);
      v36 = (_BYTE *)*((_QWORD *)v16 + 8);
      v38 = *(_OWORD *)(v16 + 2);
      v39 = *((_DWORD *)v16 + 5);
    }
    if ( (byte_1C0092A03 & 0x40) != 0 )
    {
      if ( v16 )
      {
        v17 = v16[1];
        v18 = *v16;
      }
      else
      {
        v17 = 0LL;
        v18 = 0LL;
      }
      McTemplateK0qjshhssqdu_EtwWriteTransfer(
        (__int64)&v38,
        v17,
        v18,
        *(_DWORD *)(v12 + 56),
        v12 + 5000,
        (const char *)&v38,
        v18,
        v17,
        (const char *)&v41,
        (const char *)&v36,
        v11,
        NVMeIdentifyInfo,
        v9);
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x494E6152u);
  if ( NVMeIdentifyInfo < 0 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0x494E6152u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x494E6152u);
  }
  else
  {
    StorUnitReleaseIdentifyNamespaceResources(*(_QWORD *)(a3 + 8));
    *(_QWORD *)(*(_QWORD *)(a3 + 8) + 3464LL) = v5;
    *(_QWORD *)(*(_QWORD *)(a3 + 8) + 3472LL) = v8;
  }
  return (unsigned int)NVMeIdentifyInfo;
}
