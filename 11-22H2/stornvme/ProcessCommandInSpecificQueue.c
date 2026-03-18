/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C0002420
 * Callers:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C00027D0 (ProcessCommandTrace.c)
 */

__int64 __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // rsi
  __int16 v8; // cx
  unsigned __int8 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  unsigned __int16 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  _WORD *v15; // r10
  unsigned __int16 *v16; // r11
  __int64 *v17; // r12
  unsigned __int16 *v18; // rax
  int v19; // r9d
  int v20; // edx
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // r10
  __int64 v24; // r15
  bool v25; // zf
  _OWORD *v26; // rdx
  unsigned int v27; // eax
  int v28; // edx
  __int64 result; // rax
  unsigned __int16 v30; // dx
  __int64 v31; // r12
  unsigned __int16 v32; // cx
  __int16 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  signed __int32 v39[6]; // [rsp+8h] [rbp-59h] BYREF
  _QWORD *v40; // [rsp+28h] [rbp-39h]
  int *v41; // [rsp+30h] [rbp-31h]
  char *v42; // [rsp+38h] [rbp-29h]
  _DWORD v43[2]; // [rsp+48h] [rbp-19h]
  __int64 v44; // [rsp+50h] [rbp-11h]
  _QWORD v45[2]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v46; // [rsp+68h] [rbp+7h]
  char v47; // [rsp+C8h] [rbp+67h] BYREF
  unsigned int v48; // [rsp+D0h] [rbp+6Fh] BYREF
  int v49; // [rsp+D8h] [rbp+77h] BYREF
  unsigned __int16 v50; // [rsp+E0h] [rbp+7Fh]

  v50 = a4;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_WORD *)(a3 + 40);
  v45[0] = 1LL;
  v45[1] = 0LL;
  v9 = 1;
  v46 = 0LL;
  if ( !v8 )
  {
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 912));
    v8 = *(_WORD *)(a3 + 40);
  }
  v10 = *(_DWORD *)(a1 + 32);
  if ( (v10 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    v9 = 0;
    goto LABEL_33;
  }
  if ( (v10 & 0x100) != 0 && v8 )
  {
    *(_BYTE *)(a2 + 3) = 2;
    v9 = 0;
    goto LABEL_33;
  }
  v40 = v45;
  StorPortExtendedFunction(93LL, a1, 1LL);
  v11 = *(unsigned __int16 *)(a3 + 40);
  if ( (_WORD)v11 )
  {
    v12 = *(_WORD *)(a1 + 334);
    v13 = 136 * v11;
    v14 = *(_QWORD *)(a1 + 872);
    v15 = (_WORD *)(v13 + v14 - 92);
    v16 = (unsigned __int16 *)(v13 + v14 - 88);
    v17 = (__int64 *)(v13 + v14 - 104);
    v18 = (unsigned __int16 *)(v13 + v14 - 90);
  }
  else
  {
    v12 = *(_WORD *)(a1 + 332);
    v15 = (_WORD *)(a1 + 388);
    v16 = (unsigned __int16 *)(a1 + 392);
    v17 = (__int64 *)(a1 + 376);
    v18 = (unsigned __int16 *)(a1 + 390);
  }
  v19 = (unsigned __int16)*v15;
  v20 = *v18;
  if ( v20 == v19 + 1 || !(_WORD)v20 && v19 == v12 - 1 )
    goto LABEL_63;
  *v15 = v19 + 1;
  if ( (_WORD)v19 + 1 == v12 )
    *v15 = 0;
  v21 = *v16;
  if ( *v16 < v12 )
  {
    while ( 1 )
    {
      v22 = v21 + 1;
      if ( !*(_QWORD *)(*v17 + 16LL * v21) )
        break;
      ++v21;
      if ( v22 >= v12 )
        goto LABEL_45;
    }
    v23 = v21;
    *v16 = v22;
    if ( v22 != v12 )
      goto LABEL_18;
    goto LABEL_36;
  }
LABEL_45:
  v30 = 0;
  if ( !*v16 )
  {
LABEL_49:
    if ( *v15 )
      v33 = *v15 - 1;
    else
      v33 = v12 - 1;
    *v15 = v33;
LABEL_63:
    StorPortNotification(4100LL, a1, v45);
    v9 = 0;
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_33;
  }
  v31 = *v17;
  while ( 1 )
  {
    v32 = v30 + 1;
    if ( !*(_QWORD *)(v31 + 16LL * v30) )
      break;
    ++v30;
    if ( v32 >= *v16 )
      goto LABEL_49;
  }
  v23 = v30;
  *v16 = v32;
  if ( v32 == v12 )
LABEL_36:
    *v16 = 0;
LABEL_18:
  *(_WORD *)(v7 + 4248) = v19;
  v24 = 0LL;
  *(_WORD *)(v7 + 4246) = v23;
  v25 = *(_WORD *)(a3 + 40) == 0;
  v44 = 0LL;
  if ( !v25 )
    v24 = 392LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 880) - 392LL;
  *(_WORD *)(v7 + 4098) = v23;
  ProcessCommandTrace(a1, a2);
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v7 + 4246)) = a2;
  *(_DWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v7 + 4246) + 8) = 0;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v7 + 4246) + 12) = *(_WORD *)(v7 + 4248);
  v26 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4248));
  *v26 = *(_OWORD *)(v7 + 4096);
  v26[1] = *(_OWORD *)(v7 + 4112);
  v26[2] = *(_OWORD *)(v7 + 4128);
  v26[3] = *(_OWORD *)(v7 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4248) + 8) = *(_WORD *)(v7 + 4246);
  if ( (*(_BYTE *)(a1 + 21) || (*(_DWORD *)(a1 + 116) & 2) != 0) && *(_DWORD *)(a2 + 12) != 251658240 && a2 != a1 + 952 )
  {
    v27 = 0;
    while ( a2 != a1 + ((unsigned __int64)v27 << 7) + 1080 )
    {
      if ( ++v27 >= 6 )
      {
        StorPortExtendedFunction(47LL, a1, 0LL);
        *(_QWORD *)(v7 + 4160) = v44;
        break;
      }
    }
  }
  _InterlockedIncrement16((volatile signed __int16 *)(a3 + 128));
  v28 = 0;
  if ( (unsigned __int16)(*(_WORD *)(v7 + 4248) + 1) != v50 )
    v28 = (unsigned __int16)(*(_WORD *)(v7 + 4248) + 1);
  **(_DWORD **)(a3 + 16) = v28;
  _InterlockedOr(v39, 0);
  if ( *(_QWORD *)(v7 + 4160) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL);
    *(_QWORD *)(v7 + 4168) = v44;
  }
  StorPortNotification(4100LL, a1, v45);
  if ( v24 && *(_BYTE *)(v24 + 248) )
  {
    v48 = 0;
    StorPortExtendedFunction(92LL, a1, &v48);
    v34 = *(_QWORD *)(v24 + 256);
    if ( v34 )
    {
      v47 = 0;
      v38 = *(_QWORD *)(v34 + 8LL * v48);
      v42 = &v47;
      v41 = 0LL;
      v40 = 0LL;
      StorPortExtendedFunction(89LL, a1, v38);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 4044) & 0x10) != 0 )
      {
        v35 = *(_QWORD *)(a1 + 272);
        v36 = *(_QWORD *)(v35 + 72LL * v48 + 8);
        if ( v36 )
        {
          v43[0] = 0;
          LOWORD(v43[0]) = *(_WORD *)(v35 + 72LL * v48 + 16);
          _BitScanForward64(&v37, v36);
          *(_DWORD *)((char *)v43 + 2) = v37;
          StorPortNotification(4107LL, a1, v24 + 264);
        }
      }
      v41 = &v49;
      v40 = 0LL;
      v49 = 0;
      StorPortNotification(4098LL, a1, v24 + 264);
    }
  }
LABEL_33:
  result = v9;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 912));
  return result;
}
