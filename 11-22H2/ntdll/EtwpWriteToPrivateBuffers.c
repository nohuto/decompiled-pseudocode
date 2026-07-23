/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x18005D0CC
 * Callers:
 *     EtwpEventWriteFull @ 0x180030348 (EtwpEventWriteFull.c)
 *     EtwEventWriteTransfer @ 0x1800304F0 (EtwEventWriteTransfer.c)
 *     EtwEventWriteString @ 0x1801239E0 (EtwEventWriteString.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18005D750 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlResetStackOverflow @ 0x1800E8A98 (RtlResetStackOverflow.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180124074 (EtwpCheckForEnoughStackSpace.c)
 *     EtwpDemuxUmTraceHandle @ 0x1801240E0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x180124374 (EtwpGetStackExtendedHeaderItem.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpWriteToPrivateBuffers(
        _BYTE *a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v11; // r8
  _BYTE *v12; // rdx
  _OWORD *v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // r9d
  __int64 v16; // r10
  int v17; // eax
  _WORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // ebx
  unsigned int v25; // edi
  _BYTE *v26; // rax
  int v27; // esi
  int v28; // esi
  unsigned int v29; // ebx
  __int64 v30; // rdi
  unsigned int v31; // r8d
  __int16 v32; // r9
  unsigned int v33; // r10d
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // r15
  _GUID ActivityId; // xmm0
  unsigned int v38; // r8d
  void *v39; // rcx
  unsigned __int16 *v40; // rax
  unsigned int v41; // edx
  unsigned __int16 v42; // si
  unsigned __int16 *v43; // rdi
  __int64 v44; // rbx
  unsigned __int16 *v45; // rcx
  unsigned __int16 *v46; // rbx
  __int64 v47; // rcx
  unsigned __int16 v48; // ax
  char *v49; // rdi
  __int64 v50; // rsi
  _BYTE *v51; // r12
  size_t v52; // rdx
  unsigned __int64 *v53; // r9
  char v54; // al
  unsigned __int64 v55; // rax
  struct _TEB *v56; // rcx
  size_t v57; // rbx
  char *v58; // r13
  void *v60; // rsp
  ULONG v61; // eax
  _WORD *v62; // rbx
  unsigned __int16 v63; // di
  _DWORD *v64; // rdx
  void *v65; // rbx
  char v66; // [rsp+0h] [rbp-810h] BYREF
  unsigned __int16 v67; // [rsp+810h] [rbp+0h]
  int v68; // [rsp+814h] [rbp+4h]
  char v69; // [rsp+818h] [rbp+8h]
  char v70; // [rsp+819h] [rbp+9h]
  unsigned __int16 v71; // [rsp+81Ch] [rbp+Ch] BYREF
  unsigned __int16 v72; // [rsp+820h] [rbp+10h]
  int v73; // [rsp+824h] [rbp+14h]
  ULONG ReturnLength; // [rsp+828h] [rbp+18h] BYREF
  _BYTE *v75; // [rsp+830h] [rbp+20h]
  int v76; // [rsp+838h] [rbp+28h]
  unsigned int v77; // [rsp+83Ch] [rbp+2Ch]
  ULONG v78; // [rsp+840h] [rbp+30h]
  unsigned int v79; // [rsp+844h] [rbp+34h] BYREF
  int v80; // [rsp+848h] [rbp+38h]
  unsigned __int16 *v81; // [rsp+850h] [rbp+40h] BYREF
  void *v82; // [rsp+858h] [rbp+48h] BYREF
  __int64 v83; // [rsp+860h] [rbp+50h]
  void *v84; // [rsp+868h] [rbp+58h]
  __int64 v85; // [rsp+870h] [rbp+60h]
  __int64 v86; // [rsp+878h] [rbp+68h]
  unsigned __int64 v87; // [rsp+880h] [rbp+70h] BYREF
  unsigned int v88; // [rsp+888h] [rbp+78h]
  void *Src; // [rsp+890h] [rbp+80h]
  __int64 v90; // [rsp+8A0h] [rbp+90h]
  _DWORD *v91; // [rsp+8B0h] [rbp+A0h]
  _OWORD *v92; // [rsp+8B8h] [rbp+A8h]
  char TokenInformation[16]; // [rsp+8D0h] [rbp+C0h] BYREF
  char v94[80]; // [rsp+8E0h] [rbp+D0h] BYREF

  v11 = a2;
  v12 = a1;
  v75 = a1;
  v13 = a7;
  v92 = a7;
  v81 = (unsigned __int16 *)a7;
  v84 = a1;
  v85 = a9;
  v90 = a10;
  v14 = 0;
  v82 = 0LL;
  v71 = 0;
  v72 = 0;
  Src = 0LL;
  v91 = (_DWORD *)(a10 + 128);
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (a1[232] & 4) != 0 )
  {
    if ( (unsigned __int8)EtwpCheckForEnoughStackSpace(4LL, a1, v11) )
    {
      v60 = alloca(2064LL);
      v82 = &v66;
      EtwpGetStackExtendedHeaderItem(&v82, &v71);
    }
    v11 = a2;
    v12 = v75;
  }
  v15 = 0;
  v77 = 0;
  v16 = 0LL;
  v86 = 0LL;
  v17 = a4;
  v73 = a4;
  while ( 1 )
  {
    v83 = 0LL;
    v81 = 0LL;
    v18 = 0LL;
    v68 = 80;
    v69 = 0;
    v70 = 0;
    LOWORD(v78) = 0;
    ReturnLength = 0;
    v67 = 0;
    v76 = 0;
    v84 = 0LL;
    v19 = 3 * v16;
    if ( !_bittest(&v17, v15) )
    {
      v20 = *((_QWORD *)v11 + 1);
      if ( v12[24 * v16 + 140] )
        break;
    }
LABEL_6:
    v77 = ++v15;
    v86 = ++v16;
    if ( v15 >= 4 )
      return v14;
    v12 = v75;
    v11 = a2;
    v13 = v92;
  }
  v21 = v12[24 * v16 + 141];
  if ( *((_BYTE *)v11 + 4) > v21 && v21
    || ((v12[24 * v16 + 136] & 0x40) == 0 || v20)
    && ((v20 & *(_QWORD *)&v12[24 * v16 + 128]) == 0
     || (v20 & *(_QWORD *)&v12[24 * v16 + 120]) != *(_QWORD *)&v12[24 * v16 + 120]) )
  {
LABEL_60:
    v17 = v73;
    goto LABEL_6;
  }
  v22 = (unsigned __int8)v12[24 * v16 + 142];
  v88 = v22;
  v79 = v22;
  if ( !EtwpLoggerArray )
    goto LABEL_81;
  if ( (unsigned int)v22 < 0x40 )
  {
LABEL_15:
    v23 = 2LL * v79;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v79 + 8), 1u);
    v83 = *(_QWORD *)(EtwpLoggerArray + 8 * v23);
    if ( (v83 & 1) == 0 )
    {
      v14 = 0;
      v80 = 0;
      goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v79 + 8));
LABEL_81:
    v14 = 4201;
    goto LABEL_60;
  }
  v14 = EtwpDemuxUmTraceHandle((unsigned int)v22, &v79);
  v80 = v14;
  if ( !v14 )
  {
    v15 = v77;
    v16 = v86;
    goto LABEL_15;
  }
LABEL_17:
  if ( v14 )
  {
LABEL_59:
    v16 = v86;
    v15 = v77;
    goto LABEL_60;
  }
  v24 = v13 != 0LL ? 104 : 80;
  v25 = v24;
  v26 = v75;
  if ( (v75[8 * v19 + 136] & 1) != 0 )
  {
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength) >= 0 )
    {
      v61 = ReturnLength - 16;
      ReturnLength = v61;
      LOWORD(v61) = (v61 + 15) & 0xFFF8;
      v78 = v61;
      v69 = 1;
      v25 = v24 + (unsigned __int16)v61;
    }
    v26 = v75;
  }
  v27 = *(_DWORD *)&v26[8 * v19 + 136];
  if ( (v27 & 4) != 0 && v82 )
  {
    v70 = 1;
    v25 += v71;
    v26 = v75;
  }
  v28 = v27 & 2;
  v29 = v25 + 16;
  if ( !v28 )
    v29 = v25;
  v30 = v90 + 32LL * (unsigned int)*v91;
  v31 = 0;
  if ( a8 )
  {
    v32 = *((_WORD *)v26 + 43) & 0x4000;
    while ( 1 )
    {
      v33 = v29;
      v34 = v32 ? *(_BYTE *)(v85 + 16LL * v31 + 12) : 0;
      if ( v34 )
      {
        if ( v34 == 1 )
        {
          v67 += *(_WORD *)(v85 + 16LL * v31 + 8);
          ++v76;
        }
        else if ( v34 == 2 )
        {
          Src = *(void **)(v85 + 16LL * v31);
          v72 = *(_WORD *)(v85 + 16LL * v31 + 8);
          v29 += (v72 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v29 += *(_DWORD *)(v85 + 16LL * v31 + 8);
      }
      if ( v29 < v33 )
        break;
      if ( ++v31 >= a8 )
        goto LABEL_30;
    }
    v14 = 534;
    v80 = 534;
  }
LABEL_30:
  if ( v76 )
    v29 += (v67 + 15) & 0xFFFFFFF8;
  if ( v14 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v22 + 8));
    return v14;
  }
  *(_DWORD *)(v30 + 24) = v29;
  v35 = EtwpReserveTraceBuffer(v83, v29, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &v87, &v81);
  v36 = v35;
  if ( v35 )
  {
    *(_QWORD *)v30 = v83;
    *(_QWORD *)(v30 + 8) = v35;
    *(_QWORD *)(v30 + 16) = v81;
    ++*v91;
    *(_DWORD *)v35 = v29 | 0xC0130000;
    *(_WORD *)(v35 + 4) = a5;
    *(_WORD *)(v35 + 6) = a3;
    *(_OWORD *)(v35 + 24) = *((_OWORD *)v75 + 2);
    *(_OWORD *)(v35 + 40) = *a2;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(_GUID *)(v35 + 64) = ActivityId;
    if ( a7 )
    {
      v18 = (_WORD *)(v35 + 80);
      *(_DWORD *)(v35 + 80) = 65560;
      *(_DWORD *)(v35 + 84) = 0x100000;
      *(_OWORD *)(v35 + 88) = *a7;
      *(_WORD *)(v35 + 4) |= 1u;
      v38 = 104;
      v68 = 104;
    }
    else
    {
      v38 = v68;
    }
    if ( v69 == 1 )
    {
      v62 = (_WORD *)(v35 + v38);
      v63 = v78;
      *v62 = v78;
      v62[1] = 2;
      v62[3] = ReturnLength;
      v62[2] = 0;
      memmove(v62 + 4, v94, ReturnLength);
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = v63 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v62;
    }
    if ( v28 )
    {
      v64 = (_DWORD *)(v36 + v38);
      *v64 = 196624;
      v64[1] = 0x40000;
      v64[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v36 + 4) |= 1u;
      v38 += 16;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v64;
    }
    if ( v70 == 1 )
    {
      v65 = (void *)(v36 + v38);
      memmove(v65, v82, v71);
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = v71 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v65;
    }
    v39 = Src;
    if ( Src )
    {
      v40 = (unsigned __int16 *)(v36 + v38);
      v81 = v40;
      v41 = v72;
      v42 = (v72 + 15) & 0xFFF8;
      *v40 = v42;
      *(_DWORD *)(v40 + 1) = 12;
      v40[3] = v41;
      v43 = v40 + 4;
      v44 = v41;
      memmove(v40 + 4, v39, v41);
      memset_thunk_772440563353939046((char *)v43 + v44, 0, (unsigned __int16)(v42 - v72 - 8));
      *(_WORD *)(v36 + 4) |= 1u;
      v45 = v81;
      v38 = *v81 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v45;
    }
    if ( v76 )
    {
      v46 = (unsigned __int16 *)(v36 + v38);
      v47 = v67;
      v48 = (v67 + 15) & 0xFFF8;
      *v46 = v48;
      *(_DWORD *)(v46 + 1) = 11;
      v46[3] = v47;
      v84 = v46 + 4;
      memset_thunk_772440563353939046((char *)v46 + v47 + 8, 0, (unsigned __int16)(v48 - v47 - 8));
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = *v46 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
    }
    if ( a8 )
    {
      v49 = (char *)(v85 + 12);
      v50 = a8;
      v51 = v75;
      do
      {
        v52 = *((unsigned int *)v49 - 1);
        v53 = *(unsigned __int64 **)(v49 - 12);
        v54 = 0;
        if ( (*((_WORD *)v51 + 43) & 0x4000) != 0 )
          v54 = *v49;
        if ( v54 )
        {
          if ( v54 == 1 )
          {
            v57 = *((unsigned int *)v49 - 1);
            v58 = (char *)v84;
            memmove(v84, *(const void **)(v49 - 12), v57);
            v84 = &v58[v57];
          }
          else if ( v54 == 3 && (_DWORD)v52 == 8 )
          {
            v87 = *v53;
          }
        }
        else
        {
          v68 = v52 + v38;
          memmove((void *)(v36 + v38), v53, v52);
        }
        v49 += 16;
        --v50;
        v38 = v68;
      }
      while ( v50 );
      v14 = v80;
    }
    v55 = v87;
    *(_QWORD *)(v36 + 16) = v87;
    if ( *(_DWORD *)(v83 + 16) != 3 )
      v55 = __rdtsc();
    *(_QWORD *)(v36 + 56) = v55;
    v56 = NtCurrentTeb();
    *(_DWORD *)(v36 + 8) = v56->ClientId.UniqueThread;
    *(_DWORD *)(v36 + 12) = v56->ClientId.UniqueProcess;
    goto LABEL_59;
  }
  if ( v29 > 0xFFF8 )
    v14 = 534;
  else
    v14 = *(_DWORD *)(v83 + 196) < v29 ? 234 : 8;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v88 + 8));
  return v14;
}
