/*
 * XREFs of CrmSrvActivityStart @ 0x180008200
 * Callers:
 *     CrmRpcSrvActivityStart @ 0x1800081D0 (CrmRpcSrvActivityStart.c)
 *     CrmpInProcActivityStart @ 0x18004AE50 (CrmpInProcActivityStart.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityCleanup @ 0x18002CF70 (CrmActivityCleanup.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D5BC (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall CrmSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int64 v8; // r13
  char *v10; // rsi
  char *v11; // r13
  bool v12; // zf
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // r13d
  __int64 v16; // r8
  void *v17; // r8
  void *v18; // r8
  __int64 v19; // rbx
  SIZE_T v20; // rbx
  _WORD *Heap; // rax
  _WORD *v22; // r9
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  _WORD *v25; // rcx
  __int64 v26; // r8
  __int16 v27; // ax
  __int64 v28; // rbx
  SIZE_T v29; // rbx
  _WORD *v30; // rax
  _WORD *v31; // r8
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  __int16 v35; // cx
  unsigned int v36; // ebx
  signed __int64 v37; // r14
  bool v38; // cc
  signed __int64 v39; // r14
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
  _DWORD v96[44]; // [rsp+1F0h] [rbp+F0h] BYREF

  v51 = a2;
  v6 = a2;
  v54 = a1;
  v46 = 1303;
  v53 = -1LL;
  v45 = 0;
  v8 = -1LL;
  memset_0(v96, 0, 0xA8uLL);
  v56 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v58);
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v94 = &Uuid;
    v95 = 16LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE2BB, 0, 0, 3u, &v93);
  }
  RtlAcquireSRWLockShared(v6);
  v10 = *(char **)(v6 + 56);
  if ( v10 == (char *)(v6 + 56) )
    goto LABEL_64;
  while ( *((_QWORD *)v10 + 7) != a1 )
  {
    v10 = *(char **)v10;
    if ( v10 == (char *)(v6 + 56) )
      goto LABEL_64;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 2) <= 1 )
    __fastfail(0xEu);
  if ( !v10 )
  {
LABEL_64:
    v36 = -1073741811;
    RtlReleaseSRWLockShared(v6);
    goto LABEL_48;
  }
  RtlReleaseSRWLockShared(v6);
  v11 = v10 + 80;
  RtlAcquireSRWLockExclusive(v10 + 80);
  *((_DWORD *)v10 + 22) = GetCurrentThreadId();
  v12 = *((_DWORD *)v10 + 40) == 0;
  v46 = *((_DWORD *)v10 + 16);
  if ( v12 )
  {
    RtlQueryUnbiasedInterruptTime(v10 + 192);
    v13 = 0;
    *((_QWORD *)v10 + 26) = 0LL;
    *((_QWORD *)v10 + 25) = 0LL;
    *((_QWORD *)v10 + 27) = MEMORY[0x7FFE0008];
  }
  else
  {
    v13 = 0;
  }
  ++*((_DWORD *)v10 + 40);
  v14 = *((_DWORD *)v10 + 46);
  if ( v14 == 3 || v14 < a5 )
    *((_DWORD *)v10 + 46) = a5;
  if ( *((_DWORD *)v10 + 27) )
  {
    v15 = v45;
    do
    {
      v16 = *((_QWORD *)v10 + 14) + 56LL * v13;
      if ( !*(_DWORD *)(v16 + 48) )
      {
        v41 = v15++;
        v96[v41] = *(_DWORD *)(v16 + 32);
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)v10 + 27) );
    v45 = v15;
    v11 = v10 + 80;
  }
  v17 = (void *)*((_QWORD *)v10 + 28);
  v53 = *((_QWORD *)v10 + 22);
  v52 = *((_QWORD *)v10 + 21);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  v18 = (void *)*((_QWORD *)v10 + 29);
  if ( v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  v19 = -1LL;
  do
    v12 = *(_WORD *)(a3 + 2 * v19++ + 2) == 0;
  while ( !v12 );
  v20 = 2 * v19 + 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
  v22 = Heap;
  if ( Heap )
  {
    v23 = v20 >> 1;
    if ( v23 )
    {
      if ( v23 > 0x7FFFFFFF )
      {
        *Heap = 0;
      }
      else
      {
        v24 = 2147483646 - v23;
        v25 = Heap;
        v26 = a3 - (_QWORD)Heap;
        while ( v24 + v23 )
        {
          v27 = *(_WORD *)((char *)v25 + v26);
          if ( !v27 )
            break;
          *v25++ = v27;
          if ( !--v23 )
          {
            --v25;
            break;
          }
        }
        *v25 = 0;
      }
    }
  }
  else
  {
    v22 = 0LL;
  }
  *((_QWORD *)v10 + 28) = v22;
  v28 = -1LL;
  do
    v12 = *(_WORD *)(a4 + 2 * v28++ + 2) == 0;
  while ( !v12 );
  v29 = 2 * v28 + 2;
  v30 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
  v31 = v30;
  if ( v30 )
  {
    v32 = v29 >> 1;
    if ( v32 )
    {
      if ( v32 > 0x7FFFFFFF )
      {
        LODWORD(v30) = 0;
        *v31 = 0;
        goto LABEL_46;
      }
      v33 = 2147483646 - v32;
      v34 = a4 - (_QWORD)v30;
      while ( v33 + v32 )
      {
        v35 = *(_WORD *)((char *)v30 + v34);
        if ( !v35 )
          break;
        *v30++ = v35;
        if ( !--v32 )
        {
          --v30;
          break;
        }
      }
      *v30 = 0;
    }
    LODWORD(v30) = 0;
  }
  else
  {
    v31 = 0LL;
  }
LABEL_46:
  *((_QWORD *)v10 + 29) = v31;
  *((_DWORD *)v11 + 2) = (_DWORD)v30;
  v36 = (unsigned int)v30;
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
LABEL_48:
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
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
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE186, 0, 0, 0x11u, &v62);
  }
  return v36;
}
