/*
 * XREFs of sub_140632CBC @ 0x140632CBC
 * Callers:
 *     sub_140461CD0 @ 0x140461CD0 (sub_140461CD0.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140632CBC(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  struct _KPRCB *v10; // r8
  __int64 v11; // r14
  unsigned int v12; // ecx
  char v13; // dl
  unsigned __int8 CurrentIrql; // al
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // si
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int128 *v24; // [rsp+68h] [rbp-18h] BYREF
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]

  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((_QWORD *)CurrentPrcb + 4309) + 16LL;
  v8 = *(_BYTE *)(*((_QWORD *)CurrentPrcb + 4309) + 272LL);
  if ( v8 )
  {
    v9 = *(_BYTE *)(*((_QWORD *)CurrentPrcb + 4309) + 272LL);
    while ( *(_QWORD *)(32LL * --v9 + v7 + 8) != a1 )
    {
      if ( !v9 )
      {
        ++*(_DWORD *)(*((_QWORD *)CurrentPrcb + 4309) + 280LL);
        return;
      }
    }
    v10 = KeGetCurrentPrcb();
    v11 = 32LL * v9 + v7;
    if ( *(_BYTE *)(*((_QWORD *)CurrentPrcb + 4309) + 273LL) )
      goto LABEL_20;
    if ( !dword_140D050AC || (int)a3 - *(_DWORD *)v11 <= (unsigned int)dword_140D050AC )
    {
      v12 = *(_DWORD *)(v11 + 20);
      if ( (v12 < dword_140D0512C || *((_DWORD *)v10 + 8753) % (unsigned int)dword_140D05134)
        && (v12 || (*((_DWORD *)v10 + 8752) - *((_DWORD *)v10 + 8753)) % (unsigned int)dword_140D05130) )
      {
        goto LABEL_20;
      }
    }
    v13 = *((_BYTE *)v10 + 32);
    *(_BYTE *)(*((_QWORD *)CurrentPrcb + 4309) + 273LL) = 1;
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a2;
    *((_QWORD *)&v21 + 1) = a3;
    DWORD2(v22) = *((_DWORD *)KeGetCurrentThread() + 308);
    BYTE1(v23) = v8;
    CurrentIrql = KeGetCurrentIrql();
    LOBYTE(v23) = CurrentIrql;
    *(_QWORD *)&v21 = *(_QWORD *)v11;
    *(_QWORD *)&v22 = *(_QWORD *)(v11 + 16);
    HIDWORD(v22) = *((_DWORD *)v10 + 8272) - *(_DWORD *)(v11 + 24);
    v15 = *(_BYTE *)(v11 + 28);
    BYTE2(v23) = v15;
    if ( v13 == 1 )
    {
      if ( (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
      {
        v16 = v15 | 0x40;
LABEL_18:
        BYTE2(v23) = v16;
        goto LABEL_19;
      }
    }
    else if ( !v13 )
    {
LABEL_19:
      v26 = 0;
      v24 = &v20;
      v25 = 56;
      sub_14035EDE4((__int64)&v24, 1u, 0x20010000u, 0x529u, 0x602u);
      *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
      v17 = v8 - 1;
      while ( v9 < v17 )
      {
        v18 = 32 * ++v9;
        v19 = *(_OWORD *)(v18 + v7 + 16);
        *(_OWORD *)v11 = *(_OWORD *)(v18 + v7);
        *(_OWORD *)(v11 + 16) = v19;
        v11 += 32LL;
      }
      --*(_BYTE *)(v7 + 256);
      return;
    }
    v16 = v15 | 0x80;
    goto LABEL_18;
  }
}
