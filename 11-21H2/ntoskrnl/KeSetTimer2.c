/*
 * XREFs of KeSetTimer2 @ 0x140353C40
 * Callers:
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 *     sub_14039EE50 @ 0x14039EE50 (sub_14039EE50.c)
 *     sub_14039FE50 @ 0x14039FE50 (sub_14039FE50.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 *     sub_1403DDE4C @ 0x1403DDE4C (sub_1403DDE4C.c)
 *     sub_14045F3D4 @ 0x14045F3D4 (sub_14045F3D4.c)
 *     sub_1405C9E88 @ 0x1405C9E88 (sub_1405C9E88.c)
 *     sub_1405D04CC @ 0x1405D04CC (sub_1405D04CC.c)
 *     sub_1405D6D4C @ 0x1405D6D4C (sub_1405D6D4C.c)
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407EFDC8 @ 0x1407EFDC8 (sub_1407EFDC8.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 *     sub_14081BF60 @ 0x14081BF60 (sub_14081BF60.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     sub_14086318C @ 0x14086318C (sub_14086318C.c)
 *     sub_140989CF0 @ 0x140989CF0 (sub_140989CF0.c)
 *     sub_140995E60 @ 0x140995E60 (sub_140995E60.c)
 *     sub_1409967E4 @ 0x1409967E4 (sub_1409967E4.c)
 *     sub_140998474 @ 0x140998474 (sub_140998474.c)
 *     sub_1409984D0 @ 0x1409984D0 (sub_1409984D0.c)
 *     sub_140A531E0 @ 0x140A531E0 (sub_140A531E0.c)
 *     sub_140AF8974 @ 0x140AF8974 (sub_140AF8974.c)
 *     sub_140B0E000 @ 0x140B0E000 (sub_140B0E000.c)
 *     sub_140B24034 @ 0x140B24034 (sub_140B24034.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B980 @ 0x14022B980 (sub_14022B980.c)
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_1402F2AD0 @ 0x1402F2AD0 (sub_1402F2AD0.c)
 *     sub_1402F3248 @ 0x1402F3248 (sub_1402F3248.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_1403457BC @ 0x1403457BC (sub_1403457BC.c)
 *     sub_140351500 @ 0x140351500 (sub_140351500.c)
 *     sub_1403542B8 @ 0x1403542B8 (sub_1403542B8.c)
 *     sub_1403542DC @ 0x1403542DC (sub_1403542DC.c)
 *     sub_14035432C @ 0x14035432C (sub_14035432C.c)
 *     sub_140357CE4 @ 0x140357CE4 (sub_140357CE4.c)
 *     sub_14039ECA8 @ 0x14039ECA8 (sub_14039ECA8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057AC2C @ 0x14057AC2C (sub_14057AC2C.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // r14
  unsigned int v16; // ebp
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rdx
  volatile signed __int32 v20; // edx
  signed __int32 v21; // eax
  unsigned __int8 v22; // bl
  __int64 v24; // r9
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rax
  signed __int32 v28; // r8d
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v31; // r9
  int v32; // edx
  bool v33; // zf
  bool v34; // [rsp+70h] [rbp+8h] BYREF
  char v35; // [rsp+78h] [rbp+10h] BYREF
  __int64 v36; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER v37; // [rsp+88h] [rbp+20h] BYREF

  v37.QuadPart = 0LL;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)dword_140D06960 )
    v5 = (unsigned int)dword_140D06960;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v24 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v10 = 0;
  if ( a2 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
      v26 = sub_14022DB00();
    else
      v26 = MEMORY[0xFFFFF78000000014];
    v27 = 0LL;
    if ( v6 > v26 )
      v27 = v26 - v6;
    v6 = v27;
  }
  if ( (v8 & 4) != 0 )
    v11 = KeQueryInterruptTimePrecise(&v37);
  else
    v11 = MEMORY[0xFFFFF78000000008];
  v12 = v11 - v6;
  if ( v11 >= v6 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( a4 && *(_BYTE *)(a1 + 130) != 21 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    if ( v14 == -1 )
    {
      v13 = -1LL;
    }
    else
    {
      v13 = v14 + v12;
      if ( v14 + v12 < v12 || v13 == -1 )
        v13 = -2LL;
    }
  }
  v15 = 0;
  v35 = 0;
  v16 = 1;
  if ( !(unsigned __int8)sub_14035432C(a1) )
  {
    if ( (unsigned __int8)sub_1403542DC(a1) )
    {
      sub_1402F2AD0(a1);
      KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
      v15 = 1;
    }
    else
    {
      v18 = *(_BYTE *)(a1 + 1);
      if ( (v18 & 0xF) != 0 )
      {
        v16 = 8;
        v15 = (v18 & 4) == 0;
      }
    }
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    v19 = *(unsigned __int8 *)(a1 + 129);
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    if ( dword_140D06A20 )
    {
      if ( (v19 & 0x10) != 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (v19 & 0xE) != 0 )
      {
LABEL_19:
        v34 = 0;
        if ( v16 == 1 )
        {
          KeAcquireSpinLockAtDpcLevel(&qword_140D31380);
          sub_140351500(a1, 1, &v35, &v34);
        }
        if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
        {
          sub_14057AC2C(a1, v15, v16);
        }
        else
        {
          v20 = *(_DWORD *)a1;
          v21 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  (v16 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v20 != v21 )
          {
            do
            {
              v28 = v21;
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | v21 & 0xFFFFF07F, v21);
            }
            while ( v28 != v21 );
          }
          if ( v16 == 1 )
            KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
        }
        if ( v34 )
          sub_1403457BC((__int64)KeGetCurrentPrcb(), qword_140D088C0[(unsigned int)dword_140C2B1C0], dword_140D0504C);
        if ( !(unsigned __int8)sub_1403542B8() )
        {
          if ( v35 )
          {
            sub_14022B980();
          }
          else if ( (v8 & 4) != 0 && sub_1402F3248(MEMORY[0xFFFFF78000000008], v12) )
          {
            sub_14022F244();
          }
        }
        goto LABEL_30;
      }
      if ( !(unsigned __int8)sub_140357CE4(*((_QWORD *)KeGetCurrentThread() + 23), v19, v17) )
      {
        if ( (v19 & 0x10) == 0 )
          goto LABEL_19;
        v25 = v19 & 0xEF;
        goto LABEL_38;
      }
      if ( (v19 & 0x10) != 0 )
        goto LABEL_19;
    }
    v25 = v19 | 0x10;
LABEL_38:
    *(_BYTE *)(a1 + 129) = v25;
    sub_14039ECA8(a1);
    goto LABEL_19;
  }
LABEL_30:
  v22 = v36;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v29 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = *((_QWORD *)CurrentPrcb + 4375);
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
        *(_DWORD *)(v31 + 20) &= v32;
        if ( v33 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v22);
  return v15;
}
