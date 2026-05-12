/*
 * XREFs of sub_1C003BE28 @ 0x1C003BE28
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0033C70 @ 0x1C0033C70 (sub_1C0033C70.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C00A9538 @ 0x1C00A9538 (sub_1C00A9538.c)
 *     sub_1C00A96CC @ 0x1C00A96CC (sub_1C00A96CC.c)
 */

__int64 __fastcall sub_1C003BE28(__int64 a1, char a2, __int64 i)
{
  __int64 v3; // rsi
  char v4; // r10
  char v5; // r9
  char v6; // r15
  __int64 v7; // rbx
  char v9; // dl
  int v10; // ebp
  bool v11; // r12
  unsigned int v12; // edi
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  unsigned int v16; // eax
  int v17; // r14d
  __int64 *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int (__fastcall *v22)(__int64, int *); // rax
  char v23; // al
  int v24; // eax
  PDEVICE_OBJECT v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  int v29; // ecx
  unsigned int v30; // r15d
  unsigned int v31; // eax
  USHORT ActiveGroupCount; // ax
  char v33; // r11
  unsigned int v34; // r15d
  __int64 v35; // rdx
  unsigned __int16 epi16; // r10
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rcx
  char v46; // [rsp+50h] [rbp-A8h]
  char v47; // [rsp+51h] [rbp-A7h]
  char v48; // [rsp+52h] [rbp-A6h]
  int v49; // [rsp+60h] [rbp-98h] BYREF
  _BYTE Dst[148]; // [rsp+64h] [rbp-94h] BYREF
  char v51; // [rsp+100h] [rbp+8h]
  char v52; // [rsp+110h] [rbp+18h]
  char v53; // [rsp+118h] [rbp+20h]

  v3 = 0LL;
  v4 = 0;
  v47 = 0;
  v5 = 0;
  v46 = 0;
  v6 = 0;
  v53 = 0;
  v7 = i;
  v51 = 0;
  LOBYTE(i) = 0;
  v52 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v48 = 0;
  v12 = 0;
  if ( !a1 )
  {
    v13 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v14 = 22LL;
LABEL_6:
    sub_1C003EDF0(v13->AttachedDevice, v14, &unk_1C0083210);
LABEL_7:
    v12 = -1056964602;
    goto LABEL_130;
  }
  if ( !v7 )
  {
    v13 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v14 = 23LL;
    goto LABEL_6;
  }
  v15 = *(__int64 **)(a1 - 16);
  v3 = *v15;
  if ( (*(_BYTE *)(*v15 + 104) & 0x10) == 0 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 24LL, &unk_1C0083210);
    }
    v12 = -1056964607;
    goto LABEL_130;
  }
  if ( (byte_1C0093A00 & 0x10) != 0 )
  {
    sub_1C0033C70(
      a1,
      &stru_1C0088A90,
      i,
      *(_DWORD *)v7,
      *(_DWORD *)(v7 + 4),
      *(_DWORD *)(v7 + 8),
      *(_DWORD *)(v7 + 12),
      *(_DWORD *)(v7 + 16),
      *(_DWORD *)(v7 + 20),
      *(_DWORD *)(v7 + 24));
    v9 = 0;
    LOBYTE(i) = 0;
    v5 = 0;
    v4 = 0;
  }
  v16 = *(_DWORD *)v7;
  v17 = 3;
  if ( *(_DWORD *)v7 )
    v11 = *(_DWORD *)(v7 + 4) >= 0xCu;
  if ( v16 >= 2 && *(_DWORD *)(v7 + 4) >= 0x18u )
  {
    v9 = 1;
    v17 = 7;
    v48 = 1;
  }
  if ( v16 >= 3 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    LOBYTE(i) = 1;
    v52 = 1;
    v17 |= 0x18u;
  }
  if ( v16 >= 4 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    v4 = 1;
    v46 = 1;
    v17 |= 0x20u;
  }
  if ( v16 >= 5 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    if ( !KeGetCurrentIrql() )
    {
      memset_0(Dst, 0, 0x54uLL);
      v49 = 1;
      if ( *(_BYTE *)(v3 + 4306) )
      {
        v18 = (__int64 *)(v3 + 760);
        if ( !(unsigned __int8)sub_1C00A96CC(v3 + 760, 1LL) )
          sub_1C00A9538(v19, *(_QWORD *)(v3 + 32), v3 + 344);
        if ( v3 != -760
          && (v20 = *v18) != 0
          && (v21 = *(_QWORD *)(v20 + 8)) != 0
          && *(int *)(v3 + 788) >= 3
          && (v22 = *(int (__fastcall **)(__int64, int *))(v21 + 128)) != 0LL
          && v22(v20, &v49) >= 0 )
        {
          v6 = 0;
          if ( (Dst[16] & 2) != 0 )
            v17 |= 0x40u;
        }
        else
        {
          v6 = 0;
        }
      }
    }
    v9 = v48;
    LOBYTE(i) = v52;
    v5 = 1;
    v4 = v46;
    v53 = 1;
  }
  if ( *(_DWORD *)v7 >= 6u && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    v6 = 1;
    v51 = 1;
    v17 |= 0x80u;
  }
  if ( *(_DWORD *)v7 < 7u || *(_DWORD *)(v7 + 4) < 0x28u )
  {
    v23 = 0;
  }
  else
  {
    v23 = 1;
    v17 |= 0x100u;
    v47 = 1;
  }
  if ( !v11 && !v9 && !(_BYTE)i && !v4 && !v5 && !v6 && !v23 )
  {
    if ( !a2 )
    {
      v12 = -1056964602;
      goto LABEL_130;
    }
    *(_DWORD *)v7 = 1;
    *(_DWORD *)(v7 + 4) = 12;
    goto LABEL_66;
  }
  if ( a2 )
  {
LABEL_66:
    *(_DWORD *)(v7 + 8) = v17;
    v10 = v17;
    v12 = 0;
    goto LABEL_130;
  }
  v24 = *(_DWORD *)(v7 + 8);
  if ( (~v17 & v24) != 0 )
  {
    v25 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_73;
    }
    v26 = 25LL;
LABEL_72:
    sub_1C003EDF0(v25->AttachedDevice, v26, &unk_1C0083210);
LABEL_73:
    v12 = -1056964607;
    goto LABEL_130;
  }
  if ( (v24 & 2) != 0 )
  {
    v10 = 2;
    *(_DWORD *)(v3 + 4600) = -*(_DWORD *)(v7 + 12);
  }
  v27 = *(_DWORD *)(v7 + 8);
  if ( (v27 & 1) != 0 )
  {
    *(_WORD *)(v3 + 4596) |= 1u;
    v10 |= 1u;
    if ( *(_BYTE *)(v3 + 4305) == 1 && *(_QWORD *)(v3 + 4616) && *(_QWORD *)(v3 + 4296) )
    {
      v28 = 0;
      v29 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 4288) + 4LL);
      v30 = v29 - 1;
      if ( v9 && (*(_DWORD *)(v7 + 8) & 4) != 0 )
      {
        v28 = *(_DWORD *)(v7 + 16);
        v31 = *(_DWORD *)(v7 + 20);
        if ( v28 > v31 || v31 > v30 )
        {
          v25 = off_1C0093070;
          if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
            || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
            || BYTE1(off_1C0093070->Timer) < 2u )
          {
            goto LABEL_73;
          }
          v26 = 26LL;
          goto LABEL_72;
        }
        v30 = *(_DWORD *)(v7 + 20);
        LOWORD(v29) = v31 - v28 + 1;
        v10 |= 4u;
      }
      *(_WORD *)(v3 + 4596) = (4 * v29) | 3;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v33 = v52;
      v34 = v30 + 1;
      *(_WORD *)(v3 + 4598) = ActiveGroupCount;
      if ( v28 < v34 )
      {
        v35 = 16LL * v28;
        do
        {
          epi16 = _mm_extract_epi16(*(__m128i *)(v35 + *(_QWORD *)(v3 + 4296)), 4);
          v37 = *(_QWORD *)(v35 + *(_QWORD *)(v3 + 4296));
          if ( epi16 != 0xFFFF )
          {
            if ( v52 && (*(_BYTE *)(v7 + 8) & 0xC) == 0xC )
            {
              v10 |= 8u;
              *(_WORD *)(*(_QWORD *)(v7 + 32) + v35 + 8) = epi16;
              *(_QWORD *)(v35 + *(_QWORD *)(v7 + 32)) = v37;
            }
            if ( v28 < 0xFF )
            {
              for ( i = 0LL; v37; v37 >>= 1 )
              {
                if ( (v37 & 1) != 0 )
                {
                  v38 = *(_QWORD *)(v3 + 4616);
                  v39 = (unsigned int)i + (epi16 << 6);
                  if ( *(_BYTE *)(v39 + v38) == 0xFF )
                    *(_BYTE *)(v39 + v38) = v28;
                }
                i = (unsigned int)(i + 1);
              }
            }
          }
          ++v28;
          v35 += 16LL;
        }
        while ( v28 < v34 );
      }
      v6 = v51;
      v5 = v53;
    }
    else
    {
      v33 = v52;
    }
    v27 = *(_DWORD *)(v7 + 8);
  }
  else
  {
    if ( v9 && (v27 & 4) != 0 || (v27 & 0x20) != 0 )
      goto LABEL_73;
    v33 = v52;
  }
  if ( v33 && (v27 & 8) != 0 )
  {
    v10 |= 8u;
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(v3 + 4592);
    goto LABEL_113;
  }
  v40 = v27;
  if ( v33 )
  {
LABEL_113:
    v40 = v27;
    if ( (v27 & 0x10) != 0 )
    {
      if ( (v10 & 1) == 0 )
      {
        v12 = -1056964607;
        goto LABEL_130;
      }
      v10 |= 0x10u;
      *(_BYTE *)(v3 + 4307) |= 1u;
      v40 = *(_DWORD *)(v7 + 8);
    }
  }
  v41 = v40;
  if ( v46 && (v40 & 0x20) != 0 )
  {
    v10 |= 0x20u;
    *(_BYTE *)(v3 + 4307) |= 2u;
    v41 = *(_DWORD *)(v7 + 8);
  }
  v42 = v41;
  if ( v5 && (v41 & 0x40) != 0 )
  {
    v10 |= 0x40u;
    *(_BYTE *)(v3 + 4307) |= 4u;
    v42 = *(_DWORD *)(v7 + 8);
  }
  v43 = v42;
  if ( v6 && (v42 & 0x80u) != 0 )
  {
    v10 |= 0x80u;
    *(_BYTE *)(v3 + 4307) |= 8u;
    v43 = *(_DWORD *)(v7 + 8);
  }
  v44 = v43;
  if ( v47 && (v43 & 0x100) != 0 )
  {
    *(_BYTE *)(v3 + 4307) |= 0x10u;
    v44 = *(unsigned int *)(v7 + 8);
    v10 |= 0x100u;
  }
  if ( (byte_1C0093A00 & 0x10) != 0 )
    sub_1C0033C70(
      v44,
      &stru_1C0088F28,
      i,
      *(_DWORD *)v7,
      *(_DWORD *)(v7 + 4),
      v44,
      *(_DWORD *)(v7 + 12),
      *(_DWORD *)(v7 + 16),
      *(_DWORD *)(v7 + 20),
      *(_DWORD *)(v7 + 24));
LABEL_130:
  if ( v10 != *(_DWORD *)(v7 + 8) )
  {
    if ( (v10 & 2) != 0 )
      *(_DWORD *)(v3 + 4600) = 0;
    if ( (v10 & 1) != 0 )
    {
      *(_BYTE *)(v3 + 4307) &= ~1u;
      *(_WORD *)(v3 + 4596) = 0;
    }
    if ( (v10 & 0x20) != 0 )
      *(_BYTE *)(v3 + 4307) &= ~2u;
  }
  return v12;
}
