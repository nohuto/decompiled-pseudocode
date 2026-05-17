/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x18012BEFC
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180128CF0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     Feature_2838281531__private_IsEnabledDeviceUsage @ 0x1800A08EC (Feature_2838281531__private_IsEnabledDeviceUsage.c)
 *     PssValidateSnapshotDescriptor @ 0x1800A0928 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A15F0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 *     PssNtFreeSnapshot @ 0x180128F80 (PssNtFreeSnapshot.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  _BYTE *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  int VirtualMemory; // ebx
  _BYTE v28[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-9Ch]
  __int64 v30; // [rsp+180h] [rbp+80h]
  __int64 v31; // [rsp+3C8h] [rbp+2C8h]
  __int64 v32; // [rsp+3E0h] [rbp+2E0h]
  __int64 v33; // [rsp+3E8h] [rbp+2E8h]
  __int64 v34; // [rsp+3F8h] [rbp+2F8h]
  __int64 v35; // [rsp+410h] [rbp+310h]
  __int64 v36; // [rsp+430h] [rbp+330h]
  __int64 v37; // [rsp+450h] [rbp+350h]
  __int64 v38; // [rsp+4C8h] [rbp+3C8h]

  if ( (unsigned int)Feature_2838281531__private_IsEnabledDeviceUsage() )
  {
    result = PssValidateSnapshotDescriptor((__int64 *)a1);
    if ( (int)result < 0 )
      return result;
  }
  memset_thunk_772440563353939046(v28, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF )
  {
    VirtualMemory = -1073741675;
    goto LABEL_30;
  }
  if ( (unsigned int)(v7 + 1144) < 0x478 )
  {
    VirtualMemory = -1073741675;
LABEL_30:
    if ( v37 )
      ZwDuplicateObject();
    if ( v36 )
      ZwDuplicateObject();
    if ( v34 )
      ZwDuplicateObject();
    if ( v35 )
      ZwDuplicateObject();
    if ( v32 )
      ZwDuplicateObject();
    if ( v31 )
      ZwDuplicateObject();
    if ( v38 )
      ZwDuplicateObject();
    goto LABEL_44;
  }
  v8 = 8LL;
  v9 = v28;
  v10 = (_OWORD *)a1;
  do
  {
    v11 = v10[1];
    *(_OWORD *)v9 = *v10;
    v12 = v10[2];
    *((_OWORD *)v9 + 1) = v11;
    v13 = v10[3];
    *((_OWORD *)v9 + 2) = v12;
    v14 = v10[4];
    *((_OWORD *)v9 + 3) = v13;
    v15 = v10[5];
    *((_OWORD *)v9 + 4) = v14;
    v16 = v10[6];
    *((_OWORD *)v9 + 5) = v15;
    v17 = v10[7];
    v10 += 8;
    *((_OWORD *)v9 + 6) = v16;
    v9 += 128;
    *((_OWORD *)v9 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = *(_QWORD *)(a1 + 872);
  v19 = v10[1];
  *(_OWORD *)v9 = *v10;
  v20 = v10[2];
  *((_OWORD *)v9 + 1) = v19;
  v21 = v10[3];
  *((_OWORD *)v9 + 2) = v20;
  v22 = v10[4];
  *((_OWORD *)v9 + 3) = v21;
  v23 = v10[5];
  *((_OWORD *)v9 + 4) = v22;
  v24 = v10[6];
  v25 = *((_QWORD *)v10 + 14);
  *((_OWORD *)v9 + 5) = v23;
  *((_OWORD *)v9 + 6) = v24;
  *((_QWORD *)v9 + 14) = v25;
  v31 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( v18 )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 896) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 920) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 944) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 976) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 1008) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 1128) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_30;
  v29 = v29 & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v33 = 1144LL;
  if ( *(_WORD *)(a1 + 280) )
    v30 = 296LL;
  VirtualMemory = NtWriteVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_30;
  if ( *(_QWORD *)(a1 + 904) )
  {
    VirtualMemory = NtWriteVirtualMemory();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  VirtualMemory = 0;
  *a3 = 0LL;
LABEL_44:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)VirtualMemory;
}
