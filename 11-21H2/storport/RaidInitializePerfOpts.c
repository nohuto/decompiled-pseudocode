/*
 * XREFs of RaidInitializePerfOpts @ 0x1C003A044
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqdqqqq_EtwWriteTransfer @ 0x1C0032B00 (McTemplateK0qqdqqqq_EtwWriteTransfer.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     RaidInitializeDma @ 0x1C008DC98 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C008DE20 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, __int64 i)
{
  __int64 v3; // rsi
  char v4; // r9
  __int64 v5; // rbx
  char v6; // r15
  char v7; // dl
  int v8; // ebp
  bool v9; // r12
  char v10; // r13
  unsigned int v11; // edi
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rax
  unsigned int v15; // eax
  int v16; // r14d
  __int64 *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int (__fastcall *v21)(__int64, __int128 *); // rax
  char v22; // al
  unsigned int v23; // ecx
  PDEVICE_OBJECT v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // r14d
  int v27; // ecx
  unsigned int v28; // r15d
  unsigned int v29; // eax
  USHORT ActiveGroupCount; // ax
  char v31; // r11
  unsigned int v32; // r15d
  __int64 v33; // rcx
  unsigned __int16 epi16; // r10
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r9
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // rcx
  char v43; // [rsp+50h] [rbp-68h]
  __int128 v44; // [rsp+58h] [rbp-60h] BYREF
  __int64 v45; // [rsp+68h] [rbp-50h]
  char v46; // [rsp+C0h] [rbp+8h]
  char v48; // [rsp+D0h] [rbp+18h]
  char v49; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = 0;
  v43 = 0;
  v5 = i;
  v49 = 0;
  LOBYTE(i) = 0;
  v6 = a2;
  v7 = 0;
  v48 = 0;
  v8 = 0;
  v46 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a1 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v13 = 22LL;
LABEL_6:
    WPP_SF_(v12->AttachedDevice, v13, &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
LABEL_7:
    v11 = -1056964602;
    goto LABEL_125;
  }
  if ( !v5 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v13 = 23LL;
    goto LABEL_6;
  }
  v14 = *(__int64 **)(a1 - 16);
  v3 = *v14;
  if ( (*(_BYTE *)(*v14 + 104) & 0x10) == 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
    }
    v11 = -1056964607;
    goto LABEL_125;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      a1,
      &EventAdapterInitPerfConfigData,
      i,
      *(_DWORD *)v5,
      *(_DWORD *)(v5 + 4),
      *(_DWORD *)(v5 + 8),
      *(_DWORD *)(v5 + 12),
      *(_DWORD *)(v5 + 16),
      *(_DWORD *)(v5 + 20),
      *(_DWORD *)(v5 + 24));
    v7 = 0;
    LOBYTE(i) = 0;
    v4 = 0;
  }
  v15 = *(_DWORD *)v5;
  v16 = 3;
  if ( *(_DWORD *)v5 )
    v9 = *(_DWORD *)(v5 + 4) >= 0xCu;
  if ( v15 >= 2 && *(_DWORD *)(v5 + 4) >= 0x18u )
  {
    v10 = 1;
    v16 = 7;
  }
  if ( v15 >= 3 && *(_DWORD *)(v5 + 4) >= 0x28u )
  {
    v7 = 1;
    v16 |= 0x18u;
    v46 = 1;
  }
  if ( v15 >= 4 && *(_DWORD *)(v5 + 4) >= 0x28u )
  {
    v4 = 1;
    v49 = 1;
    v16 |= 0x20u;
  }
  if ( v15 >= 5 && *(_DWORD *)(v5 + 4) >= 0x28u )
  {
    if ( !KeGetCurrentIrql() )
    {
      v44 = 0LL;
      v45 = 0LL;
      LODWORD(v44) = 1;
      if ( *(_BYTE *)(v3 + 4242) )
      {
        v17 = (__int64 *)(v3 + 752);
        if ( !(unsigned __int8)RaidIsDmaInitialized(v3 + 752, 1LL) )
          RaidInitializeDma(v18, *(_QWORD *)(v3 + 32), v3 + 344);
        if ( v3 == -752 )
        {
          v6 = a2;
        }
        else
        {
          v19 = *v17;
          if ( *v17
            && (v20 = *(_QWORD *)(v19 + 8)) != 0
            && *(int *)(v3 + 780) >= 3
            && (v21 = *(int (__fastcall **)(__int64, __int128 *))(v20 + 128)) != 0LL )
          {
            v6 = a2;
            if ( v21(v19, &v44) >= 0 && (v45 & 2) != 0 )
              v16 |= 0x40u;
          }
          else
          {
            v6 = a2;
          }
        }
      }
    }
    v15 = *(_DWORD *)v5;
    v7 = v46;
    LOBYTE(i) = 1;
    v4 = v49;
    v48 = 1;
  }
  if ( v15 < 6 || *(_DWORD *)(v5 + 4) < 0x28u )
  {
    v22 = 0;
  }
  else
  {
    v22 = 1;
    v16 |= 0x80u;
    v43 = 1;
  }
  if ( !v9 && !v10 && !v7 && !v4 && !(_BYTE)i && !v22 )
  {
    if ( !v6 )
    {
      v11 = -1056964602;
      goto LABEL_125;
    }
    *(_DWORD *)v5 = 1;
    *(_DWORD *)(v5 + 4) = 12;
    goto LABEL_63;
  }
  if ( v6 )
  {
LABEL_63:
    *(_DWORD *)(v5 + 8) = v16;
    v8 = v16;
    v11 = 0;
    goto LABEL_125;
  }
  v23 = *(_DWORD *)(v5 + 8);
  if ( (~v16 & v23) != 0 )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_70;
    }
    v25 = 25LL;
    goto LABEL_69;
  }
  if ( (v23 & 2) != 0 )
  {
    v8 = 2;
    *(_DWORD *)(v3 + 4536) = -*(_DWORD *)(v5 + 12);
    v23 = *(_DWORD *)(v5 + 8);
  }
  if ( (v23 & 1) != 0 )
  {
    *(_WORD *)(v3 + 4532) |= 1u;
    v8 |= 1u;
    if ( *(_BYTE *)(v3 + 4241) == 1 && *(_QWORD *)(v3 + 4552) && *(_QWORD *)(v3 + 4232) )
    {
      v26 = 0;
      v27 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 4224) + 4LL);
      v28 = v27 - 1;
      if ( v10 && (*(_DWORD *)(v5 + 8) & 4) != 0 )
      {
        v26 = *(_DWORD *)(v5 + 16);
        v29 = *(_DWORD *)(v5 + 20);
        if ( v26 > v29 || v29 > v28 )
        {
          v24 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_70;
          }
          v25 = 26LL;
LABEL_69:
          WPP_SF_(v24->AttachedDevice, v25, &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
LABEL_70:
          v11 = -1056964607;
          goto LABEL_125;
        }
        v28 = *(_DWORD *)(v5 + 20);
        LOWORD(v27) = v29 - v26 + 1;
        v8 |= 4u;
      }
      *(_WORD *)(v3 + 4532) = (4 * v27) | 3;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v31 = v46;
      v32 = v28 + 1;
      *(_WORD *)(v3 + 4534) = ActiveGroupCount;
      if ( v26 < v32 )
      {
        v33 = 16LL * v26;
        do
        {
          epi16 = _mm_extract_epi16(*(__m128i *)(v33 + *(_QWORD *)(v3 + 4232)), 4);
          v35 = *(_QWORD *)(v33 + *(_QWORD *)(v3 + 4232));
          if ( epi16 != 0xFFFF )
          {
            if ( v46 && (*(_BYTE *)(v5 + 8) & 0xC) == 0xC )
            {
              v8 |= 8u;
              *(_WORD *)(*(_QWORD *)(v5 + 32) + v33 + 8) = epi16;
              *(_QWORD *)(v33 + *(_QWORD *)(v5 + 32)) = v35;
            }
            if ( v26 < 0xFF )
            {
              for ( i = 0LL; v35; v35 >>= 1 )
              {
                if ( (v35 & 1) != 0 )
                {
                  v36 = *(_QWORD *)(v3 + 4552);
                  v37 = (unsigned int)i + (epi16 << 6);
                  if ( *(_BYTE *)(v37 + v36) == 0xFF )
                    *(_BYTE *)(v37 + v36) = v26;
                }
                i = (unsigned int)(i + 1);
              }
            }
          }
          ++v26;
          v33 += 16LL;
        }
        while ( v26 < v32 );
        v11 = 0;
      }
      LOBYTE(i) = v48;
    }
    else
    {
      v31 = v46;
    }
    v23 = *(_DWORD *)(v5 + 8);
  }
  else
  {
    if ( v10 && (v23 & 4) != 0 || (v23 & 0x20) != 0 )
      goto LABEL_70;
    v31 = v46;
  }
  if ( v31 && (v23 & 8) != 0 )
  {
    v8 |= 8u;
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v3 + 4528);
  }
  else
  {
    v38 = v23;
    if ( !v31 )
      goto LABEL_114;
  }
  v38 = v23;
  if ( (v23 & 0x10) != 0 )
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_70;
    v8 |= 0x10u;
    *(_BYTE *)(v3 + 4243) |= 1u;
    v38 = *(_DWORD *)(v5 + 8);
  }
LABEL_114:
  v39 = v38;
  if ( v49 && (v38 & 0x20) != 0 )
  {
    v8 |= 0x20u;
    *(_BYTE *)(v3 + 4243) |= 2u;
    v39 = *(_DWORD *)(v5 + 8);
  }
  v40 = v39;
  if ( (_BYTE)i && (v39 & 0x40) != 0 )
  {
    v8 |= 0x40u;
    *(_BYTE *)(v3 + 4243) |= 4u;
    v40 = *(_DWORD *)(v5 + 8);
  }
  v41 = v40;
  if ( v43 && (v40 & 0x80u) != 0 )
  {
    v8 |= 0x80u;
    *(_BYTE *)(v3 + 4243) |= 8u;
    v41 = *(unsigned int *)(v5 + 8);
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      v41,
      &EventAdapterFinalPerfConfigData,
      i,
      *(_DWORD *)v5,
      *(_DWORD *)(v5 + 4),
      v41,
      *(_DWORD *)(v5 + 12),
      *(_DWORD *)(v5 + 16),
      *(_DWORD *)(v5 + 20),
      *(_DWORD *)(v5 + 24));
LABEL_125:
  if ( v8 != *(_DWORD *)(v5 + 8) )
  {
    if ( (v8 & 2) != 0 )
      *(_DWORD *)(v3 + 4536) = 0;
    if ( (v8 & 1) != 0 )
    {
      *(_BYTE *)(v3 + 4243) &= ~1u;
      *(_WORD *)(v3 + 4532) = 0;
    }
    if ( (v8 & 0x20) != 0 )
      *(_BYTE *)(v3 + 4243) &= ~2u;
  }
  return v11;
}
