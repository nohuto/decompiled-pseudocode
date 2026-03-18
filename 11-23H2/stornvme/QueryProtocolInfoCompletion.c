/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1C0018D60
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010FA4 (BuildGetLogPageCommand.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C00254A0 (ProcessNvmeHealthInfoLog.c)
 */

__int16 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rsi
  size_t v9; // r15
  _DWORD *v10; // rdi
  __int64 v11; // r8
  const void *v12; // rdx
  const void *v13; // rdx
  __int64 v14; // r10
  size_t v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  unsigned int v18; // ebp
  int v19; // edx
  unsigned __int64 v20; // r8
  bool v21; // zf
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ecx
  int v26; // eax
  unsigned __int64 v28; // [rsp+30h] [rbp-28h]

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  v8 = *(_QWORD *)(SrbExtension + 4232);
  v9 = *(unsigned int *)(SrbExtension + 4240);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v10 = *(_DWORD **)(v5 + 64);
  else
    v10 = *(_DWORD **)(v5 + 24);
  if ( !v6 )
  {
    *(_BYTE *)(v5 + 3) = 4;
LABEL_6:
    v10[14] = 0;
LABEL_7:
    if ( *(_QWORD *)(v7 + 4200) )
    {
      if ( v8 && *(_DWORD *)(v8 + 12) )
        LODWORD(v9) = *(_DWORD *)(v8 + 12);
      LOWORD(SrbExtension) = NVMeFreeDmaBuffer(a1, (unsigned int)v9, (__int64 *)(v7 + 4200), *(_QWORD *)(v7 + 4208));
    }
    v11 = *(_QWORD *)(v7 + 4232);
    if ( v11 )
    {
      LOWORD(SrbExtension) = StorPortExtendedFunction(1LL, a1, v11);
      *(_QWORD *)(v7 + 4232) = 0LL;
    }
    *(_QWORD *)(v7 + 4200) = 0LL;
    *(_DWORD *)(v7 + 4240) = 0;
    *(_BYTE *)(v7 + 4253) |= 8u;
    return SrbExtension;
  }
  LODWORD(SrbExtension) = v10[10];
  if ( *(_BYTE *)(v5 + 3) != 1 )
  {
    if ( (_DWORD)SrbExtension == 2 )
    {
      if ( v8 )
      {
        LODWORD(SrbExtension) = *(_DWORD *)(v8 + 4);
        if ( (SrbExtension & 1) == 0 )
        {
          LOWORD(SrbExtension) = *(_WORD *)(v6 + 14);
          if ( (SrbExtension & 0xE00) == 0 )
          {
            LOWORD(SrbExtension) = SrbExtension & 0x1FE;
            if ( (_WORD)SrbExtension == 4 )
            {
              *(_BYTE *)(v5 + 3) = 1;
              goto LABEL_7;
            }
          }
        }
      }
    }
    goto LABEL_6;
  }
  if ( !v8 )
  {
    if ( (_DWORD)SrbExtension == 3 )
      v10[15] = *(_DWORD *)v6;
    v10[14] = *(_DWORD *)(v7 + 4240);
    LODWORD(SrbExtension) = *(_DWORD *)(v7 + 4240);
    if ( (_DWORD)SrbExtension )
    {
      v12 = *(const void **)(v7 + 4200);
      if ( v12 )
      {
        LOWORD(SrbExtension) = (unsigned __int16)memmove(
                                                   (char *)v10 + (unsigned int)v10[13] + 36,
                                                   v12,
                                                   (unsigned int)SrbExtension);
        if ( v10[10] == 2 && v10[11] == 2 )
          LOWORD(SrbExtension) = ProcessNvmeHealthInfoLog(a1, a2, *(_QWORD *)(v7 + 4200), 13LL);
      }
    }
    goto LABEL_7;
  }
  if ( (_DWORD)SrbExtension != 2
    || (v13 = *(const void **)(v7 + 4200)) == 0LL
    || !(_DWORD)v9
    || (v14 = *(unsigned int *)(v8 + 44),
        LOWORD(SrbExtension) = v14 + v9,
        *(_DWORD *)(v8 + 40) < (unsigned int)(v14 + v9))
    || (SrbExtension = (unsigned int)v10[13], (v15 = *(_QWORD *)(v8 + 48)) != 0) && v15 < v9 + *(_QWORD *)(v8 + 32) )
  {
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_6;
  }
  LOWORD(SrbExtension) = (unsigned __int16)memmove((char *)v10 + SrbExtension + v14 + 36, v13, v9);
  v16 = *(_DWORD *)(v7 + 4240);
  if ( *(_DWORD *)(v8 + 44) )
    v16 += v10[14];
  v10[14] = v16;
  v17 = *(_DWORD *)(v8 + 40);
  if ( v17 == v16 )
    goto LABEL_7;
  if ( v17 <= v16 )
  {
    v10[14] = v17;
    goto LABEL_7;
  }
  *(_BYTE *)(v7 + 4253) |= 3u;
  v18 = v17 - v16;
  SrbAssignQueueId(a1, a2);
  v19 = *(_DWORD *)(v8 + 44);
  if ( !v19 )
    *(_DWORD *)(v8 + 4) &= ~1u;
  v20 = *(_QWORD *)(v8 + 32) + *(unsigned int *)(v7 + 4240);
  *(_QWORD *)(v8 + 32) = v20;
  v21 = *(_QWORD *)(v8 + 48) == 0LL;
  *(_DWORD *)(v8 + 44) = v19 + *(_DWORD *)(v7 + 4240);
  v22 = *(_DWORD *)(v8 + 12);
  if ( v21 )
  {
    if ( v18 >= v22 )
      v18 = *(_DWORD *)(v8 + 12);
  }
  else
  {
    v23 = *(_DWORD *)(v8 + 12);
    v24 = *(_DWORD *)(v8 + 48) - v20;
    if ( v22 >= v24 )
      v23 = *(_DWORD *)(v8 + 48) - v20;
    if ( v18 >= v23 )
    {
      v18 = *(_DWORD *)(v8 + 48) - v20;
      if ( v22 < v24 )
        v18 = *(_DWORD *)(v8 + 12);
    }
  }
  v28 = v20;
  LOBYTE(v20) = *(_BYTE *)v8;
  BuildGetLogPageCommand(a1, v7, v20, v18, *(_QWORD *)(v8 + 24), *(_DWORD *)(v8 + 8), v28, v10[17]);
  v25 = *(_DWORD *)(v7 + 4136) ^ (*(_DWORD *)(v7 + 4136) ^ (v10[18] << 15)) & 0x8000;
  *(_DWORD *)(v7 + 4136) = v25;
  v26 = v10[18];
  *(_BYTE *)(v7 + 4253) |= 4u;
  *(_DWORD *)(v7 + 4136) = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)((_WORD)v26 << 7)) & 0xF00;
  *(_QWORD *)(v7 + 4224) = QueryProtocolInfoCompletion;
  *(_QWORD *)(v7 + 4200) = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v7 + 4208) = *(_QWORD *)(v8 + 24);
  *(_DWORD *)(v7 + 4240) = v18;
  *(_QWORD *)(v7 + 4232) = v8;
  LOWORD(SrbExtension) = ProcessCommand(a1, a2);
  return SrbExtension;
}
