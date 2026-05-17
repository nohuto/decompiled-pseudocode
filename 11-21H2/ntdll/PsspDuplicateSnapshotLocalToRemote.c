/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x18008BD0C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18008BCA0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x18008C0C0 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A47B0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A47F0 (ZwDuplicateObject.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _QWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+48h] [rbp-B8h]
  _QWORD v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v39[144]; // [rsp+60h] [rbp-A0h] BYREF

  v37 = a4;
  v36 = 0LL;
  memset(v39, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF )
  {
    v27 = -1073741675;
  }
  else
  {
    v8 = v7 + 1144;
    if ( (unsigned int)(v7 + 1144) < 0x478 )
    {
      v27 = -1073741675;
    }
    else
    {
      v9 = 8LL;
      v10 = (_OWORD *)a1;
      v11 = v39;
      do
      {
        v12 = v10[1];
        *(_OWORD *)v11 = *v10;
        v13 = v10[2];
        *((_OWORD *)v11 + 1) = v12;
        v14 = v10[3];
        *((_OWORD *)v11 + 2) = v13;
        v15 = v10[4];
        *((_OWORD *)v11 + 3) = v14;
        v16 = v10[5];
        *((_OWORD *)v11 + 4) = v15;
        v17 = v10[6];
        *((_OWORD *)v11 + 5) = v16;
        v18 = v10[7];
        v10 += 8;
        *((_OWORD *)v11 + 6) = v17;
        v11 += 16;
        *((_OWORD *)v11 - 1) = v18;
        --v9;
      }
      while ( v9 );
      v19 = *(_QWORD *)(a1 + 872);
      v20 = v10[1];
      *(_OWORD *)v11 = *v10;
      v21 = v10[2];
      *((_OWORD *)v11 + 1) = v20;
      v22 = v10[3];
      *((_OWORD *)v11 + 2) = v21;
      v23 = v10[4];
      *((_OWORD *)v11 + 3) = v22;
      v24 = v10[5];
      *((_OWORD *)v11 + 4) = v23;
      v25 = v10[6];
      v26 = *((_QWORD *)v10 + 14);
      *((_OWORD *)v11 + 5) = v24;
      *((_OWORD *)v11 + 6) = v25;
      v11[14] = v26;
      v39[109] = 0LL;
      v39[112] = 0LL;
      v39[115] = 0LL;
      v39[118] = 0LL;
      v39[122] = 0LL;
      v39[126] = 0LL;
      v39[141] = 0LL;
      if ( !v19 || (v27 = ZwDuplicateObject(-1LL, v19, a2, &v39[109], 0, 0), v27 >= 0) )
      {
        v28 = *(_QWORD *)(a1 + 896);
        if ( !v28 || (v27 = ZwDuplicateObject(-1LL, v28, a2, &v39[112], 0, 0), v27 >= 0) )
        {
          v29 = *(_QWORD *)(a1 + 920);
          if ( !v29 || (v27 = ZwDuplicateObject(-1LL, v29, a2, &v39[115], 0, 0), v27 >= 0) )
          {
            v30 = *(_QWORD *)(a1 + 944);
            if ( !v30 || (v27 = ZwDuplicateObject(-1LL, v30, a2, &v39[118], 0, 0), v27 >= 0) )
            {
              v31 = *(_QWORD *)(a1 + 976);
              if ( !v31 || (v27 = ZwDuplicateObject(-1LL, v31, a2, &v39[122], 0, 0), v27 >= 0) )
              {
                v32 = *(_QWORD *)(a1 + 1008);
                if ( !v32 || (v27 = ZwDuplicateObject(-1LL, v32, a2, &v39[126], 0, 0), v27 >= 0) )
                {
                  v33 = *(_QWORD *)(a1 + 1128);
                  if ( !v33 || (v27 = ZwDuplicateObject(-1LL, v33, a2, &v39[141], 0, 0), v27 >= 0) )
                  {
                    v38[0] = v8;
                    v27 = ZwAllocateVirtualMemory(a2, &v36, 0LL, v38, 4096, 4);
                    if ( v27 >= 0 )
                    {
                      HIDWORD(v39[0]) = HIDWORD(v39[0]) & 0xFFFFFFF8 | 1;
                      if ( *(_QWORD *)(a1 + 904) )
                        v39[113] = v36 + 1144;
                      if ( *(_WORD *)(a1 + 280) )
                        v39[36] = v36 + 296;
                      v27 = NtWriteVirtualMemory(a2, v36, v39, v8, 0LL);
                      if ( v27 >= 0 )
                      {
                        v34 = *(_QWORD *)(a1 + 904);
                        if ( !v34 || (v27 = NtWriteVirtualMemory(a2, v39[113], v34, (unsigned int)v7, 0LL), v27 >= 0) )
                        {
                          v27 = 0;
                          *a3 = v36;
                          goto LABEL_26;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v36 )
      {
        v38[0] = v8;
        ZwFreeVirtualMemory(-1LL, &v36, v38, 0x8000LL);
      }
    }
  }
  if ( v39[126] )
    ZwDuplicateObject(a2, v39[126], 0LL, 0LL, 0, 0);
  if ( v39[122] )
    ZwDuplicateObject(a2, v39[122], 0LL, 0LL, 0, 0);
  if ( v39[115] )
    ZwDuplicateObject(a2, v39[115], 0LL, 0LL, 0, 0);
  if ( v39[118] )
    ZwDuplicateObject(a2, v39[118], 0LL, 0LL, 0, 0);
  if ( v39[112] )
    ZwDuplicateObject(a2, v39[112], 0LL, 0LL, 0, 0);
  if ( v39[109] )
    ZwDuplicateObject(a2, v39[109], 0LL, 0LL, 0, 0);
  if ( v39[141] )
    ZwDuplicateObject(a2, v39[141], 0LL, 0LL, 0, 0);
LABEL_26:
  if ( (v37 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v27;
}
