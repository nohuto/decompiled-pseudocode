/*
 * XREFs of TranslateToExtendedSrb @ 0x1C000A790
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C00094D0 (RaidUnitClaimIrp.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1C004FEF4 (McTemplateK0zx_EtwWriteTransfer.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C004FF94 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5, char a6)
{
  char v6; // r15
  unsigned __int64 v7; // r12
  int v10; // r13d
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rbx
  char v13; // bp
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  char v17; // al
  int v18; // eax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // r14
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v30; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  char v35; // al
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF
  int v37; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v37) = a4;
  v6 = 0;
  v7 = a3;
  PerformanceFrequency.QuadPart = 1LL;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  v12 = v11;
  if ( *(_BYTE *)(a2 + 2) )
  {
    switch ( *(_BYTE *)(a2 + 2) )
    {
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0x10:
      case 0x12:
      case 0x13:
      case 0x15:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x20:
      case 0x26:
        if ( (unsigned int)v7 < 0x90 )
          goto LABEL_82;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
        goto LABEL_49;
      case 0x17:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_82;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 96;
        *(_DWORD *)(a1 + 148) = 16;
        *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
        *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
        *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
        goto LABEL_49;
      case 0x24:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_82;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 97;
        *(_DWORD *)(a1 + 148) = 12;
        goto LABEL_80;
      case 0x25:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_82;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 98;
        *(_DWORD *)(a1 + 148) = 16;
LABEL_80:
        *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
        *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
        goto LABEL_49;
      default:
        v10 = -1073741811;
        goto LABEL_51;
    }
  }
  v13 = a6;
  v14 = 224;
  if ( a6 != 1 )
    v14 = 184;
  if ( (unsigned int)v7 < v14 )
    goto LABEL_82;
  *(_DWORD *)(a1 + 16) = v14;
  v15 = 2;
  *(_WORD *)(a1 + 36) = 2;
  *(_WORD *)a1 = 8;
  *(_BYTE *)(a1 + 2) = 40;
  *(_DWORD *)(a1 + 8) = 1397899864;
  *(_DWORD *)(a1 + 12) = 1;
  *(_DWORD *)(a1 + 52) = 128;
  if ( v13 )
    *(_DWORD *)(a1 + 52) = 136;
  else
    v15 = 1;
  *(_DWORD *)(a1 + 56) = v15;
  *(_DWORD *)(a1 + 20) = *(unsigned __int8 *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 56);
  if ( *(_BYTE *)(a2 + 2) == 23 )
    v16 = 0LL;
  else
    v16 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 112) = v16;
  v17 = *(_BYTE *)(a2 + 2);
  if ( v17 == 23 || (unsigned __int8)(v17 - 36) <= 1u )
  {
    *(_DWORD *)(a1 + 32) = 0;
    v18 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = *(unsigned __int8 *)(a2 + 8);
    *(_WORD *)(a1 + 38) = *(unsigned __int8 *)(a2 + 9);
    v18 = *(_DWORD *)(a2 + 64);
  }
  *(_DWORD *)(a1 + 44) = v18;
  v19 = *(_DWORD **)(a2 + 48);
  if ( v19 )
  {
    if ( *v19 == 523124044 )
    {
      *(_QWORD *)(a1 + 96) = v19;
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 176LL);
    }
    else
    {
      *(_QWORD *)(a1 + 80) = v19;
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 56);
    }
  }
  v20 = 152LL;
  if ( v13 != 1 )
    v20 = 144LL;
  *(_DWORD *)(a1 + 120) = v20;
  if ( v20 + 40 > v7 )
  {
    v10 = -1073741670;
  }
  else
  {
    *(_DWORD *)((unsigned int)v20 + a1) = 64;
    v21 = (unsigned int)v20 + a1;
    *(_DWORD *)(v21 + 4) = 32;
    *(_BYTE *)(v21 + 10) = *(_BYTE *)(a2 + 10);
    *(_BYTE *)(v21 + 8) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(v21 + 9) = *(_BYTE *)(a2 + 11);
    *(_QWORD *)(v21 + 16) = *(_QWORD *)(a2 + 32);
    if ( *(_BYTE *)(a2 + 10) )
      memmove((void *)(v21 + 24), (const void *)(a2 + 72), *(unsigned __int8 *)(a2 + 10));
    else
      *(_OWORD *)(v21 + 24) = 0LL;
  }
  if ( v13 != 1 || *(_DWORD *)(a1 + 56) <= 1u )
    goto LABEL_48;
  *(_DWORD *)(a1 + 124) = 192;
  if ( v7 < 0xE0 )
    goto LABEL_82;
  v22 = a5;
  if ( !a5 )
  {
    v22 = *(_QWORD *)(a2 + 48);
    if ( !v22 )
      goto LABEL_48;
  }
  v23 = *(_QWORD *)(v22 + 192);
  v24 = 0;
  v25 = *(_QWORD *)(v22 + 184);
  *(_DWORD *)(a1 + 192) = 128;
  *(_QWORD *)(a1 + 196) = 24LL;
  if ( (*(_DWORD *)(v22 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 200) = 1;
    v24 = 1;
  }
  if ( (*(_DWORD *)(v22 + 16) & 0x42) != 0 )
  {
    v24 |= 2u;
    *(_DWORD *)(a1 + 200) = v24;
  }
  if ( v23 )
  {
    if ( (*(_DWORD *)(v23 + 80) & 0x20) != 0 )
    {
      v24 |= 4u;
      *(_DWORD *)(a1 + 200) = v24;
    }
    if ( (*(_DWORD *)(v23 + 80) & 0x18000) != 0 )
    {
      v24 |= 8u;
      *(_DWORD *)(a1 + 200) = v24;
    }
    if ( (*(_DWORD *)(v23 + 80) & 0x10) != 0 )
      *(_DWORD *)(a1 + 200) = v24 | 0x10;
  }
  else
  {
    *(_DWORD *)(a1 + 200) = v24 | 0x40;
  }
  v37 = 0;
  if ( (int)IoGetGenericIrpExtension(v22, &v37, 4LL) >= 0 && (v37 & 0x20) != 0 )
    *(_DWORD *)(a1 + 200) |= 0x20u;
  if ( v25 )
  {
    if ( *(_BYTE *)v25 == 3 )
    {
      v26 = *(_DWORD *)(v25 + 16);
      *(_DWORD *)(a1 + 204) = v26;
      v27 = *(_DWORD *)(v25 + 8);
    }
    else
    {
      if ( *(_BYTE *)v25 == 4 )
      {
        v26 = *(_DWORD *)(v25 + 16);
        *(_DWORD *)(a1 + 204) = v26;
        v27 = *(_DWORD *)(v25 + 8);
        *(_BYTE *)(a1 + 212) = 1;
LABEL_45:
        *(_DWORD *)(a1 + 208) = v27;
        if ( (v26 & 0xFFFF0000) == 0x56530000 )
          *(_DWORD *)(a1 + 200) |= 0x80u;
        goto LABEL_47;
      }
      *(_DWORD *)(a1 + 204) = 0;
      v27 = 0;
      v26 = 0;
    }
    *(_BYTE *)(a1 + 212) = 0;
    goto LABEL_45;
  }
  *(_QWORD *)(a1 + 204) = 0LL;
  *(_BYTE *)(a1 + 212) = 0;
LABEL_47:
  v37 = 0;
  if ( (int)IoGetGenericIrpExtension(v22, &v37, 4LL) >= 0 )
  {
    v35 = v37;
    if ( (v37 & 0x10) != 0 )
    {
      *(_DWORD *)(a1 + 200) |= 0x80000000;
      *(_BYTE *)(a1 + 213) = v35 & 0xF;
    }
  }
LABEL_48:
  if ( v10 >= 0 )
  {
LABEL_49:
    v28 = *(unsigned int *)(a1 + 52);
    if ( v28 + 16 <= v7 )
    {
      *(_DWORD *)(v28 + a1) = 1;
      *(_DWORD *)(v28 + a1 + 4) = 4;
      *(_BYTE *)(v28 + a1 + 8) = *(_BYTE *)(a2 + 5);
      *(_BYTE *)(v28 + a1 + 9) = *(_BYTE *)(a2 + 6);
      *(_BYTE *)(v28 + a1 + 10) = *(_BYTE *)(a2 + 7);
      goto LABEL_51;
    }
LABEL_82:
    v10 = -1073741670;
  }
LABEL_51:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v12.QuadPart )
    v32 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  else
    v32 = PerformanceCounter.QuadPart - v12.QuadPart;
  if ( UseQPCTime )
  {
    LowPart = PerformanceFrequency.LowPart;
    if ( PerformanceFrequency.QuadPart && v32 )
    {
      v33 = v32 / PerformanceFrequency.QuadPart;
      v32 = 1000 * (v32 % PerformanceFrequency.QuadPart);
      v30.QuadPart = 10000 * (v32 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
      v6 = 10000 * (v32 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
         + 16 * (-24 * v33 + v32 / PerformanceFrequency.QuadPart);
    }
  }
  else
  {
    v6 = v32;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    McTemplateK0zx_EtwWriteTransfer(LowPart, v30.LowPart, v32, (unsigned int)L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
