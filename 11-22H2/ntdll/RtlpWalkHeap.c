/*
 * XREFs of RtlpWalkHeap @ 0x180100228
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180063B9C (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpWalkLFHBlock @ 0x1800AF264 (RtlpWalkLFHBlock.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800FF110 (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlDebugWalkHeap @ 0x1801066D8 (RtlDebugWalkHeap.c)
 *     RtlpLogHeapWalkEvent @ 0x180117AD0 (RtlpLogHeapWalkEvent.c)
 *     RtlpWalkLowFragHeapSegment @ 0x180119CA8 (RtlpWalkLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpWalkHeap(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _WORD *v9; // r14
  __int16 v10; // ax
  unsigned __int64 v11; // rbx
  _QWORD **v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD **v15; // rdx
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
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
  __int64 v29; // rbx
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v34; // al
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  char v37; // al
  int v38; // edx
  int *v39; // r8
  unsigned __int16 v40; // r9
  char v41; // cl
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int16 v44; // ax
  char v45; // cl
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int16 v48; // ax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned __int16 v51; // ax
  __int64 v52; // rcx
  unsigned __int16 v53; // ax
  __int64 ExtraStuffPointerUnsafe; // rax
  __int16 v55; // ax
  unsigned int v56; // eax
  unsigned int v57; // eax
  int v58; // eax
  unsigned __int16 v59; // ax
  __int64 v60; // rcx
  int v61; // [rsp+28h] [rbp-40h]
  int v62; // [rsp+38h] [rbp-30h]
  int v63; // [rsp+48h] [rbp-20h]
  int v64; // [rsp+48h] [rbp-20h]
  int v65; // [rsp+48h] [rbp-20h]
  int v66; // [rsp+48h] [rbp-20h]
  int v67; // [rsp+48h] [rbp-20h]
  int v68; // [rsp+48h] [rbp-20h]
  int v69; // [rsp+48h] [rbp-20h]
  unsigned int v70; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_18017E878)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v70 = -1073741811;
    goto LABEL_182;
  }
  v7 = *(_QWORD **)a2;
  v70 = 0;
  if ( !v7 )
  {
    v8 = a1;
    goto LABEL_62;
  }
  v9 = (_WORD *)(a2 + 18);
  if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
    goto LABEL_28;
  v10 = *v9 & 2;
  if ( v10 && *(_BYTE *)(a1 + 418) == 2 && v7 == *(_QWORD **)(a1 + 408) )
  {
LABEL_12:
    v8 = 0LL;
    goto LABEL_62;
  }
  if ( a3 && v10 )
  {
    v11 = v7[8];
    goto LABEL_78;
  }
  v11 = (unsigned __int64)v7 + *(_QWORD *)(a2 + 8);
  v12 = (_QWORD **)(a1 + 288);
  if ( (*v9 & 0x1000) != 0 )
  {
    v13 = *v12;
    v14 = v7 - 6;
    while ( v13 != v12 )
    {
      v7 = v13 - 3;
      if ( v13[3] <= (unsigned __int64)v14 && (unsigned __int64)v14 <= v7[9] )
        goto LABEL_23;
      v13 = (_QWORD *)*v13;
    }
    v7 = 0LL;
  }
LABEL_23:
  if ( !a3 || v11 >= v7[9] )
  {
    v15 = (_QWORD **)v7[3];
    if ( v15 != v12 )
      goto LABEL_61;
    if ( *(_BYTE *)(a1 + 418) == 2 )
    {
      v8 = *(_QWORD *)(a1 + 408);
      goto LABEL_62;
    }
    goto LABEL_12;
  }
  while ( 1 )
  {
LABEL_78:
    if ( !v11 )
      goto LABEL_182;
    v31 = *(_BYTE *)(v11 + 15);
    if ( (v31 & 0x40) != 0 )
    {
      v32 = *(_BYTE *)(v11 + 15) & 0x3F;
    }
    else
    {
      if ( v31 != 4 )
      {
        v33 = v11;
        goto LABEL_85;
      }
      v32 = *(unsigned __int8 *)(v11 + 14);
    }
    v33 = v11 + 16 * v32;
LABEL_85:
    *v9 = 1;
    *(_QWORD *)a2 = v33 + 16;
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) && RtlpWalkLFHBlock(a1, a2) )
    {
      if ( (*v9 & 0x2000) == 0 )
        goto LABEL_182;
      goto LABEL_28;
    }
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      break;
    v34 = *(_BYTE *)(v11 + 15);
    if ( (v34 & 0x40) != 0 )
    {
      v35 = *(_BYTE *)(v11 + 15) & 0x3F;
    }
    else
    {
      if ( v34 != 4 )
      {
        v36 = v11;
        goto LABEL_97;
      }
      v35 = *(unsigned __int8 *)(v11 + 14);
    }
    v36 = v11 + 16 * v35;
LABEL_97:
    *(_QWORD *)a2 = v36 + 16;
    v37 = *(_BYTE *)(v11 + 15);
    if ( v37 == 4 )
    {
      v39 = (int *)(v11 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v67 = *v39;
        if ( (*v39 & *(_DWORD *)(a1 + 124)) != 0 )
          v67 = *(_DWORD *)(a1 + 136) ^ *v39;
        v51 = v67;
      }
      else
      {
        v51 = *(_WORD *)v39;
      }
      v52 = *(_QWORD *)(v11 - 16) - v51;
      *(_BYTE *)(a2 + 17) = 64;
      *(_QWORD *)(a2 + 8) = v52;
      *v9 = 16385;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v68 = *v39;
        if ( (*v39 & *(_DWORD *)(a1 + 124)) != 0 )
          v68 = *(_DWORD *)(a1 + 136) ^ *v39;
        v53 = v68;
      }
      else
      {
        v53 = *(_WORD *)v39;
      }
      v46 = v53;
LABEL_142:
      *(_BYTE *)(a2 + 16) = v46;
      if ( (*(_BYTE *)v9 & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v46;
LABEL_144:
      if ( *(_DWORD *)(a1 + 124) )
      {
        v49 = *v39;
        if ( (*v39 & *(_DWORD *)(a1 + 124)) != 0 )
          v49 ^= *(_DWORD *)(a1 + 136);
        v50 = HIWORD(v49);
      }
      else
      {
        LOBYTE(v50) = *(_BYTE *)(v11 + 10);
      }
      if ( (v50 & 2) != 0 )
      {
        ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v11);
        *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          v55 = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
        else
          v55 = 0;
        *(_WORD *)(a2 + 32) = v55;
        *v9 |= 0x10u;
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
        v56 = *v39;
        if ( (*v39 & *(_DWORD *)(a1 + 124)) != 0 )
          v56 ^= *(_DWORD *)(a1 + 136);
        v57 = HIWORD(v56);
      }
      else
      {
        LOBYTE(v57) = *(_BYTE *)(v11 + 10);
      }
      *v9 |= v57 & 0xE0;
      goto LABEL_182;
    }
    if ( v37 == 3 )
    {
      v39 = (int *)(v11 + 8);
      *(_QWORD *)a2 = *(_QWORD *)(v11 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 56);
      *v9 = 4096;
      *(_WORD *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 36) = 0LL;
      goto LABEL_144;
    }
    if ( v37 != 1 )
    {
      v38 = *(_DWORD *)(a1 + 124);
      v39 = (int *)(v11 + 8);
      if ( v38 )
      {
        v38 = *(_DWORD *)(a1 + 124);
        v64 = *v39;
        if ( (v38 & *v39) != 0 )
          v64 = *(_DWORD *)(a1 + 136) ^ *v39;
        v40 = v64;
      }
      else
      {
        v40 = *(_WORD *)v39;
      }
      v41 = *(_BYTE *)(v11 + 15);
      if ( v41 == 5 )
      {
        v42 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v41 & 0x40) != 0 )
      {
        v42 = *(unsigned __int16 *)(v11 + 16LL * (v41 & 0x3F) + 12);
      }
      else if ( (v41 & 0x3F) == 0x3F )
      {
        if ( v41 >= 0 )
        {
          if ( v38 )
          {
            v65 = *v39;
            if ( (*v39 & *(_DWORD *)(a1 + 124)) != 0 )
              v65 = *(_DWORD *)(a1 + 136) ^ *v39;
            v44 = v65;
          }
          else
          {
            v44 = *(_WORD *)v39;
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)v39 ^ (v11 >> 4)) )
            v43 = 0LL;
          else
            v43 = *(_QWORD *)(v11
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *v39 ^ (unsigned int)(v11 >> 4)) >> 12));
          v44 = *(_WORD *)(v43 + 36);
        }
        v42 = *(_QWORD *)(v11 + 16LL * v44);
      }
      else
      {
        v42 = *(_BYTE *)(v11 + 15) & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v40 - v42;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v11 + 14);
      *v9 = 1;
      v45 = *(_BYTE *)(v11 + 15);
      if ( v45 == 5 )
      {
        v46 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v45 & 0x40) != 0 )
      {
        v46 = *(unsigned __int16 *)(v11 + 16LL * (v45 & 0x3F) + 12);
      }
      else if ( (v45 & 0x3F) == 0x3F )
      {
        if ( v45 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v66 = *v39;
            if ( (*v39 & *(_DWORD *)(a1 + 124)) != 0 )
              v66 = *(_DWORD *)(a1 + 136) ^ *v39;
            v48 = v66;
          }
          else
          {
            v48 = *(_WORD *)v39;
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)v39 ^ (v11 >> 4)) )
            v47 = 0LL;
          else
            v47 = *(_QWORD *)(v11
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *v39 ^ (unsigned int)(v11 >> 4)) >> 12));
          v48 = *(_WORD *)(v47 + 36);
        }
        v46 = *(_QWORD *)(v11 + 16LL * v48);
      }
      else
      {
        v46 = *(_BYTE *)(v11 + 15) & 0x3F;
      }
      goto LABEL_142;
    }
    *v9 = 1;
LABEL_28:
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) && RtlpWalkLFHBlock(a1, a2) && (*v9 & 0x2000) == 0 )
      goto LABEL_182;
    v16 = *(_QWORD **)a2;
    if ( (*(_BYTE *)v9 & 1) == 0 )
    {
      v17 = (unsigned __int64)(v16 - 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v23 = *(_DWORD *)(v17 + 8);
        LOWORD(v62) = v23;
        if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
          v62 = *(_DWORD *)(a1 + 136) ^ v23;
        v24 = v62;
      }
      else
      {
        v24 = *(_WORD *)(v17 + 8);
      }
      v25 = *(unsigned __int8 *)(v17 + 14);
      if ( (_BYTE)v25 )
        v20 = (v17 & 0xFFFFFFFFFFFF0000uLL) - (v25 << 16) + 0x10000;
      else
        v20 = a1;
      if ( !v20 )
      {
LABEL_181:
        v70 = -1073741503;
        goto LABEL_182;
      }
      if ( *(_BYTE *)(v17 + 15) != 3 )
      {
        v22 = v24;
        goto LABEL_77;
      }
      goto LABEL_59;
    }
    v17 = (unsigned __int64)(v16 - 2);
    _m_prefetchw((const void *)v17);
    if ( *(_BYTE *)(v17 + 15) == 5 )
      v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
    if ( *(_BYTE *)(v17 + 15) == 4 )
    {
      v18 = *(_QWORD *)(v17 - 48);
      if ( v18 == a1 + 272 )
        goto LABEL_102;
      v11 = v18 + 48;
    }
    else
    {
      v19 = *(unsigned __int8 *)(v17 + 14);
      if ( (_BYTE)v19 )
        v20 = (v17 & 0xFFFFFFFFFFFF0000uLL) - (v19 << 16) + 0x10000;
      else
        v20 = a1;
      if ( !v20 )
        goto LABEL_181;
      if ( *(_BYTE *)(v17 + 15) == 3 )
      {
LABEL_59:
        if ( *(_QWORD *)(v17 + 56) + v17 + 64 < *(_QWORD *)(v20 + 72) )
        {
          *(_QWORD *)a2 = *(_QWORD *)(v17 + 48);
          v30 = *(_QWORD *)(v17 + 56);
          v11 = 0LL;
          *(_QWORD *)(a2 + 8) = v30;
          *(_WORD *)(a2 + 16) = 0;
          *v9 = 4096;
          *(_QWORD *)(a2 + 36) = 0LL;
        }
        else
        {
          v15 = *(_QWORD ***)(v20 + 24);
          if ( v15 == (_QWORD **)(a1 + 288) )
            goto LABEL_73;
LABEL_61:
          v8 = (__int64)(v15 - 3);
LABEL_62:
          v11 = 0LL;
          if ( v8 )
          {
            if ( *(_BYTE *)(a1 + 418) == 2 && v8 == *(_QWORD *)(a1 + 408) )
            {
              RtlpWalkLowFragHeapSegment(a1, a2, &v70);
              goto LABEL_182;
            }
            *(_QWORD *)a2 = v8;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v26 = *(_DWORD *)(v8 + 8);
              LOWORD(v63) = v26;
              if ( (v26 & *(_DWORD *)(a1 + 124)) != 0 )
                v63 = *(_DWORD *)(a1 + 136) ^ v26;
              v27 = v63;
            }
            else
            {
              v27 = *(_WORD *)(v8 + 8);
            }
            v9 = (_WORD *)(a2 + 18);
            *(_QWORD *)(a2 + 8) = 16LL * v27;
            *(_WORD *)(a2 + 18) = 2;
            *(_WORD *)(a2 + 16) = 0;
            *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v8 + 56) - *(_DWORD *)(v8 + 80)) << 12;
            v28 = *(_DWORD *)(v8 + 80) << 12;
            *(_DWORD *)(a2 + 28) = v28;
            if ( (*(_BYTE *)(v8 + 20) & 2) != 0 )
              *(_DWORD *)(a2 + 28) = v28 + 4096;
            *(_QWORD *)(a2 + 32) = *(_QWORD *)(v8 + 64)
                                 + 16 * (((*(_BYTE *)(*(_QWORD *)(v8 + 64) + 10LL) & 1) == 0) + 1LL);
            *(_QWORD *)(a2 + 40) = *(_QWORD *)(v8 + 72);
          }
          else
          {
LABEL_73:
            v29 = *(_QWORD *)(a1 + 272);
            if ( v29 == a1 + 272 )
            {
LABEL_102:
              v70 = -2147483622;
              goto LABEL_182;
            }
            v11 = v29 + 48;
            v9 = (_WORD *)(a2 + 18);
          }
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v21 = *(_DWORD *)(v17 + 8);
          LOWORD(v61) = v21;
          if ( (v21 & *(_DWORD *)(a1 + 124)) != 0 )
            v61 = *(_DWORD *)(a1 + 136) ^ v21;
          LOWORD(v22) = v61;
        }
        else
        {
          LOWORD(v22) = *(_WORD *)(v17 + 8);
        }
        v22 = (unsigned __int16)v22;
LABEL_77:
        v11 = 16 * v22 + v17;
      }
    }
  }
  *(_QWORD *)a2 = v11 + 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v58 = *(_DWORD *)(v11 + 8);
    LOWORD(v69) = v58;
    if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
      v69 = *(_DWORD *)(a1 + 136) ^ v58;
    v59 = v69;
  }
  else
  {
    v59 = *(_WORD *)(v11 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v59 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v11 + 14);
  *v9 = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_182:
  if ( RtlGetCurrentServiceSessionId() )
    v60 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v60 = 2147353472LL;
  if ( *(_BYTE *)v60 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v70 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v70;
}
