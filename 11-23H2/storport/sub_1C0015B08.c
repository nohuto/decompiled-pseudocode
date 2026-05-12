/*
 * XREFs of sub_1C0015B08 @ 0x1C0015B08
 * Callers:
 *     sub_1C00157F4 @ 0x1C00157F4 (sub_1C00157F4.c)
 * Callees:
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C00407E4 @ 0x1C00407E4 (sub_1C00407E4.c)
 */

__int64 __fastcall sub_1C0015B08(__int64 a1, __int64 a2, union _LARGE_INTEGER a3, __int64 a4, _OWORD *a5)
{
  __int64 v5; // rdi
  char v7; // cl
  union _LARGE_INTEGER v8; // r14
  _BYTE *v9; // r10
  char v10; // r11
  _BYTE *v11; // rsi
  unsigned __int8 v12; // r15
  __int64 v13; // rbx
  char v14; // al
  int v15; // edi
  union _LARGE_INTEGER v16; // r8
  bool v17; // zf
  ULONGLONG QuadPart; // rax
  ULONGLONG v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 result; // rax
  char v24; // bp
  unsigned int v25; // r14d
  unsigned int v26; // edi
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r10
  int v32; // ecx
  __int64 v33; // rax
  char v34; // [rsp+60h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  PerformanceFrequency = a3;
  v5 = a2;
  v7 = *(_BYTE *)(a4 + 3);
  v8 = a3;
  v34 = v7;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = (__int64)a5;
  *a5 = 0LL;
  *(_OWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 32) = 0LL;
  v14 = *(_BYTE *)(a4 + 2);
  if ( v14 != 40 )
  {
    if ( !v14 )
    {
      v9 = (_BYTE *)(a4 + 72);
      v10 = *(_BYTE *)(a4 + 4);
      v11 = *(_BYTE **)(a4 + 32);
      if ( !*(_BYTE *)(a4 + 10) )
        v9 = 0LL;
      v12 = *(_BYTE *)(a4 + 11);
    }
    goto LABEL_3;
  }
  v24 = 0;
  if ( *(_DWORD *)(a4 + 20) )
    goto LABEL_3;
  v25 = *(_DWORD *)(a4 + 56);
  v26 = 0;
  if ( !v25 )
    goto LABEL_47;
  while ( 1 )
  {
    v27 = *(unsigned int *)(a4 + 4LL * v26 + 120);
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_61:
    if ( ++v26 >= v25 )
      goto LABEL_46;
  }
  v29 = (unsigned int)v27;
  v30 = *(_DWORD *)(v27 + a4) - 64;
  if ( !v30 )
  {
    if ( v29 + 40 <= v28 )
    {
      if ( *(_BYTE *)(v29 + a4 + 10) )
        v9 = (_BYTE *)(v29 + a4 + 24);
      v11 = *(_BYTE **)(v29 + a4 + 16);
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  v32 = v30 - 1;
  if ( !v32 )
  {
    if ( v29 + 56 <= v28 )
    {
      v24 = 1;
      if ( *(_BYTE *)(v29 + a4 + 10) )
        v9 = (_BYTE *)(v29 + a4 + 24);
      v10 = *(_BYTE *)(v29 + a4 + 8);
      v11 = *(_BYTE **)(v29 + a4 + 16);
      v12 = *(_BYTE *)(v29 + a4 + 9);
    }
LABEL_45:
    if ( v24 )
      goto LABEL_46;
    goto LABEL_61;
  }
  if ( v32 != 1 || v29 + 40 > v28 )
    goto LABEL_45;
  if ( *(_DWORD *)(v29 + a4 + 12) )
    v9 = (_BYTE *)(v29 + a4 + 32);
  v11 = *(_BYTE **)(v29 + a4 + 24);
LABEL_44:
  v12 = *(_BYTE *)(v29 + a4 + 9);
  v10 = *(_BYTE *)(v29 + a4 + 8);
LABEL_46:
  v7 = v34;
LABEL_47:
  v5 = a2;
  v8 = PerformanceFrequency;
LABEL_3:
  *(_BYTE *)(v13 + 1) = v10;
  *(_BYTE *)v13 = v7 & 0x3F;
  *(_BYTE *)(v13 + 5) = -1;
  if ( v9 )
  {
    *(_BYTE *)(v13 + 5) = *v9;
    if ( (unsigned int)sub_1C0015A74() )
    {
      sub_1C00407E4(v31, v13 + 24, 0LL);
      if ( v5 )
      {
        v33 = *(_QWORD *)(v5 + 8);
        if ( v33 )
          *(_DWORD *)(v13 + 8) = *(_DWORD *)(v33 + 40);
      }
    }
  }
  if ( !v8.QuadPart )
  {
    if ( *(_BYTE *)(a1 + 3280) == 1 && *(_BYTE *)v13 == 9 )
      *(_DWORD *)(v13 + 16) = 5000000 * *(_DWORD *)(a1 + 3304) / 0x2710u;
    goto LABEL_27;
  }
  v15 = -1;
  if ( *(_DWORD *)(a1 + 2292) != 1 )
    goto LABEL_22;
  v16.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( byte_1C0093BE8 )
  {
    v17 = byte_1C0093BA0 == 0;
    goto LABEL_8;
  }
  if ( dword_1C0093400 )
  {
    if ( !byte_1C0093BA0 )
      goto LABEL_9;
    v17 = dword_1C0093404 == 0;
LABEL_8:
    if ( !v17 )
      QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
    else
LABEL_9:
      QuadPart = KeQueryUnbiasedInterruptTime();
    v16 = PerformanceFrequency;
    v19 = QuadPart;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = v19 - *(_QWORD *)(v8.QuadPart + 696);
  if ( !byte_1C0093BE8 )
  {
LABEL_14:
    if ( byte_1C0093BA0 && dword_1C0093404 )
    {
      if ( !v16.QuadPart )
        goto LABEL_22;
      v20 = 10000000 * v20 / v16.QuadPart;
    }
    goto LABEL_18;
  }
  if ( !byte_1C0093BA0 )
  {
LABEL_18:
    v21 = v20 / 10000;
    if ( (unsigned __int64)(v20 / 10000) > 0xFFFFFFFF )
    {
      *(_DWORD *)(v13 + 12) = -1;
    }
    else if ( v21 || !v20 )
    {
      *(_DWORD *)(v13 + 12) = v21;
    }
    else
    {
      *(_DWORD *)(v13 + 12) = 1;
    }
    goto LABEL_22;
  }
  if ( dword_1C0093404 )
    goto LABEL_14;
  if ( v16.QuadPart )
  {
    v20 = 10000000 * v20 / v16.QuadPart;
    goto LABEL_14;
  }
LABEL_22:
  v22 = *(_QWORD *)(v8.QuadPart + 688);
  if ( v22 / 0x2710 <= 0xFFFFFFFF )
  {
    if ( v22 / 0x2710 || (v15 = 1, !v22) )
      v15 = v22 / 0x2710;
  }
  *(_DWORD *)(v13 + 16) = v15;
LABEL_27:
  *(_DWORD *)(v13 + 20) = *(_QWORD *)(a1 + 744) / 0x100000000LL;
  if ( v34 < 0 && v11 && v12 >= 0x12u && (unsigned __int8)((*v11 & 0x7F) - 112) <= 1u )
  {
    *(_BYTE *)(v13 + 2) = v11[2] & 0xF;
    *(_BYTE *)(v13 + 3) = v11[12];
    *(_BYTE *)(v13 + 4) = v11[13];
  }
  result = *(unsigned int *)(a1 + 2392);
  *(_DWORD *)(v13 + 32) = result;
  return result;
}
