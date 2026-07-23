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

__int64 __fastcall RtlpWalkHeap(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v7; // rcx
  __int16 v8; // bp
  __int64 v9; // rdx
  __int16 v10; // ax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int16 v24; // cx
  __int64 v25; // rax
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // eax
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  char v33; // al
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  char v36; // cl
  int v37; // edx
  int v38; // eax
  unsigned __int16 v39; // r8
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int16 v42; // ax
  int v43; // eax
  char v44; // cl
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int16 v47; // ax
  int v48; // eax
  int v49; // eax
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  __int16 v52; // ax
  int v53; // eax
  unsigned __int16 v54; // cx
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 ExtraStuffPointerUnsafe; // rax
  __int16 v58; // ax
  unsigned int v59; // eax
  unsigned int v60; // eax
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 v63; // rcx
  int v64; // [rsp+28h] [rbp-40h]
  int v65; // [rsp+38h] [rbp-30h]
  int v66; // [rsp+48h] [rbp-20h]
  int v67; // [rsp+48h] [rbp-20h]
  int v68; // [rsp+48h] [rbp-20h]
  int v69; // [rsp+48h] [rbp-20h]
  int v70; // [rsp+48h] [rbp-20h]
  int v71; // [rsp+48h] [rbp-20h]
  int v72; // [rsp+48h] [rbp-20h]
  unsigned int v73; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180174288)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v73 = -1073741811;
    goto LABEL_184;
  }
  v7 = *(_QWORD **)a2;
  v8 = 4096;
  v73 = 0;
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
  if ( a3 && v10 )
  {
    v11 = v7[8];
    goto LABEL_78;
  }
  v11 = (unsigned __int64)v7 + *(_QWORD *)(a2 + 8);
  if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
  {
    v12 = *(_QWORD **)(a1 + 288);
    v13 = v7 - 6;
    while ( v12 != (_QWORD *)(a1 + 288) )
    {
      v7 = v12 - 3;
      if ( v12[3] <= (unsigned __int64)v13 && (unsigned __int64)v13 <= v7[9] )
        goto LABEL_23;
      v12 = (_QWORD *)*v12;
    }
    v7 = 0LL;
  }
LABEL_23:
  if ( !a3 || v11 >= v7[9] )
  {
    v14 = v7[3];
    if ( v14 != a1 + 288 )
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
    v30 = *(_BYTE *)(v11 + 15);
    if ( (v30 & 0x40) != 0 )
    {
      v31 = *(_BYTE *)(v11 + 15) & 0x3F;
    }
    else
    {
      if ( v30 != 4 )
      {
        v32 = v11;
        goto LABEL_85;
      }
      v31 = *(unsigned __int8 *)(v11 + 14);
    }
    v32 = v11 + 16 * v31;
LABEL_85:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v32 + 16;
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) && RtlpWalkLFHBlock(a1, a2) )
    {
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_184;
      goto LABEL_28;
    }
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      break;
    v33 = *(_BYTE *)(v11 + 15);
    if ( (v33 & 0x40) != 0 )
    {
      v34 = *(_BYTE *)(v11 + 15) & 0x3F;
    }
    else
    {
      if ( v33 != 4 )
      {
        v35 = v11;
        goto LABEL_97;
      }
      v34 = *(unsigned __int8 *)(v11 + 14);
    }
    v35 = v11 + 16 * v34;
LABEL_97:
    *(_QWORD *)a2 = v35 + 16;
    v36 = *(_BYTE *)(v11 + 15);
    if ( v36 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v49 = *(_DWORD *)(v11 + 8);
        LOWORD(v70) = v49;
        if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
          v70 = *(_DWORD *)(a1 + 136) ^ v49;
        v50 = v70;
      }
      else
      {
        v50 = *(_WORD *)(v11 + 8);
      }
      v51 = *(_QWORD *)(v11 - 16) - v50;
      *(_BYTE *)(a2 + 17) = 64;
      v52 = 16385;
      *(_QWORD *)(a2 + 8) = v51;
      *(_WORD *)(a2 + 18) = 16385;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v53 = *(_DWORD *)(v11 + 8);
        LOWORD(v71) = v53;
        if ( (v53 & *(_DWORD *)(a1 + 124)) != 0 )
          v71 = *(_DWORD *)(a1 + 136) ^ v53;
        v54 = v71;
        v52 = *(_WORD *)(a2 + 18);
      }
      else
      {
        v54 = *(_WORD *)(v11 + 8);
      }
      *(_BYTE *)(a2 + 16) = v54;
      if ( (v52 & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v54;
      v8 = v52;
      goto LABEL_158;
    }
    if ( v36 == 3 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v11 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 56);
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
LABEL_158:
      if ( *(_DWORD *)(a1 + 124) )
      {
        v55 = *(_DWORD *)(v11 + 8);
        if ( (v55 & *(_DWORD *)(a1 + 124)) != 0 )
          v55 ^= *(_DWORD *)(a1 + 136);
        v8 = *(_WORD *)(a2 + 18);
        v56 = HIWORD(v55);
      }
      else
      {
        LOBYTE(v56) = *(_BYTE *)(v11 + 10);
      }
      if ( (v56 & 2) != 0 )
      {
        ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v11);
        *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          v58 = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
        else
          v58 = 0;
        *(_WORD *)(a2 + 32) = v58;
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
        v59 = *(_DWORD *)(v11 + 8);
        if ( (v59 & *(_DWORD *)(a1 + 124)) != 0 )
          v59 ^= *(_DWORD *)(a1 + 136);
        v8 = *(_WORD *)(a2 + 18);
        v60 = HIWORD(v59);
      }
      else
      {
        LOBYTE(v60) = *(_BYTE *)(v11 + 10);
      }
      *(_WORD *)(a2 + 18) = v8 | v60 & 0xE0;
      goto LABEL_184;
    }
    if ( v36 != 1 )
    {
      v37 = *(_DWORD *)(a1 + 124);
      if ( v37 )
      {
        v38 = *(_DWORD *)(v11 + 8);
        v37 = *(_DWORD *)(a1 + 124);
        LOWORD(v67) = v38;
        if ( (v37 & v38) != 0 )
          v67 = *(_DWORD *)(a1 + 136) ^ v38;
        v39 = v67;
        v36 = *(_BYTE *)(v11 + 15);
      }
      else
      {
        v39 = *(_WORD *)(v11 + 8);
      }
      if ( v36 == 5 )
      {
        v40 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v36 & 0x40) != 0 )
      {
        v40 = *(unsigned __int16 *)(v11 + 16LL * (v36 & 0x3F) + 12);
      }
      else if ( (v36 & 0x3F) == 0x3F )
      {
        if ( v36 >= 0 )
        {
          if ( v37 )
          {
            v43 = *(_DWORD *)(v11 + 8);
            LOWORD(v68) = v43;
            if ( (v43 & *(_DWORD *)(a1 + 124)) != 0 )
              v68 = *(_DWORD *)(a1 + 136) ^ v43;
            v42 = v68;
          }
          else
          {
            v42 = *(_WORD *)(v11 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
            v41 = 0LL;
          else
            v41 = *(_QWORD *)(v11
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
          v42 = *(_WORD *)(v41 + 36);
        }
        v40 = *(_QWORD *)(v11 + 16LL * v42);
      }
      else
      {
        v40 = v36 & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v39 - v40;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v11 + 14);
      *(_WORD *)(a2 + 18) = 1;
      v44 = *(_BYTE *)(v11 + 15);
      if ( v44 == 5 )
      {
        v45 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v44 & 0x40) != 0 )
      {
        v45 = *(unsigned __int16 *)(v11 + 16LL * (v44 & 0x3F) + 12);
      }
      else if ( (v44 & 0x3F) == 0x3F )
      {
        if ( v44 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v48 = *(_DWORD *)(v11 + 8);
            LOWORD(v69) = v48;
            if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
              v69 = *(_DWORD *)(a1 + 136) ^ v48;
            v47 = v69;
          }
          else
          {
            v47 = *(_WORD *)(v11 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
            v46 = 0LL;
          else
            v46 = *(_QWORD *)(v11
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
          v47 = *(_WORD *)(v46 + 36);
        }
        v45 = *(_QWORD *)(v11 + 16LL * v47);
      }
      else
      {
        v45 = *(_BYTE *)(v11 + 15) & 0x3F;
      }
      v8 = *(_WORD *)(a2 + 18);
      *(_BYTE *)(a2 + 16) = v45;
      if ( (v8 & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v45;
      goto LABEL_158;
    }
    *(_WORD *)(a2 + 18) = 1;
LABEL_28:
    if ( *(_BYTE *)(a1 + 418) == 2
      && *(_QWORD *)(a1 + 408)
      && RtlpWalkLFHBlock(a1, a2)
      && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
    {
      goto LABEL_184;
    }
    v15 = *(_QWORD **)a2;
    if ( (*(_BYTE *)(a2 + 18) & 1) == 0 )
    {
      v16 = (unsigned __int64)(v15 - 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v23 = *(_DWORD *)(v16 + 8);
        LOWORD(v65) = v23;
        if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
          v65 = *(_DWORD *)(a1 + 136) ^ v23;
        v24 = v65;
      }
      else
      {
        v24 = *(_WORD *)(v16 + 8);
      }
      v25 = *(unsigned __int8 *)(v16 + 14);
      if ( (_BYTE)v25 )
        v20 = (v16 & 0xFFFFFFFFFFFF0000uLL) - (v25 << 16) + 0x10000;
      else
        v20 = a1;
      if ( !v20 )
      {
LABEL_183:
        v73 = -1073741503;
        goto LABEL_184;
      }
      if ( *(_BYTE *)(v16 + 15) != 3 )
      {
        v22 = v24;
        goto LABEL_77;
      }
      goto LABEL_58;
    }
    v16 = (unsigned __int64)(v15 - 2);
    _m_prefetchw((const void *)v16);
    if ( *(_BYTE *)(v16 + 15) == 5 )
      v16 -= 16LL * *(unsigned __int8 *)(v16 + 14);
    if ( *(_BYTE *)(v16 + 15) == 4 )
    {
      v17 = *(_QWORD *)(v16 - 48);
      v18 = a1 + 272;
      goto LABEL_73;
    }
    v19 = *(unsigned __int8 *)(v16 + 14);
    if ( (_BYTE)v19 )
      v20 = (v16 & 0xFFFFFFFFFFFF0000uLL) - (v19 << 16) + 0x10000;
    else
      v20 = a1;
    if ( !v20 )
      goto LABEL_183;
    if ( *(_BYTE *)(v16 + 15) == 3 )
    {
LABEL_58:
      if ( *(_QWORD *)(v16 + 56) + v16 + 64 < *(_QWORD *)(v20 + 72) )
      {
        *(_QWORD *)a2 = *(_QWORD *)(v16 + 48);
        v29 = *(_QWORD *)(v16 + 56);
        v11 = 0LL;
        *(_QWORD *)(a2 + 8) = v29;
        *(_DWORD *)(a2 + 16) = 0x10000000;
        *(_QWORD *)(a2 + 36) = 0LL;
      }
      else
      {
        v14 = *(_QWORD *)(v20 + 24);
        if ( v14 == a1 + 288 )
        {
LABEL_72:
          v18 = a1 + 272;
          v17 = *(_QWORD *)(a1 + 272);
LABEL_73:
          if ( v17 == v18 )
          {
            v73 = -2147483622;
            goto LABEL_184;
          }
          v11 = v17 + 48;
        }
        else
        {
LABEL_60:
          v9 = v14 - 24;
LABEL_61:
          v11 = 0LL;
          if ( !v9 )
            goto LABEL_72;
          if ( *(_BYTE *)(a1 + 418) == 2 && v9 == *(_QWORD *)(a1 + 408) )
          {
            RtlpWalkLowFragHeapSegment(a1, a2, &v73, 2LL);
            goto LABEL_184;
          }
          *(_QWORD *)a2 = v9;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v26 = *(_DWORD *)(v9 + 8);
            LOWORD(v66) = v26;
            if ( (v26 & *(_DWORD *)(a1 + 124)) != 0 )
              v66 = *(_DWORD *)(a1 + 136) ^ v26;
            v27 = v66;
          }
          else
          {
            v27 = *(_WORD *)(v9 + 8);
          }
          *(_QWORD *)(a2 + 8) = 16LL * v27;
          *(_DWORD *)(a2 + 16) = 0x20000;
          *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v9 + 56) - *(_DWORD *)(v9 + 80)) << 12;
          v28 = *(_DWORD *)(v9 + 80) << 12;
          *(_DWORD *)(a2 + 28) = v28;
          if ( (*(_BYTE *)(v9 + 20) & 2) != 0 )
            *(_DWORD *)(a2 + 28) = v28 + 4096;
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
        v21 = *(_DWORD *)(v16 + 8);
        LOWORD(v64) = v21;
        if ( (v21 & *(_DWORD *)(a1 + 124)) != 0 )
          v64 = *(_DWORD *)(a1 + 136) ^ v21;
        LOWORD(v22) = v64;
      }
      else
      {
        LOWORD(v22) = *(_WORD *)(v16 + 8);
      }
      v22 = (unsigned __int16)v22;
LABEL_77:
      v11 = 16 * v22 + v16;
    }
  }
  *(_QWORD *)a2 = v11 + 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v61 = *(_DWORD *)(v11 + 8);
    LOWORD(v72) = v61;
    if ( (v61 & *(_DWORD *)(a1 + 124)) != 0 )
      v72 = *(_DWORD *)(a1 + 136) ^ v61;
    v62 = v72;
  }
  else
  {
    v62 = *(_WORD *)(v11 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v62 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v11 + 14);
  *(_WORD *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_184:
  if ( RtlGetCurrentServiceSessionId() )
    v63 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v63 = 2147353472LL;
  if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v73 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v73;
}
