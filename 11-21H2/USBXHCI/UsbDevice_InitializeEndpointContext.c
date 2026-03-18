/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C00049B4
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00045DC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C004703C (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C0004BC8 (Endpoint_GetMaxPrimaryStreams.c)
 */

unsigned int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  char v7; // al
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int8 v11; // cl
  char v12; // cl
  unsigned __int8 v13; // al
  int v14; // ecx
  int v15; // eax
  int MaxPrimaryStreams; // eax
  _DWORD *v17; // r11
  __int64 v18; // rcx
  __int64 DequeuePointer; // rax
  __int64 v20; // r11
  int v21; // r10d
  __int16 v22; // cx
  unsigned int v23; // r10d
  unsigned int result; // eax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  int v28; // r10d
  char v29; // cl
  int v30; // eax
  int v31; // ecx

  v5 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  if ( v7 == 1
    || (*(_QWORD *)(*(_QWORD *)a2 + 336LL) & 0x10000000000000LL) != 0
    && v7 == 3
    && *(char *)(a2 + 98) < 0
    && (v27 = *(_QWORD *)(a2 + 16), *(_WORD *)(v27 + 124) == 1529)
    && *(_WORD *)(v27 + 126) == 4353
    && *(_DWORD *)(v27 + 36) > 1u )
  {
    v8 = 0;
  }
  else
  {
    v8 = 6;
  }
  v9 = v8 | *(_DWORD *)(a3 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(a3 + 4) = v9;
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_BYTE *)(a2 + 102);
  switch ( v10 )
  {
    case 0:
      if ( (((v9 & 0x38) - 24) & 0xFFFFFFDF) != 0 )
      {
        LOWORD(v26) = *(_WORD *)(a3 + 6);
      }
      else
      {
        if ( v11 >= 0x10u )
          *(_BYTE *)(a3 + 2) = 8 - (v11 < 0x20u);
        else
          *(_BYTE *)(a3 + 2) = 6;
        v5 = *(unsigned __int16 *)(a3 + 6);
        *(_WORD *)(a3 + 18) = v5;
        LOWORD(v26) = v5;
        *(_BYTE *)(a3 + 3) = 0;
      }
      v26 = (unsigned __int16)v26;
      goto LABEL_23;
    case 1:
      v25 = v9 & 0x38;
      if ( ((v25 - 24) & 0xFFFFFFDF) != 0 )
      {
        if ( ((v25 - 8) & 0xFFFFFFDF) != 0 )
        {
LABEL_22:
          v26 = *(unsigned __int16 *)(a3 + 6);
LABEL_23:
          *(_DWORD *)(a2 + 152) = v26;
          break;
        }
        *(_WORD *)(a3 + 2) = 3;
LABEL_21:
        v5 = *(unsigned __int16 *)(a3 + 6);
        *(_WORD *)(a3 + 18) = v5;
        goto LABEL_22;
      }
      if ( v11 >= 2u )
      {
        if ( v11 < 4u )
          goto LABEL_43;
        if ( v11 >= 8u )
        {
          if ( v11 >= 0x10u )
            *(_BYTE *)(a3 + 2) = 8 - (v11 < 0x20u);
          else
            *(_BYTE *)(a3 + 2) = 6;
          goto LABEL_44;
        }
        *(_BYTE *)(a3 + 2) = 5;
        if ( !*(_DWORD *)(a1 + 40)
          && (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x20000) != 0 )
        {
LABEL_43:
          *(_BYTE *)(a3 + 2) = 4;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 2) = 3;
      }
LABEL_44:
      *(_BYTE *)(a3 + 3) = 0;
      goto LABEL_21;
    case 2:
      if ( (((v9 & 0x38) - 8) & 0xFFFFFFCF) != 0 )
      {
        LOBYTE(v14) = *(_BYTE *)(a3 + 5);
        LOWORD(v15) = *(_WORD *)(a3 + 6);
      }
      else
      {
        if ( v11 < 2u )
        {
          v12 = 0;
        }
        else if ( v11 < 6u )
        {
          v12 = v11 - 1;
        }
        else
        {
          v12 = 5;
        }
        *(_BYTE *)(a3 + 2) = v12;
        v13 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v14 = v13;
        v15 = *(unsigned __int16 *)(a3 + 6);
        *(_BYTE *)(a3 + 5) = v14;
        v5 = v15 * (v14 + 1);
        *(_WORD *)(a3 + 18) = v15 * (v14 + 1);
      }
      *(_DWORD *)(a2 + 152) = (unsigned __int16)v15 * ((unsigned __int8)v14 + 1);
      break;
    case 3:
      v28 = v9 & 0x38;
      if ( ((v28 - 24) & 0xFFFFFFCF) == 0 && v28 != 72 || v28 == 8 )
      {
        if ( v11 >= 2u )
        {
          if ( v11 >= 6u )
            v29 = 5;
          else
            v29 = v11 - 1;
        }
        else
        {
          v29 = 0;
        }
        *(_BYTE *)(a3 + 2) = v29;
        v30 = *(unsigned __int8 *)(a2 + 106);
        if ( (v30 & 0x80u) == 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ (v30 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v5;
        *(_BYTE *)(a3 + 3) = BYTE2(v5);
      }
      if ( (((v9 & 0x38) - 8) & 0xFFFFFFDF) != 0 )
        v31 = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      else
        v31 = v5;
      *(_DWORD *)(a2 + 152) = v31;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v17 ^= (*v17 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  DequeuePointer = Endpoint_GetDequeuePointer(v18, 0LL);
  *(_QWORD *)(v20 + 8) = DequeuePointer;
  v22 = v21;
  LODWORD(DequeuePointer) = v21;
  v23 = v21 & 0xFFFF7FFF;
  result = DequeuePointer | 0x8000;
  if ( (v22 & 0x7C00) != 0 )
    v23 = result;
  *(_DWORD *)v20 = v23;
  return result;
}
