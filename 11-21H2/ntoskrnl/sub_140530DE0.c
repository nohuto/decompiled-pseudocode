/*
 * XREFs of sub_140530DE0 @ 0x140530DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_14052268C @ 0x14052268C (sub_14052268C.c)
 *     sub_1405226CC @ 0x1405226CC (sub_1405226CC.c)
 *     sub_140532404 @ 0x140532404 (sub_140532404.c)
 *     sub_1405336FC @ 0x1405336FC (sub_1405336FC.c)
 */

__int64 __fastcall sub_140530DE0(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        int a8,
        __int64 a9)
{
  char v11; // r13
  int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rcx
  void *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int64 v28; // xmm0_8
  char v29; // r12
  unsigned __int64 v30; // rdi
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  int v34; // eax
  unsigned int v36; // [rsp+30h] [rbp-40h]
  unsigned __int64 v37; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-30h] BYREF
  void *v39[2]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE Size[24]; // [rsp+58h] [rbp-18h] BYREF
  char v42; // [rsp+C0h] [rbp+50h]

  if ( a3 && ((a3 - 1) & a3) == 0 )
  {
    v38 = 0LL;
    v11 = 0;
    v37 = 0LL;
    v12 = 0;
    v39[0] = 0LL;
    *(_OWORD *)&Size[8] = 0LL;
    v39[1] = 0LL;
    if ( *(_DWORD *)(a1 + 160) != a4 )
      return (unsigned int)-1073741594;
    v13 = a7 & 7 | (8 * (a6 & 0x1F | (32 * (unsigned __int8)a5)));
    if ( a9 && *(_DWORD *)a9 == 1 && (*(_BYTE *)(a9 + 10) & 4) == 0 )
      v13 = *(unsigned __int16 *)(a9 + 12);
    if ( _bittest(*(const signed __int32 **)(a1 + 192), v13) )
    {
      v36 = HIWORD(a2);
      if ( HIWORD(a2) >= 0x20u || a2 >> 9 >= dword_140C49C68 || (a2 & 0x1FF) + a3 > 0x200 )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        byte_140C49C38 = sub_140252344(&qword_140C49C30);
        v14 = sub_140532404(a2);
        v15 = v14;
        if ( v14 && *(_QWORD *)(v14 + 16) )
        {
          *(_DWORD *)(v14 + 48) += a3;
          v42 = 0;
        }
        else
        {
          v42 = 1;
        }
        v16 = (unsigned __int8)byte_140C49C38;
        KeReleaseSpinLockFromDpcLevel(&qword_140C49C30);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v17 = (unsigned int)(v16 + 1);
              v20 = *((_QWORD *)CurrentPrcb + 4375);
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
              v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v21;
              if ( v22 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v16);
        if ( !v42 )
          return (unsigned int)v12;
        if ( v15 )
          goto LABEL_28;
        v12 = sub_1403CE24C(v17, 0x1C00u, &v38);
        if ( v12 >= 0 )
        {
          v11 = 1;
LABEL_28:
          *(_QWORD *)Size = 0x20000002000LL;
          v12 = sub_140522410(v17, 0x2000u, 0, MmCached, (PHYSICAL_ADDRESS *)v39, (__int64)&v39[1]);
          if ( v12 >= 0 )
          {
            v24 = v39[1];
            memset(v39[1], 0, *(unsigned int *)Size);
            v12 = sub_1403CE24C(v25, 4 * (unsigned int)(((unsigned __int64)*(unsigned int *)&Size[4] + 31) >> 5), &v37);
            if ( v12 < 0 )
              goto LABEL_44;
            *(_DWORD *)&Size[8] = *(_DWORD *)&Size[4];
            *(_QWORD *)&Size[16] = v37;
            RtlClearBits((PRTL_BITMAP)&Size[8], 0, *(ULONG *)&Size[4]);
            byte_140C49C38 = sub_140252344(&qword_140C49C30);
            if ( !qword_140C49CA0[v36] )
            {
              qword_140C49CA0[v36] = v38;
              v26 = sub_140532404(a2);
              dword_140C49C74 += 128;
              v15 = v26;
              v11 = 0;
            }
            if ( *(_QWORD *)(v15 + 16) )
            {
              v29 = 1;
            }
            else
            {
              v27 = *(_OWORD *)Size;
              *(_OWORD *)(v15 + 8) = *(_OWORD *)v39;
              v28 = *(_QWORD *)&Size[16];
              *(_OWORD *)(v15 + 24) = v27;
              *(_QWORD *)(v15 + 40) = v28;
              *(_QWORD *)v15 = a1;
              *(_DWORD *)(v15 + 52) = v13;
              sub_1405336FC(a1, v13, v39);
              v29 = 0;
            }
            *(_DWORD *)(v15 + 48) += a3;
            v30 = (unsigned __int8)byte_140C49C38;
            KeReleaseSpinLockFromDpcLevel(&qword_140C49C30);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v31 = KeGetCurrentIrql();
                if ( v31 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v31 >= 2u )
                {
                  v32 = KeGetCurrentPrcb();
                  v23 = (unsigned int)(v30 + 1);
                  v33 = *((_QWORD *)v32 + 4375);
                  v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
                  v22 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
                  *(_DWORD *)(v33 + 20) &= v34;
                  if ( v22 )
                    sub_140418E4C((__int64)v32);
                  v24 = v39[1];
                }
              }
            }
            __writecr8(v30);
            if ( v29 )
            {
LABEL_44:
              if ( v24 )
                sub_1405226CC(v23, v24, *(unsigned int *)Size, 1u);
              if ( v37 )
                sub_14052268C(v23, v37);
            }
          }
          if ( v11 )
            sub_14052268C(v23, v38);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
