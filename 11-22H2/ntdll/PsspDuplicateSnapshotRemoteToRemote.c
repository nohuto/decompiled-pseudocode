/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18012AFB8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180127840 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009F530 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009F570 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009F5D0 (ZwReadVirtualMemory.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801278C0 (PssNtFreeRemoteSnapshot.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  int VirtualMemory; // ebx
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  int *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  _BYTE v32[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v33; // [rsp+84h] [rbp-7Ch]
  __int16 v34; // [rsp+198h] [rbp+98h]
  __int64 v35; // [rsp+1A0h] [rbp+A0h]
  __int64 v36; // [rsp+3E8h] [rbp+2E8h]
  __int64 v37; // [rsp+400h] [rbp+300h]
  __int64 v38; // [rsp+408h] [rbp+308h]
  __int64 v39; // [rsp+418h] [rbp+318h]
  __int64 v40; // [rsp+430h] [rbp+330h]
  __int64 v41; // [rsp+450h] [rbp+350h]
  __int64 v42; // [rsp+470h] [rbp+370h]
  __int64 v43; // [rsp+4E8h] [rbp+3E8h]
  int v44; // [rsp+500h] [rbp+400h] BYREF
  __int64 v45; // [rsp+868h] [rbp+768h]
  unsigned int v46; // [rsp+878h] [rbp+778h]
  __int64 v47; // [rsp+880h] [rbp+780h]
  __int64 v48; // [rsp+888h] [rbp+788h]
  __int64 v49; // [rsp+898h] [rbp+798h]
  __int64 v50; // [rsp+8B0h] [rbp+7B0h]
  __int64 v51; // [rsp+8D0h] [rbp+7D0h]
  __int64 v52; // [rsp+8F0h] [rbp+7F0h]
  __int64 v53; // [rsp+968h] [rbp+868h]

  *a4 = 0LL;
  memset_thunk_772440563353939046(v32, 0, 0x478uLL);
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_41;
  if ( v29 == 1144 )
  {
    if ( v44 == 1146311504 )
    {
      v6 = (unsigned __int64)v46 << 6;
      if ( v6 > 0xFFFFFFFF || (unsigned int)v6 >= 0xFFFFFB88 )
      {
        VirtualMemory = -1073741675;
        goto LABEL_41;
      }
      v7 = 8LL;
      v8 = v32;
      v9 = &v44;
      do
      {
        v10 = *((_OWORD *)v9 + 1);
        *(_OWORD *)v8 = *(_OWORD *)v9;
        v11 = *((_OWORD *)v9 + 2);
        *((_OWORD *)v8 + 1) = v10;
        v12 = *((_OWORD *)v9 + 3);
        *((_OWORD *)v8 + 2) = v11;
        v13 = *((_OWORD *)v9 + 4);
        *((_OWORD *)v8 + 3) = v12;
        v14 = *((_OWORD *)v9 + 5);
        *((_OWORD *)v8 + 4) = v13;
        v15 = *((_OWORD *)v9 + 6);
        *((_OWORD *)v8 + 5) = v14;
        v16 = *((_OWORD *)v9 + 7);
        v9 += 32;
        *((_OWORD *)v8 + 6) = v15;
        v8 += 128;
        *((_OWORD *)v8 - 1) = v16;
        --v7;
      }
      while ( v7 );
      v17 = v45;
      v18 = *((_OWORD *)v9 + 1);
      *(_OWORD *)v8 = *(_OWORD *)v9;
      v19 = *((_OWORD *)v9 + 2);
      *((_OWORD *)v8 + 1) = v18;
      v20 = *((_OWORD *)v9 + 3);
      *((_OWORD *)v8 + 2) = v19;
      v21 = *((_OWORD *)v9 + 4);
      *((_OWORD *)v8 + 3) = v20;
      v22 = *((_OWORD *)v9 + 5);
      *((_OWORD *)v8 + 4) = v21;
      v23 = *((_OWORD *)v9 + 6);
      v24 = *((_QWORD *)v9 + 14);
      *((_OWORD *)v8 + 5) = v22;
      *((_OWORD *)v8 + 6) = v23;
      *((_QWORD *)v8 + 14) = v24;
      v36 = 0LL;
      v37 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      if ( v17 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      if ( v47 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      if ( v49 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      if ( v50 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      if ( v51 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      if ( v52 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      if ( v53 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
      }
      VirtualMemory = ZwAllocateVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_41;
      v33 = v33 & 0xFFFFFFF8 | 1;
      if ( v38 )
        v38 = 1144LL;
      if ( v34 )
        v35 = 296LL;
      v25 = 0LL;
      VirtualMemory = NtWriteVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_41;
      if ( v48 )
      {
        VirtualMemory = ZwAllocateVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_41;
        if ( (_DWORD)v6 )
        {
          do
          {
            v26 = (unsigned int)v6 - v25;
            v27 = v26 != 0;
            VirtualMemory = ZwReadVirtualMemory();
            if ( VirtualMemory < 0 )
              goto LABEL_41;
            if ( v29 != v27 )
              goto LABEL_40;
            VirtualMemory = NtWriteVirtualMemory();
            if ( VirtualMemory < 0 )
              goto LABEL_41;
            if ( v30 != v29 )
            {
LABEL_40:
              VirtualMemory = -2147483635;
              goto LABEL_41;
            }
            v25 += v30;
          }
          while ( v25 < (unsigned int)v6 );
        }
        ZwFreeVirtualMemory();
      }
      VirtualMemory = 0;
      *a4 = 0LL;
      goto LABEL_55;
    }
    VirtualMemory = -1073741816;
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_41:
  if ( v42 )
    ZwDuplicateObject();
  if ( v41 )
    ZwDuplicateObject();
  if ( v39 )
    ZwDuplicateObject();
  if ( v40 )
    ZwDuplicateObject();
  if ( v37 )
    ZwDuplicateObject();
  if ( v36 )
    ZwDuplicateObject();
  if ( v43 )
    ZwDuplicateObject();
LABEL_55:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
