/*
 * XREFs of sub_140358A20 @ 0x140358A20
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     sub_1403A0D60 @ 0x1403A0D60 (sub_1403A0D60.c)
 *     sub_1403A1494 @ 0x1403A1494 (sub_1403A1494.c)
 *     VslExchangeEntropy @ 0x1403A7340 (VslExchangeEntropy.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1403DCCD8 @ 0x1403DCCD8 (sub_1403DCCD8.c)
 *     sub_1403DF020 @ 0x1403DF020 (sub_1403DF020.c)
 *     VslGetSecurePciEnabled @ 0x1403DF160 (VslGetSecurePciEnabled.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1404176A0 (VslGetSecurePciDeviceBootConfiguration.c)
 *     sub_140459C44 @ 0x140459C44 (sub_140459C44.c)
 *     sub_1405478E0 @ 0x1405478E0 (sub_1405478E0.c)
 *     sub_140547AF4 @ 0x140547AF4 (sub_140547AF4.c)
 *     sub_140547EA8 @ 0x140547EA8 (sub_140547EA8.c)
 *     sub_140549D4C @ 0x140549D4C (sub_140549D4C.c)
 *     sub_14054D9C4 @ 0x14054D9C4 (sub_14054D9C4.c)
 *     sub_14054DA20 @ 0x14054DA20 (sub_14054DA20.c)
 *     sub_14054DBF0 @ 0x14054DBF0 (sub_14054DBF0.c)
 *     sub_14054DCCC @ 0x14054DCCC (sub_14054DCCC.c)
 *     sub_14054DD58 @ 0x14054DD58 (sub_14054DD58.c)
 *     sub_14054DDD0 @ 0x14054DDD0 (sub_14054DDD0.c)
 *     sub_14054DE6C @ 0x14054DE6C (sub_14054DE6C.c)
 *     sub_14054DEF4 @ 0x14054DEF4 (sub_14054DEF4.c)
 *     sub_14054E00C @ 0x14054E00C (sub_14054E00C.c)
 *     sub_14054E120 @ 0x14054E120 (sub_14054E120.c)
 *     sub_14054E1F4 @ 0x14054E1F4 (sub_14054E1F4.c)
 *     sub_14054E34C @ 0x14054E34C (sub_14054E34C.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054E3F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     sub_14054E548 @ 0x14054E548 (sub_14054E548.c)
 *     sub_14054E61C @ 0x14054E61C (sub_14054E61C.c)
 *     sub_14054E6A4 @ 0x14054E6A4 (sub_14054E6A4.c)
 *     sub_14054E7B4 @ 0x14054E7B4 (sub_14054E7B4.c)
 *     sub_14054E830 @ 0x14054E830 (sub_14054E830.c)
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 *     sub_14054EB44 @ 0x14054EB44 (sub_14054EB44.c)
 *     sub_14054EBEC @ 0x14054EBEC (sub_14054EBEC.c)
 *     sub_14054EC88 @ 0x14054EC88 (sub_14054EC88.c)
 *     sub_14054ED18 @ 0x14054ED18 (sub_14054ED18.c)
 *     sub_14054ED80 @ 0x14054ED80 (sub_14054ED80.c)
 *     sub_14054EE08 @ 0x14054EE08 (sub_14054EE08.c)
 *     sub_14054EE64 @ 0x14054EE64 (sub_14054EE64.c)
 *     sub_14054EF74 @ 0x14054EF74 (sub_14054EF74.c)
 *     sub_14054F010 @ 0x14054F010 (sub_14054F010.c)
 *     sub_14054F1B8 @ 0x14054F1B8 (sub_14054F1B8.c)
 *     sub_14054F250 @ 0x14054F250 (sub_14054F250.c)
 *     VslRetrieveMailbox @ 0x14054F3A0 (VslRetrieveMailbox.c)
 *     sub_14054F4CC @ 0x14054F4CC (sub_14054F4CC.c)
 *     sub_14054F578 @ 0x14054F578 (sub_14054F578.c)
 *     sub_14054F674 @ 0x14054F674 (sub_14054F674.c)
 *     sub_14054F710 @ 0x14054F710 (sub_14054F710.c)
 *     sub_14054F814 @ 0x14054F814 (sub_14054F814.c)
 *     sub_14054F91C @ 0x14054F91C (sub_14054F91C.c)
 *     sub_14054FA08 @ 0x14054FA08 (sub_14054FA08.c)
 *     sub_14054FAB4 @ 0x14054FAB4 (sub_14054FAB4.c)
 *     ntoskrnl_5 @ 0x14054FB80 (ntoskrnl_5.c)
 *     sub_14054FBE0 @ 0x14054FBE0 (sub_14054FBE0.c)
 *     sub_14054FC7C @ 0x14054FC7C (sub_14054FC7C.c)
 *     sub_14054FD30 @ 0x14054FD30 (sub_14054FD30.c)
 *     sub_14054FDF0 @ 0x14054FDF0 (sub_14054FDF0.c)
 *     sub_14054FE7C @ 0x14054FE7C (sub_14054FE7C.c)
 *     sub_14054FF30 @ 0x14054FF30 (sub_14054FF30.c)
 *     sub_14054FFA0 @ 0x14054FFA0 (sub_14054FFA0.c)
 *     sub_140550030 @ 0x140550030 (sub_140550030.c)
 *     sub_140550130 @ 0x140550130 (sub_140550130.c)
 *     sub_140550260 @ 0x140550260 (sub_140550260.c)
 *     sub_140550360 @ 0x140550360 (sub_140550360.c)
 *     sub_140550458 @ 0x140550458 (sub_140550458.c)
 *     sub_1405504C0 @ 0x1405504C0 (sub_1405504C0.c)
 *     sub_140550550 @ 0x140550550 (sub_140550550.c)
 *     sub_140550770 @ 0x140550770 (sub_140550770.c)
 *     sub_1405507F0 @ 0x1405507F0 (sub_1405507F0.c)
 *     sub_140550900 @ 0x140550900 (sub_140550900.c)
 *     sub_14056B044 @ 0x14056B044 (sub_14056B044.c)
 *     sub_14056C780 @ 0x14056C780 (sub_14056C780.c)
 *     sub_140578830 @ 0x140578830 (sub_140578830.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405E2BD0 @ 0x1405E2BD0 (sub_1405E2BD0.c)
 *     ExCreatePool @ 0x14063A5F0 (ExCreatePool.c)
 *     sub_14063F6D4 @ 0x14063F6D4 (sub_14063F6D4.c)
 *     sub_14065843C @ 0x14065843C (sub_14065843C.c)
 *     sub_1406584BC @ 0x1406584BC (sub_1406584BC.c)
 *     sub_14065859C @ 0x14065859C (sub_14065859C.c)
 *     sub_14066D440 @ 0x14066D440 (sub_14066D440.c)
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14080C468 @ 0x14080C468 (sub_14080C468.c)
 *     sub_14080C778 @ 0x14080C778 (sub_14080C778.c)
 *     VslQuerySecureDevice @ 0x14085C200 (VslQuerySecureDevice.c)
 *     sub_14088151A @ 0x14088151A (sub_14088151A.c)
 *     sub_140928C60 @ 0x140928C60 (sub_140928C60.c)
 *     sub_140929080 @ 0x140929080 (sub_140929080.c)
 *     sub_140931514 @ 0x140931514 (sub_140931514.c)
 *     sub_1409315C4 @ 0x1409315C4 (sub_1409315C4.c)
 *     ntoskrnl_9 @ 0x140931660 (ntoskrnl_9.c)
 *     sub_1409317A0 @ 0x1409317A0 (sub_1409317A0.c)
 *     sub_140931900 @ 0x140931900 (sub_140931900.c)
 *     VslCreateSecureSection @ 0x1409319A0 (VslCreateSecureSection.c)
 *     sub_140931AC0 @ 0x140931AC0 (sub_140931AC0.c)
 *     sub_140931B88 @ 0x140931B88 (sub_140931B88.c)
 *     sub_140931C60 @ 0x140931C60 (sub_140931C60.c)
 *     VslDeleteSecureSection @ 0x140931DC0 (VslDeleteSecureSection.c)
 *     sub_140931E28 @ 0x140931E28 (sub_140931E28.c)
 *     sub_140931ED4 @ 0x140931ED4 (sub_140931ED4.c)
 *     sub_140931F54 @ 0x140931F54 (sub_140931F54.c)
 *     sub_140931FBC @ 0x140931FBC (sub_140931FBC.c)
 *     sub_140932068 @ 0x140932068 (sub_140932068.c)
 *     sub_1409320D0 @ 0x1409320D0 (sub_1409320D0.c)
 *     sub_14093212C @ 0x14093212C (sub_14093212C.c)
 *     sub_140932260 @ 0x140932260 (sub_140932260.c)
 *     sub_1409322EC @ 0x1409322EC (sub_1409322EC.c)
 *     sub_14093237C @ 0x14093237C (sub_14093237C.c)
 *     sub_140932454 @ 0x140932454 (sub_140932454.c)
 *     sub_140932544 @ 0x140932544 (sub_140932544.c)
 *     sub_1409325C0 @ 0x1409325C0 (sub_1409325C0.c)
 *     sub_14093267C @ 0x14093267C (sub_14093267C.c)
 *     sub_140932778 @ 0x140932778 (sub_140932778.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_140932A4C @ 0x140932A4C (sub_140932A4C.c)
 *     sub_140932ACC @ 0x140932ACC (sub_140932ACC.c)
 *     sub_140932B54 @ 0x140932B54 (sub_140932B54.c)
 *     sub_140932BBC @ 0x140932BBC (sub_140932BBC.c)
 *     sub_140932C50 @ 0x140932C50 (sub_140932C50.c)
 *     sub_140932EB0 @ 0x140932EB0 (sub_140932EB0.c)
 *     sub_140932F44 @ 0x140932F44 (sub_140932F44.c)
 *     sub_140933110 @ 0x140933110 (sub_140933110.c)
 *     sub_1409331A0 @ 0x1409331A0 (sub_1409331A0.c)
 *     sub_140933280 @ 0x140933280 (sub_140933280.c)
 *     sub_14093334C @ 0x14093334C (sub_14093334C.c)
 *     sub_140933454 @ 0x140933454 (sub_140933454.c)
 *     sub_140933570 @ 0x140933570 (sub_140933570.c)
 *     sub_14095B55C @ 0x14095B55C (sub_14095B55C.c)
 *     sub_1409B4584 @ 0x1409B4584 (sub_1409B4584.c)
 *     sub_1409B45F0 @ 0x1409B45F0 (sub_1409B45F0.c)
 *     sub_140AF2DE0 @ 0x140AF2DE0 (sub_140AF2DE0.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B06F28 @ 0x140B06F28 (sub_140B06F28.c)
 *     sub_140B07074 @ 0x140B07074 (sub_140B07074.c)
 *     sub_140B0A424 @ 0x140B0A424 (sub_140B0A424.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 *     sub_140B129C4 @ 0x140B129C4 (sub_140B129C4.c)
 *     sub_140B313B8 @ 0x140B313B8 (sub_140B313B8.c)
 *     sub_140B4EA44 @ 0x140B4EA44 (sub_140B4EA44.c)
 *     sub_140B4EAD0 @ 0x140B4EAD0 (sub_140B4EAD0.c)
 *     sub_140B4EC40 @ 0x140B4EC40 (sub_140B4EC40.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041B5A0 @ 0x14041B5A0 (sub_14041B5A0.c)
 *     sub_14041B710 @ 0x14041B710 (sub_14041B710.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 */

__int64 __fastcall sub_140358A20(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v5; // r15
  bool v6; // r14
  unsigned __int8 CurrentIrql; // r12
  __int16 v9; // dx
  char v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v13; // al
  int v14; // ecx
  char v15; // cl
  NTSTATUS v16; // r14d
  _QWORD *v17; // r9
  char v18; // al
  char v20; // r14
  __int64 v21; // r9
  int v22; // ecx
  struct _KTHREAD *v23; // rax
  unsigned int v24; // eax
  char v25; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // rdx
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  __int64 v31; // r8
  int v32; // eax
  char v33; // [rsp+38h] [rbp-39h]
  char v34; // [rsp+39h] [rbp-38h]
  int v36; // [rsp+3Ch] [rbp-35h]
  char v37; // [rsp+40h] [rbp-31h]
  _WORD v38[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v39[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v40[2]; // [rsp+4Ch] [rbp-25h] BYREF
  _WORD v41[4]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v42; // [rsp+58h] [rbp-19h]
  _QWORD v43[2]; // [rsp+60h] [rbp-11h] BYREF
  _WORD *v44; // [rsp+70h] [rbp-1h] BYREF
  int v45; // [rsp+78h] [rbp+7h]
  int v46; // [rsp+7Ch] [rbp+Bh]
  _QWORD v47[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v36 = a3;
  v5 = a1;
  v6 = 0;
  v37 = 0;
  v34 = 0;
  CurrentIrql = 15;
  if ( !sub_140294D28(0LL) )
    return 3221225629LL;
  *(_BYTE *)v11 = v5;
  *(_WORD *)(v11 + 2) = v9;
  v42 = *((_QWORD *)KeGetCurrentThread() + 154);
  if ( (unsigned __int8)v5 > 2u )
  {
    if ( (BYTE4(xmmword_140D06910) & 8) != 0 )
    {
      v38[1] = v9;
      v43[0] = v38;
      v38[0] = v5;
      v43[1] = 4LL;
      v20 = 1;
      sub_14035EDE4((unsigned int)v43, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v20 = v10;
    }
    sub_14041B5A0(0LL, a4, (unsigned int)v42);
    if ( v20 )
    {
      v46 = 0;
      v39[1] = a2;
      v39[0] = v5;
      v44 = v39;
      v45 = 4;
      sub_14035EDE4((unsigned int)&v44, 1, -1610612728, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !sub_1402ABBD0() )
  {
    if ( byte_140D06888 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v21 + 20) |= (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v5 != 1 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v13 >= 2u )
    {
      *(_DWORD *)(a4 + 4) = 0;
      v36 = 1;
    }
    else
    {
      v14 = *((_DWORD *)CurrentThread + 199);
      if ( v14 )
      {
        v36 = *((_DWORD *)CurrentThread + 199);
        *(_DWORD *)(a4 + 4) = v14;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( byte_140D06888 )
        {
          v15 = 1;
LABEL_10:
          v6 = *((_DWORD *)CurrentThread + 199) == 0;
          v37 = v6;
          goto LABEL_11;
        }
      }
    }
    v15 = 0;
    goto LABEL_10;
  }
  v15 = 0;
  *(_DWORD *)(a4 + 4) = a3;
LABEL_11:
  if ( v13 == 1 )
  {
    v37 = 1;
LABEL_14:
    --*((_WORD *)CurrentThread + 242);
    goto LABEL_15;
  }
  if ( v13 >= 2u )
  {
    v37 = 0;
    goto LABEL_15;
  }
  if ( v6 )
    goto LABEL_14;
LABEL_15:
  if ( !v15 )
    goto LABEL_18;
  v16 = KeWaitForSingleObject(&byte_140C487A0, Executive, 0, 0, 0LL);
  if ( v16 < 0 )
    goto LABEL_28;
  v34 = 1;
  while ( 1 )
  {
LABEL_18:
    if ( (BYTE4(xmmword_140D06910) & 8) != 0 )
    {
      v40[1] = a2;
      v33 = 1;
      v47[0] = v40;
      v40[0] = v5;
      v47[1] = 4LL;
      sub_14035EDE4((unsigned int)v47, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v33 = 0;
    }
    sub_14041B5A0(0LL, a4, (unsigned int)v42);
    v17 = (_QWORD *)(a4 + 8);
    v16 = *(_DWORD *)(a4 + 8);
    if ( v33 )
    {
      v41[1] = a2;
      v41[0] = v5;
      v48[0] = v41;
      v48[1] = 4LL;
      sub_14035EDE4((unsigned int)v48, 1, -1610612728, 1354, 4200706);
      v17 = (_QWORD *)(a4 + 8);
    }
    v18 = *(_BYTE *)(a4 + 1);
    if ( v18 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v18 = *(_BYTE *)(a4 + 1);
    }
    if ( v18 == 6 )
      break;
    if ( v18 == 1 )
      goto LABEL_26;
    if ( (_BYTE)v5 == 1 )
    {
      v22 = *(_DWORD *)(a4 + 4);
      v23 = CurrentThread;
      if ( !v22 )
        v23 = CurrentThread;
      *((_DWORD *)v23 + 199) = v22;
    }
    else if ( !v36 )
    {
      *((_DWORD *)CurrentThread + 199) = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_47:
        sub_1405E1764(a4);
        break;
      case 2:
        if ( !*((_BYTE *)CurrentThread + 562) )
        {
          *v17 = -1073741776LL;
          break;
        }
LABEL_71:
        v24 = *(unsigned __int16 *)(a4 + 2);
        if ( v24 < (unsigned int)xmmword_140E018D0 )
        {
          v25 = *((_BYTE *)CurrentThread + 562);
          if ( *(_BYTE *)(a4 + 1) == 3 )
          {
            *((_BYTE *)CurrentThread + 562) = 0;
            LOWORD(v24) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)sub_14041B710(
                                       xmmword_140E018C0
                                     + (*(int *)(xmmword_140E018C0 + 4LL * (unsigned __int16)v24) >> 4),
                                       v17,
                                       *(_DWORD *)(xmmword_140E018C0 + 4LL * (unsigned __int16)v24) & 0xF);
          *((_BYTE *)CurrentThread + 562) = v25;
        }
        else
        {
          *v17 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_71;
      case 5:
        goto LABEL_47;
    }
    if ( !v36 && (_BYTE)v5 != 1 )
      *((_DWORD *)CurrentThread + 199) = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = *((_QWORD *)CurrentPrcb + 4375);
      v28 = (*(_DWORD *)(v27 + 20) & 0xFFFF0001) == 0;
      *(_DWORD *)(v27 + 20) &= 0xFFFF0001;
      if ( v28 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_26:
  if ( v34 )
    sub_14035AD70(&byte_140C487A0, 0);
LABEL_28:
  if ( v37 )
    sub_1402AC800((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = *((_QWORD *)v30 + 4375);
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v28 )
            sub_140418E4C(v30);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v16;
}
