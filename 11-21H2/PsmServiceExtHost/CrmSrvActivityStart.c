/*
 * XREFs of CrmSrvActivityStart @ 0x180033A50
 * Callers:
 *     CrmRpcSrvActivityStart @ 0x180033A20 (CrmRpcSrvActivityStart.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D9FC (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall CrmSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int64 v8; // r13
  char *v10; // rsi
  char *v11; // r13
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // r13d
  __int64 v16; // r8
  void *v17; // r8
  void *v18; // r8
  __int64 v19; // rbx
  bool v20; // zf
  SIZE_T v21; // rbx
  _WORD *Heap; // r9
  SIZE_T v23; // rbx
  SIZE_T v24; // rdx
  _WORD *v25; // rax
  __int16 v26; // cx
  __int64 v27; // rbx
  SIZE_T v28; // rbx
  _WORD *v29; // rax
  _WORD *v30; // r8
  SIZE_T v31; // rbx
  SIZE_T v32; // rdi
  __int64 v33; // rdx
  _WORD *v34; // rcx
  __int16 v35; // ax
  unsigned int v36; // ebx
  signed __int64 v37; // r12
  bool v38; // cc
  signed __int64 v39; // r12
  __int64 v41; // rcx
  int v42; // eax
  int v43; // r10d
  __int16 v44; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-CCh]
  int v46; // [rsp+38h] [rbp-C8h]
  int v47; // [rsp+3Ch] [rbp-C4h] BYREF
  int v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+B0h] [rbp-50h] BYREF
  UUID *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  __int64 v67; // [rsp+F0h] [rbp-10h]
  int v68; // [rsp+F8h] [rbp-8h]
  int v69; // [rsp+FCh] [rbp-4h]
  int *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  char v74[16]; // [rsp+120h] [rbp+20h] BYREF
  char v75[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  __int16 *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  _DWORD *v80; // [rsp+160h] [rbp+60h]
  int v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  __int64 *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  __int64 *v87; // [rsp+190h] [rbp+90h]
  __int64 v88; // [rsp+198h] [rbp+98h]
  __int64 *v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+1C0h] [rbp+C0h] BYREF
  UUID *v94; // [rsp+1E0h] [rbp+E0h]
  __int64 v95; // [rsp+1E8h] [rbp+E8h]
  _DWORD v96[40]; // [rsp+1F0h] [rbp+F0h] BYREF

  v51 = a2;
  v6 = a2;
  v54 = a1;
  v46 = 1101;
  v53 = -1LL;
  v45 = 0;
  v8 = -1LL;
  memset_0(v96, 0, sizeof(v96));
  v56 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v58);
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 && (qword_1800DC268 & 1) == qword_1800DC268 )
  {
    v94 = &Uuid;
    v95 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BD3EB,
      0LL,
      0LL,
      3u,
      &v93);
  }
  RtlAcquireSRWLockShared(v6);
  v10 = *(char **)(v6 + 56);
  if ( v10 == (char *)(v6 + 56) )
    goto LABEL_67;
  while ( *((_QWORD *)v10 + 6) != a1 )
  {
    v10 = *(char **)v10;
    if ( v10 == (char *)(v6 + 56) )
      goto LABEL_67;
  }
  if ( !v10 )
  {
LABEL_67:
    v36 = -1073741811;
    RtlReleaseSRWLockShared(v6);
  }
  else
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 2) <= 1 )
      __fastfail(0xEu);
    RtlReleaseSRWLockShared(v6);
    v11 = v10 + 72;
    RtlAcquireSRWLockExclusive(v10 + 72);
    *((_DWORD *)v10 + 20) = GetCurrentThreadId();
    v46 = *((_DWORD *)v10 + 14);
    v12 = *((_DWORD *)v10 + 34);
    if ( v12 )
    {
      v13 = 0;
    }
    else
    {
      RtlQueryUnbiasedInterruptTime(v10 + 168);
      v13 = 0;
      *((_QWORD *)v10 + 23) = 0LL;
      *((_QWORD *)v10 + 22) = 0LL;
      *((_QWORD *)v10 + 24) = MEMORY[0x7FFE0008];
      v12 = *((_DWORD *)v10 + 34);
    }
    *((_DWORD *)v10 + 34) = v12 + 1;
    v14 = *((_DWORD *)v10 + 40);
    if ( v14 == 3 || v14 < a5 )
      *((_DWORD *)v10 + 40) = a5;
    if ( *((_DWORD *)v10 + 24) )
    {
      v15 = v45;
      do
      {
        v16 = *((_QWORD *)v10 + 13) + 56LL * v13;
        if ( !*(_DWORD *)(v16 + 48) )
        {
          v41 = v15++;
          v96[v41] = *(_DWORD *)(v16 + 32);
        }
        ++v13;
      }
      while ( v13 < *((_DWORD *)v10 + 24) );
      v45 = v15;
      v11 = v10 + 72;
    }
    v17 = (void *)*((_QWORD *)v10 + 25);
    v53 = *((_QWORD *)v10 + 19);
    v52 = *((_QWORD *)v10 + 18);
    if ( v17 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    v18 = (void *)*((_QWORD *)v10 + 26);
    if ( v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    v19 = -1LL;
    do
      v20 = *(_WORD *)(a3 + 2 * v19++ + 2) == 0;
    while ( !v20 );
    v21 = 2 * v19 + 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    if ( Heap )
    {
      v23 = v21 >> 1;
      if ( v23 - 1 > 0x7FFFFFFE )
      {
        if ( v23 )
          *Heap = 0;
      }
      else
      {
        v24 = 2147483646 - v23;
        v25 = Heap;
        while ( v24 + v23 )
        {
          v26 = *(_WORD *)((char *)v25 + a3 - (_QWORD)Heap);
          if ( !v26 )
          {
            if ( v23 )
              break;
LABEL_57:
            --v25;
            break;
          }
          *v25++ = v26;
          if ( !--v23 )
            goto LABEL_57;
        }
        *v25 = 0;
      }
    }
    else
    {
      Heap = 0LL;
    }
    *((_QWORD *)v10 + 25) = Heap;
    v27 = -1LL;
    do
      v20 = *(_WORD *)(a4 + 2 * v27++ + 2) == 0;
    while ( !v20 );
    v28 = 2 * v27 + 2;
    v29 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
    v30 = v29;
    if ( v29 )
    {
      v31 = v28 >> 1;
      if ( v31 - 1 > 0x7FFFFFFE )
      {
        LODWORD(v29) = 0;
        if ( v31 )
          *v30 = 0;
      }
      else
      {
        v32 = 2147483646 - v31;
        v33 = a4 - (_QWORD)v29;
        v34 = v29;
        while ( v32 + v31 )
        {
          v35 = *(_WORD *)((char *)v34 + v33);
          if ( !v35 )
          {
            if ( v31 )
              break;
LABEL_61:
            --v34;
            break;
          }
          *v34++ = v35;
          if ( !--v31 )
            goto LABEL_61;
        }
        LODWORD(v29) = 0;
        *v34 = 0;
      }
    }
    else
    {
      v30 = 0LL;
    }
    *((_QWORD *)v10 + 26) = v30;
    *((_DWORD *)v11 + 2) = (_DWORD)v29;
    v36 = (unsigned int)v29;
    RtlReleaseSRWLockExclusive(v11);
    v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 2, 0xFFFFFFFFFFFFFFFFuLL);
    v38 = v37 <= 1;
    v39 = v37 - 1;
    if ( v38 )
    {
      if ( v39 )
        __fastfail(0xEu);
      CrmActivityCleanup(v10);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
    v6 = v51;
    v8 = v52;
  }
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 && (qword_1800DC268 & 1) == qword_1800DC268 )
  {
    v64 = 16LL;
    v63 = &Uuid;
    v47 = *(_DWORD *)(v6 + 24);
    v66 = 4LL;
    v65 = &v47;
    v67 = v6 + 72;
    v42 = *(unsigned __int8 *)(v6 + 73);
    v69 = 0;
    v71 = 4LL;
    v73 = 8LL;
    v68 = 4 * v42 + 8;
    v48 = v46;
    v70 = &v48;
    v55 = v54;
    v72 = &v55;
    tlgCreate1Sz_wchar_t(v74, a3);
    tlgCreate1Sz_wchar_t(v75, a4);
    v49 = a5;
    v78 = &v44;
    v76 = &v49;
    v44 = v45;
    v81 = 4 * (unsigned __int16)v45;
    v57 = v56;
    v83 = &v57;
    v59 = v58;
    v85 = &v59;
    v60 = v53;
    v87 = &v60;
    v89 = &v61;
    v91 = &v50;
    v80 = v96;
    v77 = 4LL;
    v79 = 2LL;
    v82 = v43;
    v84 = 8LL;
    v86 = 8LL;
    v88 = 8LL;
    v61 = v8;
    v90 = 8LL;
    v50 = v36;
    v92 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BD2B6,
      0LL,
      0LL,
      0x11u,
      &v62);
  }
  return v36;
}
