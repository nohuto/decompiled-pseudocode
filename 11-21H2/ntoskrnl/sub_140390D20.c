/*
 * XREFs of sub_140390D20 @ 0x140390D20
 * Callers:
 *     <none>
 * Callees:
 *     KeSweepLocalCaches @ 0x140389F70 (KeSweepLocalCaches.c)
 *     sub_14039154C @ 0x14039154C (sub_14039154C.c)
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403B2F00 @ 0x1403B2F00 (sub_1403B2F00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_1403B6968 @ 0x1403B6968 (sub_1403B6968.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041B470 @ 0x14041B470 (sub_14041B470.c)
 *     sub_14041B4C0 @ 0x14041B4C0 (sub_14041B4C0.c)
 *     sub_14041B4F0 @ 0x14041B4F0 (sub_14041B4F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_14050EE0C @ 0x14050EE0C (sub_14050EE0C.c)
 *     sub_14051F6C4 @ 0x14051F6C4 (sub_14051F6C4.c)
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 *     sub_140A52FD8 @ 0x140A52FD8 (sub_140A52FD8.c)
 *     sub_140A62018 @ 0x140A62018 (sub_140A62018.c)
 *     KeWriteProtectPAT @ 0x140A69D80 (KeWriteProtectPAT.c)
 */

__int64 __fastcall sub_140390D20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, volatile signed __int32 *a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  char v10; // r13
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  struct _KPRCB *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // edi
  unsigned int v22; // ebx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // esi
  __int64 v30; // rdx
  unsigned __int8 v31; // bl
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  __int64 v34; // r8
  int v35; // eax
  bool v36; // zf
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  _WORD v43[2]; // [rsp+30h] [rbp-58h] BYREF
  _WORD v44[2]; // [rsp+34h] [rbp-54h] BYREF
  _WORD v45[2]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v46[2]; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v49; // [rsp+80h] [rbp-8h]
  char v50; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v51; // [rsp+A8h] [rbp+20h]

  v51 = a4;
  v5 = a4;
  v6 = a3;
  v50 = 0;
  v8 = a1;
  v44[0] = 0;
  v45[0] = 0;
  v43[0] = 0;
  v46[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  v10 = 0;
  v11 = a5;
  v12 = 0;
  v49 &= 0x200u;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v11 )
  {
    if ( (++v12 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      _mm_pause();
    else
      sub_14042A5E0(v12, a2);
  }
  if ( off_140C02520[6] )
    sub_14042A5E0(a1, a2);
  LODWORD(a3) = HIDWORD(KeGetPcr()[1].LockArray);
  *(_QWORD *)(qword_140C4E400 + 8 * a3) = __rdtsc();
  if ( (unsigned __int8)sub_1403B6968() )
  {
    if ( !(_DWORD)v15 )
    {
      byte_140C4E498 = 1;
      qword_140C4E370 = sub_14042A5E0(&dword_140C4E360, v13);
      v16 = 0LL;
    }
  }
  else
  {
    byte_140C4E498 = v16;
    dword_140C4E360 = v16;
  }
  sub_14039154C(v14, v13, v15, v16);
  v18 = CurrentPrcb;
  v19 = *((unsigned int *)CurrentPrcb + 9);
  if ( !(_DWORD)v19 )
  {
    byte_140C4BFE1 = v17;
    dword_140C4A004 = v17;
    sub_140A5072C(v8);
    if ( (int)sub_1403B2F00(1LL) >= 0 )
      sub_1403B41A0(1, 0, (unsigned int)v45, 2, 0LL);
    if ( (int)sub_1403B2F00(4LL) >= 0 )
      sub_1403B41A0(4, 0, (unsigned int)v46, 2, 0LL);
    v21 = v8 >> 12;
    if ( ((v8 >> 12) & 2) != 0 && (unsigned __int8)sub_14041B4F0(qword_140C4C140, (unsigned int)qword_140C4C138) )
      goto LABEL_71;
    byte_140C4E209 = 1;
    _InterlockedAdd(&dword_140C4A008, 1u);
    v22 = 0;
    while ( dword_140C4A008 != v5 )
    {
      if ( (++v22 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        sub_14042A5E0(v22, v20);
    }
    if ( a2 )
    {
      v23 = sub_14042A5E0(v6, v20);
      v9 = v23;
      if ( (dword_140C0C60C & 1) != 0 || v23 != -1073741632 )
      {
        if ( v23 )
        {
          if ( v23 == 1073742484 )
            byte_140C4BFE1 = 1;
          else
            sub_140A52FD8();
          goto LABEL_71;
        }
      }
      else
      {
        v10 = 1;
      }
    }
    _InterlockedAdd(&dword_140C4A00C, 1u);
    v24 = 0;
    while ( dword_140C4A00C != v5 )
    {
      if ( (++v24 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        sub_14042A5E0(v24, v20);
    }
    _InterlockedOr(&dword_140C4A00C, 0);
    sub_14051F6C4();
    sub_140A62018(v8);
    v43[0] = 0x8000;
    if ( (int)sub_1403B2F00(0LL) >= 0 )
      sub_1403B2B00(0, 0, (unsigned int)v43, 2, 0LL);
    if ( (int)sub_1403B2F00(3LL) >= 0 )
      sub_1403B2B00(3, 0, (unsigned int)v43, 2, 0LL);
    v50 = -112;
    if ( (v21 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(
        (unsigned int)L"SystemSleepCheckpoint",
        (unsigned int)qword_14003AB00,
        (unsigned int)&v50,
        1,
        1);
    if ( (v8 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)CurrentPrcb + 141) == 1 )
      {
        LOBYTE(v25) = 1;
        KeWriteProtectPAT(v25);
      }
      KeSweepLocalCaches();
    }
    if ( byte_140C4C449 )
    {
      v26 = (v8 >> 8) & 0xF;
      if ( (unsigned int)(v26 - 1) <= 2 || v26 == 5 )
      {
        v9 = sub_14050EE0C();
LABEL_75:
        v50 = -97;
        if ( (v21 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            (unsigned int)L"SystemSleepCheckpoint",
            (unsigned int)qword_14003AB00,
            (unsigned int)&v50,
            1,
            1);
        dword_140C4A008 = 0;
        dword_140C4A00C = 0;
        sub_140A50388(v8);
        goto LABEL_78;
      }
    }
    if ( (dword_140C0C60C & 1) == 0 )
    {
      v27 = 2LL;
      if ( !v10 )
        v27 = 1LL;
      HalReturnToFirmware(v27);
    }
    if ( (int)sub_1403B2F00(1LL) >= 0 )
    {
      sub_1403B41A0(1, 0, (unsigned int)v44, 2, 0LL);
      v44[0] = v44[0] & 0x203 | ((v8 & 7 | 8) << 10);
      sub_1403B2B00(1, 0, (unsigned int)v44, 2, 0LL);
    }
    if ( (int)sub_1403B2F00(4LL) >= 0 )
    {
      sub_1403B41A0(4, 0, (unsigned int)v44, 2, 0LL);
      v44[0] = v44[0] & 0x203 | (((v8 >> 4) & 7 | 8) << 10);
      sub_1403B2B00(4, 0, (unsigned int)v44, 2, 0LL);
    }
    v28 = 0;
    if ( (int)sub_1403B2F00(0LL) >= 0 )
    {
      v29 = ((int)sub_1403B2F00(3LL) >> 31) & 0xFFFFFFFD;
      sub_1403B41A0(0, 0, (unsigned int)v43, 2, 0LL);
      if ( v43[0] >= 0 )
      {
        do
        {
          sub_1403B41A0(v29 + 3, 0, (unsigned int)v43, 2, 0LL);
          if ( (v43[0] & 0x8000) != 0 )
            break;
          if ( (++v28 & dword_140C4C47C) != 0 || !qword_140C4C480 )
            _mm_pause();
          else
            sub_14042A5E0(v28, v30);
          sub_1403B41A0(0, 0, (unsigned int)v43, 2, 0LL);
        }
        while ( (v43[0] & 0x8000) == 0 );
        v5 = v51;
      }
    }
LABEL_71:
    if ( (int)sub_1403B2F00(1LL) >= 0 )
      sub_1403B2B00(1, 0, (unsigned int)v45, 2, 0LL);
    if ( (int)sub_1403B2F00(4LL) >= 0 )
      sub_1403B2B00(4, 0, (unsigned int)v46, 2, 0LL);
    goto LABEL_75;
  }
  v21 = v8 >> 12;
  if ( ((v8 >> 12) & 8) != 0 )
    v38 = v17;
  else
    v38 = qword_140C4BFD0 + 1472 * v19;
  if ( (unsigned __int8)sub_14041B470(v38) )
    goto LABEL_110;
  _InterlockedIncrement(&dword_140C4A008);
  if ( a2 )
  {
    v41 = 0;
    while ( dword_140C4A008 != v5 )
    {
      if ( (++v41 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        sub_14042A5E0(v41, v39);
    }
    v9 = sub_14042A5E0(v6, v39);
    if ( v9 != 1073742484 )
    {
      v18 = CurrentPrcb;
      goto LABEL_107;
    }
LABEL_110:
    v42 = 0;
    while ( dword_140C4A00C )
    {
      if ( (++v42 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        sub_14042A5E0(v42, v39);
    }
LABEL_78:
    v18 = CurrentPrcb;
    goto LABEL_79;
  }
LABEL_107:
  if ( *((_BYTE *)v18 + 141) == 1 )
  {
    LOBYTE(v40) = 1;
    KeWriteProtectPAT(v40);
  }
  sub_14041B4C0(&dword_140C4A00C);
LABEL_79:
  if ( (v21 & 1) != 0 && (v21 & 0x10) == 0 && *((_BYTE *)v18 + 141) == 1 )
  {
    KeWriteProtectPAT(0LL);
    KeSweepLocalCaches();
  }
  sub_140A500C0(v5);
  v31 = CurrentIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = *((_QWORD *)v33 + 4375);
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v36 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
        *(_DWORD *)(v34 + 20) &= v35;
        if ( v36 )
          sub_140418E4C(v33);
      }
    }
  }
  __writecr8(v31);
  if ( v49 )
    _enable();
  return v9;
}
