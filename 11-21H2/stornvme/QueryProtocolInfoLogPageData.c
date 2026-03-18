/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C00014A0
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001414 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v4; // r12
  bool v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r10
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // cl
  unsigned __int64 v13; // r9
  _DWORD *v14; // r15
  unsigned int v15; // edx
  int NamespaceId; // esi
  unsigned int v17; // edi
  int v18; // eax
  unsigned __int8 v19; // cl
  unsigned int v20; // r13d
  int v21; // r8d
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  char v26; // cl
  const void *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-30h] BYREF
  __int64 SrbExtension; // [rsp+50h] [rbp-28h]
  unsigned __int64 v33; // [rsp+58h] [rbp-20h]
  unsigned __int64 v34; // [rsp+60h] [rbp-18h]
  char v36; // [rsp+C8h] [rbp+50h]
  unsigned int v37; // [rsp+D0h] [rbp+58h]
  __int64 v38; // [rsp+D8h] [rbp+60h] BYREF

  v2 = 0;
  v30 = 0LL;
  v4 = 1;
  SrbExtension = GetSrbExtension(a2);
  v5 = 1;
  v31 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  ControllerMaxTransferSize = GetControllerMaxTransferSize(v7, v6, 0LL);
  v12 = *(_BYTE *)(a2 + 2);
  v13 = 0LL;
  v37 = ControllerMaxTransferSize;
  v34 = 0LL;
  v36 = v12;
  if ( v12 == 40 )
    v14 = *(_DWORD **)(a2 + 64);
  else
    v14 = *(_DWORD **)(a2 + 24);
  v15 = v14[11];
  NamespaceId = -1;
  if ( v15 <= 8 )
  {
    if ( v15 >= 7 )
    {
      v17 = v14[14];
      v5 = v17 >= 0x200;
      v26 = *(_BYTE *)(v11 + 261) >> 3;
      goto LABEL_51;
    }
    if ( v15 == 1 )
    {
      v17 = v14[14];
      v5 = v17 >= 0x40;
      goto LABEL_8;
    }
    if ( v15 == 2 )
    {
      v17 = 512;
      NamespaceId = -((*(_BYTE *)(v11 + 261) & 1) == 0);
      goto LABEL_8;
    }
    if ( v15 != 3 )
    {
      if ( v15 == 4 )
      {
        v17 = 4096;
        goto LABEL_8;
      }
      if ( v15 != 5 )
      {
        if ( v15 == 6 )
        {
          v17 = 564;
          goto LABEL_8;
        }
        goto LABEL_45;
      }
      v17 = 4096;
      v26 = *(_BYTE *)(v11 + 261) >> 1;
      goto LABEL_51;
    }
LABEL_42:
    v17 = 512;
    goto LABEL_8;
  }
  if ( v15 == 9 )
    goto LABEL_42;
  if ( v15 != 13 )
  {
    if ( v15 == 128 )
    {
      v17 = 64;
      goto LABEL_47;
    }
    if ( v15 == 129 )
    {
      v17 = 512;
      goto LABEL_47;
    }
    if ( v15 - 192 <= 1 )
    {
      v17 = v14[14];
      goto LABEL_8;
    }
LABEL_45:
    v17 = v14[14];
LABEL_47:
    NamespaceId = 0;
    goto LABEL_8;
  }
  v17 = v14[14];
  v26 = *(_BYTE *)(v11 + 261) >> 4;
  v5 = v17 >= 0x200;
  if ( (*(_BYTE *)(v11 + 261) & 0x10) != 0 )
  {
    v13 = (unsigned __int64)*(unsigned int *)(v11 + 352) << 16;
    v34 = v13;
  }
LABEL_51:
  if ( (v26 & 1) == 0 )
  {
    v2 = -1056964606;
LABEL_64:
    v4 = 6;
    goto LABEL_65;
  }
  v12 = v36;
LABEL_8:
  if ( v14[14] < v17 || !v17 || !v5 )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( v15 == 5 )
  {
    v27 = *(const void **)(v10 + 3792);
    if ( v27 )
    {
      memmove((char *)v14 + (unsigned int)v14[13] + 36, v27, v17);
LABEL_65:
      *(_BYTE *)(a2 + 3) = v4;
      return v2;
    }
    goto LABEL_63;
  }
  if ( NamespaceId != -1 )
  {
    if ( v12 == 40 )
      v18 = *(_DWORD *)(a2 + 24);
    else
      v18 = *(_DWORD *)(a2 + 12);
    if ( (v18 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v12 == 40 )
        v19 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v19 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(v10, v19, v9, v13);
    }
  }
  if ( (*(_BYTE *)(v11 + 261) & 4) != 0 )
  {
    v9 = (unsigned int)v14[12] | ((unsigned __int64)(unsigned int)v14[16] << 32);
    v33 = v9;
  }
  if ( !v13 )
    goto LABEL_22;
  if ( v9 >= v13 )
  {
LABEL_63:
    v2 = -1056964602;
    goto LABEL_64;
  }
  if ( v17 > (int)v13 - (int)v9 )
    v17 = v13 - v9;
LABEL_22:
  v20 = v17;
  if ( v17 > v37 )
    v20 = v37;
  NVMeAllocateDmaBuffer(v10, v20, &v30, &v31);
  if ( v30 )
  {
    NVMeZeroMemory(v30, v20);
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v21) = *((_BYTE *)v14 + 44);
    BuildGetLogPageCommand(a1, SrbExtension, v21, v20, v31, NamespaceId, v33, v14[17]);
    v22 = SrbExtension;
    *(_DWORD *)(SrbExtension + 4136) ^= (*(_DWORD *)(SrbExtension + 4136) ^ (v14[18] << 15)) & 0x8000;
    v23 = v14[18];
    v24 = *(_DWORD *)(v22 + 4136);
    *(_BYTE *)(v22 + 4253) |= 4u;
    *(_QWORD *)(v22 + 4224) = QueryProtocolInfoCompletion;
    *(_DWORD *)(v22 + 4136) = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)((_WORD)v23 << 7)) & 0xF00;
    *(_QWORD *)(v22 + 4200) = v30;
    *(_QWORD *)(v22 + 4208) = v31;
    *(_DWORD *)(v22 + 4240) = v20;
    if ( v17 <= v37 )
    {
LABEL_26:
      *(_QWORD *)(v22 + 4232) = v38;
      return v2;
    }
    StorPortExtendedFunction(0LL, a1, 56LL, 1701672526LL, &v38);
    v28 = v38;
    if ( v38 )
    {
      *(_OWORD *)v38 = 0LL;
      *(_OWORD *)(v28 + 16) = 0LL;
      *(_OWORD *)(v28 + 32) = 0LL;
      *(_QWORD *)(v28 + 48) = 0LL;
      v29 = v33;
      *(_DWORD *)(v38 + 4) = 1;
      *(_QWORD *)(v38 + 32) = v29;
      *(_DWORD *)(v38 + 44) = 0;
      *(_QWORD *)(v38 + 16) = v30;
      *(_QWORD *)(v38 + 24) = v31;
      *(_DWORD *)(v38 + 12) = v20;
      *(_DWORD *)v38 = v14[11];
      *(_DWORD *)(v38 + 8) = NamespaceId;
      *(_DWORD *)(v38 + 40) = v14[14];
      *(_QWORD *)(v38 + 48) = v34;
      v22 = SrbExtension;
      goto LABEL_26;
    }
    *(_BYTE *)(a2 + 3) = 4;
    if ( v30 )
      NVMeFreeDmaBuffer(a1, v20, &v30, v31);
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  return 3238002691LL;
}
