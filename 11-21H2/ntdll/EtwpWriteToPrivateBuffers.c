/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x1800051BC
 * Callers:
 *     EtwEventWriteTransfer @ 0x180004F40 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x180006228 (EtwpEventWriteFull.c)
 *     EtwEventWriteString @ 0x180121D10 (EtwEventWriteString.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x180005850 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 *     EtwpCheckForEnoughStackSpace @ 0x1801223A4 (EtwpCheckForEnoughStackSpace.c)
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x180122578 (EtwpGetStackExtendedHeaderItem.c)
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
  _OWORD *v11; // r9
  _BYTE *v12; // r8
  _OWORD *v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  _WORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // ebx
  unsigned int v25; // edi
  int v26; // ecx
  unsigned int v27; // ebx
  __int64 v28; // rdi
  unsigned int v29; // r8d
  _BYTE *v30; // rsi
  __int16 v31; // r9
  unsigned int v32; // r10d
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r15
  _GUID ActivityId; // xmm0
  unsigned int v37; // r8d
  void *v38; // rcx
  unsigned __int16 *v39; // rax
  unsigned int v40; // edx
  unsigned __int16 v41; // si
  unsigned __int16 *v42; // rdi
  __int64 v43; // rbx
  unsigned __int16 *v44; // rcx
  unsigned __int16 *v45; // rbx
  __int64 v46; // rcx
  unsigned __int16 v47; // ax
  char *v48; // rdi
  __int64 v49; // rsi
  _BYTE *v50; // r12
  size_t v51; // rdx
  unsigned __int64 *v52; // r9
  char v53; // al
  unsigned __int64 v54; // rax
  struct _TEB *v55; // rcx
  size_t v57; // rbx
  char *v58; // r13
  void *v59; // rsp
  ULONG v60; // eax
  _WORD *v61; // rbx
  unsigned __int16 v62; // di
  _DWORD *v63; // rdx
  void *v64; // rbx
  char v65; // [rsp+0h] [rbp-810h] BYREF
  unsigned __int16 v66; // [rsp+810h] [rbp+0h]
  int v67; // [rsp+814h] [rbp+4h]
  char v68; // [rsp+818h] [rbp+8h]
  char v69; // [rsp+819h] [rbp+9h]
  unsigned __int16 v70; // [rsp+81Ch] [rbp+Ch] BYREF
  unsigned __int16 v71; // [rsp+820h] [rbp+10h]
  int v72; // [rsp+824h] [rbp+14h]
  ULONG ReturnLength; // [rsp+828h] [rbp+18h] BYREF
  int v74; // [rsp+82Ch] [rbp+1Ch]
  unsigned int v75; // [rsp+830h] [rbp+20h]
  ULONG v76; // [rsp+834h] [rbp+24h]
  _BYTE *v77; // [rsp+838h] [rbp+28h]
  int v78; // [rsp+840h] [rbp+30h]
  unsigned __int16 *v79; // [rsp+848h] [rbp+38h] BYREF
  unsigned int v80; // [rsp+850h] [rbp+40h] BYREF
  void *v81; // [rsp+858h] [rbp+48h] BYREF
  __int64 v82; // [rsp+860h] [rbp+50h]
  void *v83; // [rsp+868h] [rbp+58h]
  __int64 v84; // [rsp+870h] [rbp+60h]
  __int64 v85; // [rsp+878h] [rbp+68h]
  unsigned __int64 v86; // [rsp+880h] [rbp+70h] BYREF
  int v87; // [rsp+888h] [rbp+78h]
  unsigned int v88; // [rsp+88Ch] [rbp+7Ch]
  __int64 v89; // [rsp+890h] [rbp+80h]
  void *Src; // [rsp+8A0h] [rbp+90h]
  _OWORD *v91; // [rsp+8A8h] [rbp+98h]
  char TokenInformation[16]; // [rsp+8C0h] [rbp+B0h] BYREF
  char v93[80]; // [rsp+8D0h] [rbp+C0h] BYREF

  v11 = a2;
  v12 = a1;
  v77 = a1;
  v13 = a7;
  v91 = a7;
  v79 = (unsigned __int16 *)a7;
  v83 = a1;
  v84 = a9;
  v89 = a10;
  v14 = 0;
  v81 = 0LL;
  v70 = 0;
  v71 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (a1[240] & 4) != 0 )
  {
    if ( (unsigned __int8)EtwpCheckForEnoughStackSpace(4LL, a2, a1, a2) )
    {
      v59 = alloca(2064LL);
      v81 = &v65;
      EtwpGetStackExtendedHeaderItem(&v81, &v70);
    }
    v11 = a2;
    v12 = v77;
  }
  v15 = 0;
  v75 = 0;
  v16 = 0LL;
  v85 = 0LL;
  v17 = a4;
  v72 = a4;
  while ( 1 )
  {
    v82 = 0LL;
    v79 = 0LL;
    v18 = 0LL;
    v67 = 80;
    v68 = 0;
    v69 = 0;
    LOWORD(v76) = 0;
    ReturnLength = 0;
    v66 = 0;
    v74 = 0;
    v83 = 0LL;
    v19 = 3 * v16;
    if ( !_bittest(&v17, v15) )
    {
      v20 = *((_QWORD *)v11 + 1);
      if ( v12[24 * v16 + 148] )
        break;
    }
LABEL_6:
    v75 = ++v15;
    v85 = ++v16;
    if ( v15 >= 4 )
      return v14;
    v12 = v77;
    v11 = a2;
    v13 = v91;
  }
  v21 = v12[24 * v16 + 149];
  if ( *((_BYTE *)v11 + 4) > v21 && v21
    || ((v12[24 * v16 + 144] & 0x40) == 0 || v20)
    && ((v20 & *(_QWORD *)&v12[24 * v16 + 136]) == 0
     || (v20 & *(_QWORD *)&v12[24 * v16 + 128]) != *(_QWORD *)&v12[24 * v16 + 128]) )
  {
LABEL_60:
    v17 = v72;
    goto LABEL_6;
  }
  v22 = (unsigned __int8)v12[24 * v16 + 150];
  v88 = v22;
  v80 = v22;
  if ( !EtwpLoggerArray )
    goto LABEL_82;
  if ( (unsigned int)v22 < 0x40 )
  {
LABEL_15:
    v23 = 2LL * v80;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v80 + 8), 1u);
    v82 = *(_QWORD *)(EtwpLoggerArray + 8 * v23);
    if ( (v82 & 1) == 0 )
    {
      v14 = 0;
      v78 = 0;
      goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v23 + 8));
LABEL_82:
    v14 = 4201;
    goto LABEL_60;
  }
  v14 = EtwpDemuxUmTraceHandle((unsigned int)v22, &v80);
  v78 = v14;
  if ( !v14 )
  {
    v15 = v75;
    v16 = v85;
    goto LABEL_15;
  }
LABEL_17:
  if ( v14 )
  {
LABEL_59:
    v15 = v75;
    v16 = v85;
    goto LABEL_60;
  }
  v24 = v13 != 0LL ? 104 : 80;
  v25 = v24;
  if ( (v77[8 * v19 + 144] & 1) != 0
    && NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength) >= 0 )
  {
    v60 = ReturnLength - 16;
    ReturnLength = v60;
    LOWORD(v60) = (v60 + 15) & 0xFFF8;
    v76 = v60;
    v68 = 1;
    v25 = v24 + (unsigned __int16)v60;
  }
  v26 = *(_DWORD *)&v77[8 * v19 + 144];
  if ( (v26 & 4) != 0 && v81 )
  {
    v69 = 1;
    v25 += v70;
  }
  v87 = v26 & 2;
  v27 = v25 + 16;
  if ( (v26 & 2) == 0 )
    v27 = v25;
  v28 = v89 + 32LL * *(unsigned int *)(v89 + 128);
  v29 = 0;
  v30 = v77;
  if ( a8 )
  {
    v31 = *((_WORD *)v77 + 49) & 0x4000;
    while ( 1 )
    {
      v32 = v27;
      v33 = v31 ? *(_BYTE *)(v84 + 16LL * v29 + 12) : 0;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          v66 += *(_WORD *)(v84 + 16LL * v29 + 8);
          ++v74;
        }
        else if ( v33 == 2 )
        {
          Src = *(void **)(v84 + 16LL * v29);
          v71 = *(_WORD *)(v84 + 16LL * v29 + 8);
          v27 += (v71 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v27 += *(_DWORD *)(v84 + 16LL * v29 + 8);
      }
      if ( v27 < v32 )
        break;
      if ( ++v29 >= a8 )
        goto LABEL_30;
    }
    v14 = 534;
    v78 = 534;
  }
LABEL_30:
  if ( v74 )
    v27 += (v66 + 15) & 0xFFFFFFF8;
  if ( v14 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v22 + 8));
    return v14;
  }
  *(_DWORD *)(v28 + 24) = v27;
  v34 = EtwpReserveTraceBuffer(v82, v27, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &v86, &v79);
  v35 = v34;
  if ( v34 )
  {
    *(_QWORD *)v28 = v82;
    *(_QWORD *)(v28 + 8) = v34;
    *(_QWORD *)(v28 + 16) = v79;
    ++*(_DWORD *)(v89 + 128);
    *(_DWORD *)v34 = v27 | 0xC0130000;
    *(_WORD *)(v34 + 4) = a5;
    *(_WORD *)(v34 + 6) = a3;
    *(_OWORD *)(v34 + 24) = *((_OWORD *)v30 + 2);
    *(_OWORD *)(v34 + 40) = *a2;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(_GUID *)(v34 + 64) = ActivityId;
    if ( a7 )
    {
      v18 = (_WORD *)(v34 + 80);
      *(_DWORD *)(v34 + 80) = 65560;
      *(_DWORD *)(v34 + 84) = 0x100000;
      *(_OWORD *)(v34 + 88) = *a7;
      *(_WORD *)(v34 + 4) |= 1u;
      v37 = 104;
      v67 = 104;
    }
    else
    {
      v37 = v67;
    }
    if ( v68 == 1 )
    {
      v61 = (_WORD *)(v34 + v37);
      v62 = v76;
      *v61 = v76;
      v61[1] = 2;
      v61[3] = ReturnLength;
      v61[2] = 0;
      memmove(v61 + 4, v93, ReturnLength);
      *(_WORD *)(v35 + 4) |= 1u;
      v37 = v62 + v67;
      v67 = v37;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v61;
    }
    if ( v87 )
    {
      v63 = (_DWORD *)(v35 + v37);
      *v63 = 196624;
      v63[1] = 0x40000;
      v63[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v35 + 4) |= 1u;
      v37 += 16;
      v67 = v37;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v63;
    }
    if ( v69 == 1 )
    {
      v64 = (void *)(v35 + v37);
      memmove(v64, v81, v70);
      *(_WORD *)(v35 + 4) |= 1u;
      v37 = v70 + v67;
      v67 = v37;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v64;
    }
    v38 = Src;
    if ( Src )
    {
      v39 = (unsigned __int16 *)(v35 + v37);
      v79 = v39;
      v40 = v71;
      v41 = (v71 + 15) & 0xFFF8;
      *v39 = v41;
      *(_DWORD *)(v39 + 1) = 12;
      v39[3] = v40;
      v42 = v39 + 4;
      v43 = v40;
      memmove(v39 + 4, v38, v40);
      memset((char *)v42 + v43, 0, (unsigned __int16)(v41 - v71 - 8));
      *(_WORD *)(v35 + 4) |= 1u;
      v44 = v79;
      v37 = *v79 + v67;
      v67 = v37;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v44;
    }
    if ( v74 )
    {
      v45 = (unsigned __int16 *)(v35 + v37);
      v46 = v66;
      v47 = (v66 + 15) & 0xFFF8;
      *v45 = v47;
      *(_DWORD *)(v45 + 1) = 11;
      v45[3] = v46;
      v83 = v45 + 4;
      memset((char *)v45 + v46 + 8, 0, (unsigned __int16)(v47 - v46 - 8));
      *(_WORD *)(v35 + 4) |= 1u;
      v37 = *v45 + v67;
      v67 = v37;
      if ( v18 )
        v18[2] |= 1u;
    }
    if ( a8 )
    {
      v48 = (char *)(v84 + 12);
      v49 = a8;
      v50 = v77;
      do
      {
        v51 = *((unsigned int *)v48 - 1);
        v52 = *(unsigned __int64 **)(v48 - 12);
        v53 = 0;
        if ( (*((_WORD *)v50 + 49) & 0x4000) != 0 )
          v53 = *v48;
        if ( v53 )
        {
          if ( v53 == 1 )
          {
            v57 = *((unsigned int *)v48 - 1);
            v58 = (char *)v83;
            memmove(v83, *(const void **)(v48 - 12), v57);
            v83 = &v58[v57];
          }
          else if ( v53 == 3 && (_DWORD)v51 == 8 )
          {
            v86 = *v52;
          }
        }
        else
        {
          v67 = v51 + v37;
          memmove((void *)(v35 + v37), v52, v51);
        }
        v48 += 16;
        --v49;
        v37 = v67;
      }
      while ( v49 );
      v14 = v78;
    }
    v54 = v86;
    *(_QWORD *)(v35 + 16) = v86;
    if ( *(_DWORD *)(v82 + 16) != 3 )
      v54 = __rdtsc();
    *(_QWORD *)(v35 + 56) = v54;
    v55 = NtCurrentTeb();
    *(_DWORD *)(v35 + 8) = v55->ClientId.UniqueThread;
    *(_DWORD *)(v35 + 12) = v55->ClientId.UniqueProcess;
    goto LABEL_59;
  }
  if ( v27 > 0xFFF8 )
    v14 = 534;
  else
    v14 = *(_DWORD *)(v82 + 196) < v27 ? 234 : 8;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v88 + 8));
  return v14;
}
