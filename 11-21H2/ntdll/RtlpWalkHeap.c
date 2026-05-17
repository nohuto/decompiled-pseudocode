/*
 * XREFs of RtlpWalkHeap @ 0x18010055C
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180057468 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpWalkLFHBlock @ 0x1800B1434 (RtlpWalkLFHBlock.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800FF410 (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlDebugWalkHeap @ 0x180106980 (RtlDebugWalkHeap.c)
 *     RtlpLogHeapWalkEvent @ 0x180117664 (RtlpLogHeapWalkEvent.c)
 *     RtlpWalkLowFragHeapSegment @ 0x180118ADC (RtlpWalkLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpWalkHeap(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r14
  _QWORD *v7; // rcx
  __int16 v8; // bp
  __int64 v9; // rdx
  __int16 v10; // ax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  unsigned __int16 v23; // cx
  __int64 v24; // rax
  int v25; // eax
  unsigned __int16 v26; // ax
  int v27; // eax
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  char v32; // al
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  char v35; // cl
  int v36; // edx
  int v37; // eax
  unsigned __int16 v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int16 v41; // ax
  int v42; // eax
  char v43; // cl
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int16 v46; // ax
  int v47; // eax
  int v48; // eax
  unsigned __int16 v49; // ax
  __int64 v50; // rcx
  __int16 v51; // ax
  int v52; // eax
  unsigned __int16 v53; // cx
  unsigned int v54; // eax
  unsigned int v55; // eax
  __int64 ExtraStuffPointerUnsafe; // rax
  __int16 v57; // ax
  unsigned int v58; // eax
  unsigned int v59; // eax
  int v60; // eax
  unsigned __int16 v61; // ax
  __int64 v62; // rcx
  int v63; // [rsp+28h] [rbp-40h]
  int v64; // [rsp+38h] [rbp-30h]
  int v65; // [rsp+48h] [rbp-20h]
  int v66; // [rsp+48h] [rbp-20h]
  int v67; // [rsp+48h] [rbp-20h]
  int v68; // [rsp+48h] [rbp-20h]
  int v69; // [rsp+48h] [rbp-20h]
  int v70; // [rsp+48h] [rbp-20h]
  int v71; // [rsp+48h] [rbp-20h]
  unsigned int v72; // [rsp+70h] [rbp+8h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180174288)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v72 = -1073741811;
    goto LABEL_184;
  }
  v7 = *(_QWORD **)a2;
  v8 = 4096;
  v72 = 0;
  if ( !v7 )
  {
    v9 = a1;
    goto LABEL_61;
  }
  if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
    goto LABEL_28;
  v10 = *(_WORD *)(a2 + 18) & 2;
  if ( v10 && *(_BYTE *)(a1 + 418) == 2 && v7 == *(_QWORD **)(a1 + 408) )
  {
LABEL_12:
    v9 = 0LL;
    goto LABEL_61;
  }
  if ( v3 && v10 )
  {
    v11 = v7[8];
    goto LABEL_78;
  }
  v11 = (unsigned __int64)v7 + *(_QWORD *)(a2 + 8);
  if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
  {
    v12 = *(_QWORD **)(a1 + 288);
    a3 = (unsigned __int64)(v7 - 6);
    while ( v12 != (_QWORD *)(a1 + 288) )
    {
      v7 = v12 - 3;
      if ( v12[3] <= a3 && a3 <= v7[9] )
        goto LABEL_23;
      v12 = (_QWORD *)*v12;
    }
    v7 = 0LL;
  }
LABEL_23:
  if ( !v3 || v11 >= v7[9] )
  {
    v13 = v7[3];
    if ( v13 != a1 + 288 )
      goto LABEL_60;
    if ( *(_BYTE *)(a1 + 418) == 2 )
    {
      v9 = *(_QWORD *)(a1 + 408);
      goto LABEL_61;
    }
    goto LABEL_12;
  }
  while ( 1 )
  {
LABEL_78:
    if ( !v11 )
      goto LABEL_184;
    v29 = *(_BYTE *)(v11 + 15);
    if ( (v29 & 0x40) != 0 )
    {
      v30 = *(_BYTE *)(v11 + 15) & 0x3F;
    }
    else
    {
      if ( v29 != 4 )
      {
        v31 = v11;
        goto LABEL_85;
      }
      v30 = *(unsigned __int8 *)(v11 + 14);
    }
    v31 = v11 + 16 * v30;
LABEL_85:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v31 + 16;
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) && RtlpWalkLFHBlock(a1, a2, a3, 2uLL) )
    {
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_184;
      goto LABEL_28;
    }
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      break;
    v32 = *(_BYTE *)(v11 + 15);
    if ( (v32 & 0x40) != 0 )
    {
      v33 = *(_BYTE *)(v11 + 15) & 0x3F;
    }
    else
    {
      if ( v32 != 4 )
      {
        v34 = v11;
        goto LABEL_97;
      }
      v33 = *(unsigned __int8 *)(v11 + 14);
    }
    v34 = v11 + 16 * v33;
LABEL_97:
    *(_QWORD *)a2 = v34 + 16;
    v35 = *(_BYTE *)(v11 + 15);
    if ( v35 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v48 = *(_DWORD *)(v11 + 8);
        LOWORD(v69) = v48;
        if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
          v69 = *(_DWORD *)(a1 + 136) ^ v48;
        v49 = v69;
      }
      else
      {
        v49 = *(_WORD *)(v11 + 8);
      }
      v50 = *(_QWORD *)(v11 - 16) - v49;
      *(_BYTE *)(a2 + 17) = 64;
      v51 = 16385;
      *(_QWORD *)(a2 + 8) = v50;
      *(_WORD *)(a2 + 18) = 16385;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v52 = *(_DWORD *)(v11 + 8);
        LOWORD(v70) = v52;
        if ( (v52 & *(_DWORD *)(a1 + 124)) != 0 )
          v70 = *(_DWORD *)(a1 + 136) ^ v52;
        v53 = v70;
        v51 = *(_WORD *)(a2 + 18);
      }
      else
      {
        v53 = *(_WORD *)(v11 + 8);
      }
      *(_BYTE *)(a2 + 16) = v53;
      if ( (v51 & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v53;
      v8 = v51;
      goto LABEL_158;
    }
    if ( v35 == 3 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v11 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 56);
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
LABEL_158:
      if ( *(_DWORD *)(a1 + 124) )
      {
        v54 = *(_DWORD *)(v11 + 8);
        if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
          v54 ^= *(_DWORD *)(a1 + 136);
        v8 = *(_WORD *)(a2 + 18);
        v55 = HIWORD(v54);
      }
      else
      {
        LOBYTE(v55) = *(_BYTE *)(v11 + 10);
      }
      if ( (v55 & 2) != 0 )
      {
        ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v11);
        *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          v57 = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
        else
          v57 = 0;
        *(_WORD *)(a2 + 32) = v57;
        *(_WORD *)(a2 + 18) |= 0x10u;
        v8 = *(_WORD *)(a2 + 18);
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v11 + 11);
      }
      else
      {
        *(_WORD *)(a2 + 32) = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v58 = *(_DWORD *)(v11 + 8);
        if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
          v58 ^= *(_DWORD *)(a1 + 136);
        v8 = *(_WORD *)(a2 + 18);
        v59 = HIWORD(v58);
      }
      else
      {
        LOBYTE(v59) = *(_BYTE *)(v11 + 10);
      }
      *(_WORD *)(a2 + 18) = v8 | v59 & 0xE0;
      goto LABEL_184;
    }
    if ( v35 != 1 )
    {
      v36 = *(_DWORD *)(a1 + 124);
      if ( v36 )
      {
        v37 = *(_DWORD *)(v11 + 8);
        v36 = *(_DWORD *)(a1 + 124);
        LOWORD(v66) = v37;
        if ( (v36 & v37) != 0 )
          v66 = *(_DWORD *)(a1 + 136) ^ v37;
        v38 = v66;
        v35 = *(_BYTE *)(v11 + 15);
      }
      else
      {
        v38 = *(_WORD *)(v11 + 8);
      }
      if ( v35 == 5 )
      {
        v39 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v35 & 0x40) != 0 )
      {
        v39 = *(unsigned __int16 *)(v11 + 16LL * (v35 & 0x3F) + 12);
      }
      else if ( (v35 & 0x3F) == 0x3F )
      {
        if ( v35 >= 0 )
        {
          if ( v36 )
          {
            v42 = *(_DWORD *)(v11 + 8);
            LOWORD(v67) = v42;
            if ( (v42 & *(_DWORD *)(a1 + 124)) != 0 )
              v67 = *(_DWORD *)(a1 + 136) ^ v42;
            v41 = v67;
          }
          else
          {
            v41 = *(_WORD *)(v11 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
            v40 = 0LL;
          else
            v40 = *(_QWORD *)(v11
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
          v41 = *(_WORD *)(v40 + 36);
        }
        v39 = *(_QWORD *)(v11 + 16LL * v41);
      }
      else
      {
        v39 = v35 & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v38 - v39;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v11 + 14);
      *(_WORD *)(a2 + 18) = 1;
      v43 = *(_BYTE *)(v11 + 15);
      if ( v43 == 5 )
      {
        v44 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v43 & 0x40) != 0 )
      {
        v44 = *(unsigned __int16 *)(v11 + 16LL * (v43 & 0x3F) + 12);
      }
      else if ( (v43 & 0x3F) == 0x3F )
      {
        if ( v43 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v47 = *(_DWORD *)(v11 + 8);
            LOWORD(v68) = v47;
            if ( (v47 & *(_DWORD *)(a1 + 124)) != 0 )
              v68 = *(_DWORD *)(a1 + 136) ^ v47;
            v46 = v68;
          }
          else
          {
            v46 = *(_WORD *)(v11 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
            v45 = 0LL;
          else
            v45 = *(_QWORD *)(v11
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
          v46 = *(_WORD *)(v45 + 36);
        }
        v44 = *(_QWORD *)(v11 + 16LL * v46);
      }
      else
      {
        v44 = *(_BYTE *)(v11 + 15) & 0x3F;
      }
      v8 = *(_WORD *)(a2 + 18);
      *(_BYTE *)(a2 + 16) = v44;
      if ( (v8 & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v44;
      goto LABEL_158;
    }
    *(_WORD *)(a2 + 18) = 1;
LABEL_28:
    if ( *(_BYTE *)(a1 + 418) == 2
      && *(_QWORD *)(a1 + 408)
      && RtlpWalkLFHBlock(a1, a2, a3, 2uLL)
      && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
    {
      goto LABEL_184;
    }
    v14 = *(_QWORD **)a2;
    if ( (*(_BYTE *)(a2 + 18) & 1) == 0 )
    {
      v15 = (unsigned __int64)(v14 - 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v22 = *(_DWORD *)(v15 + 8);
        LOWORD(v64) = v22;
        if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
          v64 = *(_DWORD *)(a1 + 136) ^ v22;
        v23 = v64;
      }
      else
      {
        v23 = *(_WORD *)(v15 + 8);
      }
      v24 = *(unsigned __int8 *)(v15 + 14);
      if ( (_BYTE)v24 )
        v19 = (v15 & 0xFFFFFFFFFFFF0000uLL) - (v24 << 16) + 0x10000;
      else
        v19 = a1;
      if ( !v19 )
      {
LABEL_183:
        v72 = -1073741503;
        goto LABEL_184;
      }
      if ( *(_BYTE *)(v15 + 15) != 3 )
      {
        v21 = v23;
        goto LABEL_77;
      }
      goto LABEL_58;
    }
    v15 = (unsigned __int64)(v14 - 2);
    _m_prefetchw((const void *)v15);
    if ( *(_BYTE *)(v15 + 15) == 5 )
      v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
    if ( *(_BYTE *)(v15 + 15) == 4 )
    {
      v16 = *(_QWORD *)(v15 - 48);
      v17 = a1 + 272;
      goto LABEL_73;
    }
    v18 = *(unsigned __int8 *)(v15 + 14);
    if ( (_BYTE)v18 )
      v19 = (v15 & 0xFFFFFFFFFFFF0000uLL) - (v18 << 16) + 0x10000;
    else
      v19 = a1;
    if ( !v19 )
      goto LABEL_183;
    if ( *(_BYTE *)(v15 + 15) == 3 )
    {
LABEL_58:
      if ( *(_QWORD *)(v15 + 56) + v15 + 64 < *(_QWORD *)(v19 + 72) )
      {
        *(_QWORD *)a2 = *(_QWORD *)(v15 + 48);
        v28 = *(_QWORD *)(v15 + 56);
        v11 = 0LL;
        *(_QWORD *)(a2 + 8) = v28;
        *(_DWORD *)(a2 + 16) = 0x10000000;
        *(_QWORD *)(a2 + 36) = 0LL;
      }
      else
      {
        v13 = *(_QWORD *)(v19 + 24);
        if ( v13 == a1 + 288 )
        {
LABEL_72:
          v17 = a1 + 272;
          v16 = *(_QWORD *)(a1 + 272);
LABEL_73:
          if ( v16 == v17 )
          {
            v72 = -2147483622;
            goto LABEL_184;
          }
          v11 = v16 + 48;
        }
        else
        {
LABEL_60:
          v9 = v13 - 24;
LABEL_61:
          v11 = 0LL;
          if ( !v9 )
            goto LABEL_72;
          if ( *(_BYTE *)(a1 + 418) == 2 && v9 == *(_QWORD *)(a1 + 408) )
          {
            RtlpWalkLowFragHeapSegment(a1, a2, &v72, 2LL);
            goto LABEL_184;
          }
          *(_QWORD *)a2 = v9;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v25 = *(_DWORD *)(v9 + 8);
            LOWORD(v65) = v25;
            if ( (v25 & *(_DWORD *)(a1 + 124)) != 0 )
              v65 = *(_DWORD *)(a1 + 136) ^ v25;
            v26 = v65;
          }
          else
          {
            v26 = *(_WORD *)(v9 + 8);
          }
          *(_QWORD *)(a2 + 8) = 16LL * v26;
          *(_DWORD *)(a2 + 16) = 0x20000;
          *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v9 + 56) - *(_DWORD *)(v9 + 80)) << 12;
          v27 = *(_DWORD *)(v9 + 80) << 12;
          *(_DWORD *)(a2 + 28) = v27;
          if ( (*(_BYTE *)(v9 + 20) & 2) != 0 )
            *(_DWORD *)(a2 + 28) = v27 + 4096;
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v9 + 64)
                               + 16 * (((*(_BYTE *)(*(_QWORD *)(v9 + 64) + 10LL) & 1) == 0) + 1LL);
          *(_QWORD *)(a2 + 40) = *(_QWORD *)(v9 + 72);
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v20 = *(_DWORD *)(v15 + 8);
        LOWORD(v63) = v20;
        if ( (v20 & *(_DWORD *)(a1 + 124)) != 0 )
          v63 = *(_DWORD *)(a1 + 136) ^ v20;
        LOWORD(v21) = v63;
      }
      else
      {
        LOWORD(v21) = *(_WORD *)(v15 + 8);
      }
      v21 = (unsigned __int16)v21;
LABEL_77:
      v11 = 16 * v21 + v15;
    }
  }
  *(_QWORD *)a2 = v11 + 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v60 = *(_DWORD *)(v11 + 8);
    LOWORD(v71) = v60;
    if ( (v60 & *(_DWORD *)(a1 + 124)) != 0 )
      v71 = *(_DWORD *)(a1 + 136) ^ v60;
    v61 = v71;
  }
  else
  {
    v61 = *(_WORD *)(v11 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v61 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v11 + 14);
  *(_WORD *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_184:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v62 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v62 = 2147353472LL;
  if ( *(_BYTE *)v62 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v72 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v72;
}
