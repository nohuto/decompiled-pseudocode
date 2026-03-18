/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C0002A40
 * Callers:
 *     ProcessCompletionQueues @ 0x1C00035A0 (ProcessCompletionQueues.c)
 *     NVMeIoPollingDpcRoutine @ 0x1C001FBF0 (NVMeIoPollingDpcRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     NVMeControllerReclaimLocalCommand @ 0x1C00045C0 (NVMeControllerReclaimLocalCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C00049B0 (_guard_dispatch_icall_nop.c)
 *     GetLocalCommand @ 0x1C0009DC0 (GetLocalCommand.c)
 *     IsNVMeControllerOnFatalError @ 0x1C000C17C (IsNVMeControllerOnFatalError.c)
 *     NVMeControllerAsyncReset @ 0x1C000CBE0 (NVMeControllerAsyncReset.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     NVMeQueueWorkItem @ 0x1C0016D68 (NVMeQueueWorkItem.c)
 *     NVMeMapError @ 0x1C00208AC (NVMeMapError.c)
 *     RecordCommandTimingHistory @ 0x1C0025AFC (RecordCommandTimingHistory.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // r12
  unsigned __int16 v6; // dx
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r10
  __int16 v11; // di
  __int64 result; // rax
  unsigned __int16 v13; // bp
  _DWORD *v14; // rsi
  volatile signed __int16 *v15; // r14
  __int64 v16; // r9
  __int64 *v17; // r8
  _WORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbp
  char v22; // dl
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int8 v26; // cl
  __int16 v27; // ax
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r9d
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // r14
  unsigned __int64 v36; // r11
  unsigned __int8 v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // rcx
  const wchar_t *v42; // rax
  void (__fastcall *v43)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 LocalCommand; // rax
  __int64 v48; // rdi
  volatile signed __int16 *v49; // rax
  __int16 v50; // dx
  __int64 v51; // r12
  bool v52; // zf
  bool v53; // dl
  __int128 v54; // xmm0
  int v55; // ecx
  unsigned __int64 v56; // rax
  signed __int32 v57[8]; // [rsp+0h] [rbp-168h] BYREF
  int v58; // [rsp+20h] [rbp-148h]
  const wchar_t *v59; // [rsp+28h] [rbp-140h]
  __int64 v60; // [rsp+30h] [rbp-138h]
  int v61; // [rsp+38h] [rbp-130h]
  int v62; // [rsp+40h] [rbp-128h]
  __int64 v63; // [rsp+48h] [rbp-120h]
  const wchar_t *v64; // [rsp+50h] [rbp-118h]
  __int64 v65; // [rsp+58h] [rbp-110h]
  const wchar_t *v66; // [rsp+60h] [rbp-108h]
  __int64 v67; // [rsp+68h] [rbp-100h]
  const wchar_t *v68; // [rsp+70h] [rbp-F8h]
  __int64 v69; // [rsp+78h] [rbp-F0h]
  const wchar_t *v70; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v71; // [rsp+88h] [rbp-E0h]
  const wchar_t *v72; // [rsp+90h] [rbp-D8h]
  __int64 v73; // [rsp+98h] [rbp-D0h]
  const wchar_t *v74; // [rsp+A0h] [rbp-C8h]
  __int64 v75; // [rsp+A8h] [rbp-C0h]
  __int64 v76; // [rsp+B0h] [rbp-B8h]
  __int64 v77; // [rsp+B8h] [rbp-B0h]
  __int64 v78; // [rsp+C0h] [rbp-A8h]
  __int64 v79; // [rsp+C8h] [rbp-A0h]
  __int16 v80; // [rsp+D0h] [rbp-98h]
  char v81; // [rsp+D2h] [rbp-96h]
  bool v82; // [rsp+D3h] [rbp-95h]
  _BYTE v83[4]; // [rsp+D4h] [rbp-94h] BYREF
  int v84; // [rsp+D8h] [rbp-90h]
  unsigned __int16 v85; // [rsp+DCh] [rbp-8Ch]
  unsigned __int64 v86; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v87; // [rsp+E8h] [rbp-80h]
  __int64 v88; // [rsp+F0h] [rbp-78h]
  _DWORD *v89; // [rsp+F8h] [rbp-70h]
  volatile signed __int16 *v90; // [rsp+100h] [rbp-68h]
  __int128 v91; // [rsp+108h] [rbp-60h] BYREF
  int v92; // [rsp+118h] [rbp-50h]

  LOBYTE(a1) = 1;
  v5 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v6 = 0;
  v80 = 0;
  v87 = 0LL;
  v86 = 0LL;
  v88 = 0LL;
  v84 = a1;
  v81 = 0;
  v82 = 0;
  if ( a4 )
  {
    v81 = a4 & 1;
    v82 = (a4 & 2) != 0;
  }
  if ( *(_BYTE *)(a2 + 21) || (*(_DWORD *)(a2 + 116) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v86);
    LOBYTE(a1) = v84;
    v6 = v80;
  }
  if ( (*((_WORD *)v5 + 7) & 1) != *(_WORD *)(a3 + 172) )
  {
    while ( (_BYTE)a1 )
    {
      v8 = *(unsigned __int16 *)(a3 + 168);
      v9 = *((unsigned __int16 *)v5 + 5);
      v10 = *((unsigned __int16 *)v5 + 6);
      v11 = *((_WORD *)v5 + 4);
      if ( (_WORD)v8 )
      {
        result = *(unsigned int *)(a2 + 32);
        if ( (result & 1) == 0 )
          goto LABEL_112;
      }
      if ( (_WORD)v9 )
      {
        result = *(unsigned int *)(a2 + 32);
        if ( (result & 1) == 0 )
          goto LABEL_112;
        v19 = *(_QWORD *)(a2 + 872);
        v16 = *((unsigned __int16 *)v5 + 5);
        v13 = *(_WORD *)(a2 + 334);
        v20 = 136 * v9;
        v14 = (_DWORD *)(v20 + v19 - 4);
        v15 = (volatile signed __int16 *)(v20 + v19 - 8);
        v17 = (__int64 *)(v20 + v19 - 104);
        v18 = (_WORD *)(v20 + v19 - 90);
      }
      else
      {
        v13 = *(_WORD *)(a2 + 332);
        v14 = (_DWORD *)(a2 + 476);
        v15 = (volatile signed __int16 *)(a2 + 472);
        v16 = *((unsigned __int16 *)v5 + 5);
        v17 = (__int64 *)(a2 + 376);
        v18 = (_WORD *)(a2 + 390);
      }
      v90 = v15;
      v89 = v14;
      v85 = v13;
      if ( (unsigned __int16)v10 >= v13 )
      {
        if ( *(_BYTE *)(a2 + 22) )
        {
          v56 = *((unsigned __int16 *)v5 + 7);
          v79 = 0LL;
          v78 = 0LL;
          v77 = 0LL;
          v76 = 0LL;
          v75 = 0LL;
          v74 = 0LL;
          v73 = (v56 >> 9) & 7;
          v72 = L"Status.SCT";
          v71 = (unsigned __int8)(v56 >> 1);
          v70 = L"Status.SC";
          v69 = v8;
          v68 = L"CQId";
          v67 = v16;
          v66 = L"SQId";
          v65 = v10;
          v64 = L"CID";
          v63 = 0LL;
          v62 = 0;
          v61 = 2;
          v60 = 1LL;
          v59 = L"NVMe Invalid Command Id";
          v58 = 6;
          StorPortExtendedFunction(87LL, a2, 0LL);
        }
        result = IsNVMeControllerOnFatalError(a2);
        if ( (_BYTE)result )
        {
          if ( *(_QWORD *)(a2 + 4216) )
            result = NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem);
          else
            result = NVMeControllerAsyncReset(
                       a2,
                       0LL,
                       0LL,
                       0LL,
                       v58,
                       v59,
                       v60,
                       v61,
                       v62,
                       v63,
                       v64,
                       v65,
                       v66,
                       v67,
                       v68,
                       v69,
                       v70,
                       v71,
                       v72,
                       v73,
                       v74,
                       v75,
                       v76,
                       v77,
                       v78,
                       v79);
        }
        goto LABEL_112;
      }
      result = *v17;
      v21 = _InterlockedExchange64((volatile __int64 *)(16 * v10 + *v17), 0LL);
      if ( !v21 )
        goto LABEL_112;
      *v18 = v11;
      v22 = *(_BYTE *)(v21 + 2);
      if ( v22 == 40 )
        v23 = *(_QWORD *)(v21 + 104);
      else
        v23 = *(_QWORD *)(v21 + 56);
      if ( (v23 & 0xFFF) != 0 )
        v23 = v23 - (v23 & 0xFFF) + 4096;
      v24 = *v17 + 16 * v10;
      if ( (*(_DWORD *)(v24 + 8) & 1) != 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v24 + 8), 0);
        ++*v14;
        _InterlockedDecrement16(v15);
      }
      else if ( v23 )
      {
        if ( v22 == 40 && *(_DWORD *)(v21 + 20) == 10 )
        {
          v25 = v21 + *(unsigned int *)(v21 + 120);
          if ( v25 )
          {
            *(_DWORD *)(v25 + 84) = *v5;
            *(_WORD *)(v25 + 74) = *((_WORD *)v5 + 7);
          }
        }
        if ( *(_BYTE *)(v21 + 2) == 40 )
          v26 = *(_BYTE *)(*(unsigned int *)(v21 + 52) + v21 + 10);
        else
          v26 = *(_BYTE *)(v21 + 7);
        v27 = *((_WORD *)v5 + 7);
        v28 = v26;
        *(_WORD *)(v23 + 4250) = v27;
        if ( (v27 & 0xE00) != 0 || (v27 & 0x1FE) != 0 )
        {
          NVMeMapError(
            a2,
            v21,
            0LL,
            0LL,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78,
            v79);
          if ( *(_DWORD *)(a2 + 232) > (unsigned int)v28 )
          {
            v30 = *(_QWORD *)(a2 + 8 * v28 + 1952);
            if ( v30 )
              ++*(_DWORD *)(v30 + 32);
          }
          if ( (unsigned __int8)IsNVMeControllerOnFatalError(a2) )
          {
            if ( *(_QWORD *)(a2 + 4216) )
              NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem);
            else
              NVMeControllerAsyncReset(
                a2,
                0LL,
                0LL,
                0LL,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76,
                v77,
                v78,
                v79);
          }
        }
        else
        {
          *(_BYTE *)(v21 + 3) = 1;
          if ( *(_DWORD *)(a2 + 232) > (unsigned int)v26 )
          {
            v29 = *(_QWORD *)(a2 + 8LL * v26 + 1952);
            if ( v29 )
              ++*(_QWORD *)(v29 + 24);
          }
        }
        if ( *(_BYTE *)(v21 + 2) == 40 )
          v31 = *(_QWORD *)(v21 + 104);
        else
          v31 = *(_QWORD *)(v21 + 56);
        if ( (v31 & 0xFFF) != 0 )
          v31 = v31 - (v31 & 0xFFF) + 4096;
        v32 = *(_DWORD *)(v31 + 4100);
        if ( v32 == -1 || (v33 = *(_DWORD *)(a2 + 232), v34 = 0, !v33) )
        {
LABEL_53:
          v35 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v35 = *(_QWORD *)(a2 + 8LL * v34 + 1952);
            if ( v35 )
            {
              if ( *(_DWORD *)(v35 + 16) == v32 )
                break;
            }
            if ( ++v34 >= v33 )
              goto LABEL_53;
          }
        }
        if ( *(_BYTE *)(a2 + 24) )
        {
          v36 = *((unsigned __int16 *)v5 + 7);
          v37 = *(_BYTE *)(v31 + 4253) & 1;
          v38 = v5[2];
          v39 = *v5;
          v40 = *((unsigned __int16 *)v5 + 6);
          v41 = v37;
          v42 = L"Admin Command Completion";
          if ( !(_BYTE)v41 )
            v42 = L"NVM Command Completion";
          v79 = 0LL;
          v78 = 0LL;
          v77 = 0LL;
          v76 = 0LL;
          v75 = v38;
          v74 = L"DW2";
          v73 = v39;
          v72 = L"DW0";
          v71 = v36;
          v70 = L"Complete Status";
          v69 = (v36 >> 9) & 7;
          v68 = L"Status.SCT";
          v67 = (unsigned __int8)(v36 >> 1);
          v66 = L"Status.SC";
          v65 = v40;
          v64 = L"CID";
          v63 = v21;
          v62 = 0;
          v61 = 4;
          v60 = ((v41 + 1) << 7) | 0x10;
          v59 = v42;
          v58 = 4;
          StorPortExtendedFunction(87LL, a2, v35);
        }
        v43 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v23 + 4224);
        if ( v43 )
          v43(a2, v21, v5);
        else
          *(_BYTE *)(v23 + 4253) |= 8u;
        if ( *(_QWORD *)(v23 + 4160) )
        {
          v44 = 0LL;
          StorPortExtendedFunction(47LL, a2, &v86);
          if ( *(_BYTE *)(a2 + 21) )
          {
            v45 = *(_QWORD *)(v23 + 4160);
            if ( v87 >= v45 && v86 )
              v44 = 10000 * (1000 * ((v87 - v45) % v86) % v86) / v86
                  + 10000 * (1000 * ((v87 - v45) / v86) + 1000 * ((v87 - v45) % v86) / v86);
            StorPortNotification(4102LL, a2, v44);
          }
          if ( (*(_DWORD *)(a2 + 116) & 2) != 0 )
          {
            *(_QWORD *)(v23 + 4184) = v88;
            *(_QWORD *)(v23 + 4192) = v87;
            RecordCommandTimingHistory(a2, v21, v86);
          }
        }
        if ( (*(_BYTE *)(v23 + 4253) & 8) != 0 )
        {
          if ( *(_DWORD *)(v21 + 12) != 251658240 && v21 != a2 + 952 )
          {
            v46 = 0;
            while ( v21 != a2 + ((unsigned __int64)v46 << 7) + 1080 )
            {
              if ( ++v46 >= 6 )
              {
                if ( v81 )
                  StorPortNotification(4104LL, a2, v21);
                else
                  StorPortNotification(0LL, a2, v21);
                goto LABEL_83;
              }
            }
          }
          LocalCommand = GetLocalCommand(a2, v21);
          v48 = LocalCommand;
          if ( LocalCommand )
          {
            *(_BYTE *)LocalCommand = 0;
            if ( *(_DWORD *)(v21 + 12) == 251658240 )
            {
              if ( (*(_BYTE *)(LocalCommand + 1) & 1) != 0 )
              {
                NVMeControllerReclaimLocalCommand(a2, LocalCommand);
              }
              else
              {
                NVMeFreeDmaBuffer(a2, 0x2000LL, v21 + 56, *(_QWORD *)(LocalCommand + 104));
                StorPortExtendedFunction(1LL, a2, v48);
              }
            }
          }
        }
LABEL_83:
        v49 = v90;
        ++*v89;
        _InterlockedDecrement16(v49);
      }
      a1 = *(unsigned __int16 *)(a3 + 170);
      if ( a1 >= v85 - 1 )
      {
        LOWORD(a1) = 0;
        *(_WORD *)(a3 + 172) = *(_WORD *)(a3 + 172) != 1;
      }
      else
      {
        LOWORD(a1) = a1 + 1;
      }
      v50 = v80;
      *(_WORD *)(a3 + 170) = a1;
      v6 = v50 + 1;
      v51 = (unsigned __int16)a1;
      LOBYTE(a1) = v84;
      v5 = (unsigned int *)(*(_QWORD *)a3 + 16 * v51);
      v52 = *(_BYTE *)(a3 + 248) == 0;
      v80 = v6;
      if ( !v52 )
      {
        a1 = (unsigned __int8)v84;
        if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 80) )
          a1 = 0;
        v84 = a1;
      }
      if ( (_BYTE)a1 )
      {
        if ( !v82 )
        {
          v83[0] = 0;
          StorPortExtendedFunction(109LL, a2, v83);
          if ( v83[0] != 2 )
            goto LABEL_101;
        }
        v92 = 0;
        v91 = 0LL;
        if ( (unsigned int)StorPortExtendedFunction(106LL, a2, &v91) )
          goto LABEL_101;
        v53 = 1;
        if ( DWORD2(v91) )
        {
          a1 = 100 * HIDWORD(v91);
          v53 = 100 * HIDWORD(v91) >= (unsigned int)(5 * DWORD2(v91));
        }
        if ( (_DWORD)v91 && (a1 = 100 * DWORD1(v91), 100 * DWORD1(v91) < (unsigned int)(5 * v91)) || !v53 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 4288));
          LOBYTE(a1) = 0;
          v84 = a1;
        }
        else
        {
LABEL_101:
          LOBYTE(a1) = v84;
        }
        v6 = v80;
      }
      if ( (*((_WORD *)v5 + 7) & 1) == *(_WORD *)(a3 + 172) )
        break;
    }
  }
  result = *(unsigned __int16 *)(a3 + 170);
  *(_WORD *)(a3 + 356) = result;
  v54 = *(_OWORD *)v5;
  *(_WORD *)(a3 + 352) = v6;
  *(_OWORD *)(a3 + 376) = v54;
  if ( v6 )
  {
    v55 = result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v55;
    _InterlockedOr(v57, 0);
  }
LABEL_112:
  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 16) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 184);
      *(_DWORD *)(result + 16) = 1 << *(_WORD *)(a3 + 176);
      _InterlockedOr(v57, 0);
      *(_BYTE *)(a2 + 25) = 0;
    }
  }
  return result;
}
