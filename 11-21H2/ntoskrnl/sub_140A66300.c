/*
 * XREFs of sub_140A66300 @ 0x140A66300
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029B8E8 @ 0x14029B8E8 (sub_14029B8E8.c)
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054A9B4 @ 0x14054A9B4 (sub_14054A9B4.c)
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055AE94 @ 0x14055AE94 (sub_14055AE94.c)
 *     sub_14055B0E8 @ 0x14055B0E8 (sub_14055B0E8.c)
 *     sub_14055BACC @ 0x14055BACC (sub_14055BACC.c)
 *     sub_14055BB24 @ 0x14055BB24 (sub_14055BB24.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 *     sub_140A66B0C @ 0x140A66B0C (sub_140A66B0C.c)
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 *     sub_140A67608 @ 0x140A67608 (sub_140A67608.c)
 *     sub_140A67994 @ 0x140A67994 (sub_140A67994.c)
 *     sub_140A67A68 @ 0x140A67A68 (sub_140A67A68.c)
 */

__int64 __fastcall sub_140A66300(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v8; // edx
  struct _KPRCB *v9; // rbp
  __int64 v10; // rbx
  int v11; // edx
  _OWORD *v12; // rbx
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rax

  v1 = qword_140D018D8;
  v2 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_14055BB24();
      v4 = *(_DWORD *)(v1 + 80);
      if ( (v4 & 0x80u) != 0 )
      {
        v5 = sub_14055A628(0);
        v4 = *(_DWORD *)(v1 + 80);
        v2 = v5;
        v6 = v5 - qword_140D018C0;
        if ( (v4 & 1) != 0 )
          *(_QWORD *)(v1 + 448) = v6;
        else
          *(_QWORD *)(v1 + 496) = v6;
      }
      if ( (v4 & 1) != 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        RtlCaptureContext(*((PCONTEXT *)CurrentPrcb + 4408));
        sub_14041F720((__int64)CurrentPrcb + 256, v8);
      }
      else
      {
        v9 = KeGetCurrentPrcb();
        v10 = *(_QWORD *)(v1 + 560);
        RtlCaptureContext(*((PCONTEXT *)v9 + 4408));
        sub_14041F720((__int64)v9 + 256, v11);
        v12 = (_OWORD *)(v10 + 840);
        if ( v12 )
        {
          memset(v12, 0, 0xBB8uLL);
          v13 = (_OWORD *)*((_QWORD *)v9 + 4408);
          v14 = 9LL;
          do
          {
            *v12 = *v13;
            v12[1] = v13[1];
            v12[2] = v13[2];
            v12[3] = v13[3];
            v12[4] = v13[4];
            v12[5] = v13[5];
            v12[6] = v13[6];
            v12 += 8;
            v15 = v13[7];
            v13 += 8;
            *(v12 - 1) = v15;
            --v14;
          }
          while ( v14 );
          *v12 = *v13;
          v12[1] = v13[1];
          v12[2] = v13[2];
          v12[3] = v13[3];
          v12[4] = v13[4];
        }
        if ( byte_140D018D0 )
        {
          sub_14029B8E8(*((_QWORD *)KeGetCurrentPrcb() + 216), MEMORY[0xFFFFF780000005F0] | 0x100LL);
          *(_BYTE *)(v1 + 425) = 1;
        }
      }
      v16 = *(_DWORD *)(v1 + 80);
      if ( (v16 & 0x80) != 0 )
      {
        v17 = sub_14055A628(0);
        sub_14055B0E8((const GUID *)v1, v17 - v2);
        v16 = *(_DWORD *)(v1 + 80);
      }
      v18 = 0LL;
      if ( (v16 & 1) == 0 )
        v18 = v1 + 688;
      v3 = sub_140A67248(v1, v18);
      if ( v3 >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 1) != 0
          && (v20 = RtlNumberOfSetBitsEx((_QWORD *)(v1 + 544)),
              v21 = *(_DWORD *)(v1 + 80),
              v19 = v20,
              *(_QWORD *)(v1 + 104) = v20,
              (v21 & 0x200) != 0)
          && v20 > (*(_QWORD *)(v1 + 1136) >> 12) + (unsigned __int64)((*(_QWORD *)(v1 + 1136) & 0xFFFLL) != 0) )
        {
          v3 = -1073741670;
          *(_DWORD *)(v1 + 80) = v21 | 0x400;
        }
        else
        {
          v3 = sub_140A66EB4(v1, v18, v19);
          if ( v3 >= 0 )
          {
            if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
            {
              sub_140A67608(v1);
            }
            else
            {
              sub_140551F78(
                *(_NT_PRODUCT_TYPE **)(v1 + 560),
                6,
                *(_DWORD *)v1,
                *(_QWORD *)(v1 + 8),
                *(_QWORD *)(v1 + 16),
                *(_QWORD *)(v1 + 24),
                *(_QWORD *)(v1 + 32),
                (__int64)KeGetCurrentThread());
              if ( *(_QWORD *)(v1 + 696) || *(_QWORD *)(v1 + 704) )
              {
                v22 = *(_DWORD *)(v1 + 44) & 2;
                if ( (*(_DWORD *)(v1 + 80) & 0x80) != 0 )
                  v2 = sub_14055A628(0);
                sub_14054A9B4(v22, *(_QWORD *)(v1 + 208), (_QWORD *)(v1 + 192), v1 + 144);
                if ( (*(_DWORD *)(v1 + 80) & 0x80) != 0 )
                {
                  *(_QWORD *)(v1 + 528) = sub_14055A628(0) - v2;
                  sub_14055AE94((const GUID *)v1);
                }
              }
              sub_140A66B0C();
              sub_140A67608(v1);
              sub_140A67994(v1);
            }
            v3 = 0;
          }
        }
      }
      sub_140A67A68(v1 + 304, 0LL);
      v23 = sub_14055A628(0) - qword_140D018C0;
      if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
        *(_QWORD *)(v1 + 440) = v23;
      else
        *(_QWORD *)(v1 + 488) = v23;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    sub_14055BACC();
    *(_QWORD *)(v1 + 192) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    sub_140A660C0((char *)(v1 + 304));
    v3 = 0;
    qword_140D018C0 = sub_14055A628(0);
  }
  return (unsigned int)v3;
}
