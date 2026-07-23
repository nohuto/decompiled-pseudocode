/*
 * XREFs of sub_1402D40E4 @ 0x1402D40E4
 * Callers:
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_14074F4D0 @ 0x14074F4D0 (sub_14074F4D0.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402D4358 @ 0x1402D4358 (sub_1402D4358.c)
 *     sub_1402F2AD0 @ 0x1402F2AD0 (sub_1402F2AD0.c)
 *     sub_1403542DC @ 0x1403542DC (sub_1403542DC.c)
 *     sub_14035432C @ 0x14035432C (sub_14035432C.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 *     sub_14057AA60 @ 0x14057AA60 (sub_14057AA60.c)
 */

char __fastcall sub_1402D40E4(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // r13
  unsigned __int8 CurrentIrql; // bl
  unsigned int v10; // esi
  char v11; // si
  char v12; // r15
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  unsigned __int64 v26; // rbx
  char v27; // al
  char v28; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+34h] [rbp-CCh]
  unsigned int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _OWORD v38[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v39[68]; // [rsp+90h] [rbp-70h] BYREF

  memset(v39, 0, 0x108uLL);
  v32 = 32;
  v35 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  v33 = 0LL;
  v28 = 0;
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
  {
    v8 = 1;
    v33 = *(_QWORD *)(a1 + 96);
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
  {
    v15 = *a4;
    v16 = a4[1];
    if ( v8 && v15 )
    {
      LOBYTE(v37) = 8;
      v35 = v15;
      v36 = 0x7E35C6C7F3DD7277LL
          * (qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ qword_140D06E28), qword_140D06CC8));
    }
    v6 = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(v15 ^ qword_140D06E28), qword_140D06CC8);
    v7 = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ qword_140D06E28), qword_140D06CC8);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v31 = sub_14035432C(a1);
  if ( !v31 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v6;
      *(_QWORD *)(a1 + 120) = v7;
    }
    if ( !a2 )
      goto LABEL_11;
    if ( (unsigned __int8)sub_1403542DC(a1) )
    {
      sub_1402F2AD0(a1);
      KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_11:
        v10 = 6;
LABEL_12:
        if ( v8 )
          sub_140223A20((unsigned __int64)v38, 0x40020000uLL);
        v11 = sub_1402D4358(a1, v32, v10);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v17 = KeGetCurrentIrql();
            if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v19 = *((_QWORD *)CurrentPrcb + 4375);
              v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
              *(_DWORD *)(v19 + 20) &= v20;
              if ( v21 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v12 = a3;
        if ( a3 && !v11 )
        {
          v39[0] = 2097153;
          memset(&v39[1], 0, 0x104uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v39, dword_140C2B1C0);
          sub_14035BB4C(v39, _misaligned_access, 0LL, 2LL);
        }
        goto LABEL_18;
      }
      v32 = 36;
    }
    v10 = 4;
    v28 = 1;
    goto LABEL_12;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v21 )
          sub_140418E4C(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  v11 = 0;
  v12 = a3;
LABEL_18:
  if ( v8 && !v31 )
  {
    v26 = qword_140D06E28 ^ _byteswap_uint64(a1 ^ __ROL8__(v33 ^ qword_140D06CC8, qword_140D06CC8));
    if ( v28 )
      sub_14057AA60(a1, v26);
    v27 = v37;
    v34 = 0x7E35C6C7F3DD7277LL
        * (qword_140D06CC8 ^ __ROR8__(v26 ^ _byteswap_uint64(a1 ^ qword_140D06E28), qword_140D06CC8));
    if ( a2 )
    {
      v27 = v37 | 1;
      LOBYTE(v37) = v37 | 1;
    }
    if ( v12 )
    {
      v27 |= 2u;
      LOBYTE(v37) = v27;
    }
    if ( v11 )
    {
      sub_14045FBE2(3947, 1073872896, (unsigned int)&v34, 32, 4197890, (__int64)v38);
    }
    else
    {
      LOBYTE(v37) = v27 | 4;
      sub_14045FBE2(3947, 1073872896, (unsigned int)&v34, 32, 1538, (__int64)v38);
    }
  }
  return v28;
}
