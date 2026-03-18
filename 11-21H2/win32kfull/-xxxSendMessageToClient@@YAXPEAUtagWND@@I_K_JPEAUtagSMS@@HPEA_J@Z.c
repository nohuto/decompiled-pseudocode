/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00514D0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EA2F0 (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned int v9; // edi
  int v11; // ecx
  char v12; // bl
  __int64 v13; // r13
  BOOL v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rdx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  _QWORD *v33; // r15
  __int64 CurrentProcessWow64Process; // rax
  ULONG v35; // r8d
  signed __int32 v36[8]; // [rsp+0h] [rbp-B8h] BYREF
  BOOL v37; // [rsp+30h] [rbp-88h]
  struct tagSMS *v38; // [rsp+38h] [rbp-80h]
  char v39; // [rsp+50h] [rbp-68h]
  BOOL v40; // [rsp+54h] [rbp-64h]
  __int128 v41; // [rsp+60h] [rbp-58h] BYREF
  __int64 v42; // [rsp+70h] [rbp-48h]
  unsigned int v43; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+D8h] [rbp+20h] BYREF

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a2 - 577 <= 0x16 && (v11 = 8122367, _bittest(&v11, a2 - 577)) || a2 == 528 && (_WORD)a3 == 582 )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v43, &v44, &v45, 0LL) )
      {
        *a7 = 0LL;
        return;
      }
      v7 = v45;
      v8 = v44;
      v9 = v43;
    }
  }
  v12 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8;
  v39 = v12;
  v13 = 0LL;
  v14 = v12 != 0;
  v40 = v14;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    v32 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    v33 = *(_QWORD **)(v32 + 248);
    _InterlockedOr(v36, 0);
    if ( v33 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v31);
      v35 = 4;
      if ( CurrentProcessWow64Process )
        v35 = 1;
      ProbeForRead(v33, 0x20uLL, v35);
      if ( *v33 )
      {
        *(_QWORD *)(v32 + 224) |= 0x100uLL;
        v7 = v45;
        v8 = v44;
        v9 = v43;
LABEL_6:
        if ( (v9 & 0x1FFFF) >= 0x400 )
        {
          v16 = *(_QWORD *)(gpsi + 752LL);
          v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL);
          v38 = a5;
          v37 = v14;
          v15 = SfnDWORD((__int64 *)a1, v9, v8, v7, v17, v16);
        }
        else
        {
          v15 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
                  a1,
                  v9,
                  v8,
                  v7,
                  *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL),
                  *(_QWORD *)(gpsi + 752LL),
                  v14,
                  a5);
        }
LABEL_8:
        *a7 = v15;
        return;
      }
    }
    v7 = v45;
    v8 = v44;
    v9 = v43;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_6;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_6;
  if ( v9 == 90 )
    goto LABEL_6;
  v18 = *((_QWORD *)a1 + 5);
  v19 = *(_WORD *)(v18 + 42) & 0x2FFF;
  if ( (unsigned __int16)(v19 - 673) > 9u )
    goto LABEL_6;
  v20 = v19;
  v21 = v19 - 666LL;
  v22 = *(_QWORD *)(v18 + 120);
  if ( v22 != *(_QWORD *)(gpsi + 8 * v21 + 584) && v22 != *(_QWORD *)(gpsi + 8 * v21 + 392) )
    goto LABEL_6;
  v23 = 2 * v21;
  v24 = *((_QWORD *)&gSharedInfo + v23 + 6);
  if ( !v24
    || v9 <= *((_DWORD *)&gSharedInfo + 2 * v23 + 10)
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v24)) != 0
    || (*(_BYTE *)(v18 + 18) & 1) != 0 )
  {
    LOBYTE(v13) = v12 != 0;
    v25 = gpsi + 8 * v20;
    if ( (v9 & 0x1FFFF) >= 0x400 )
    {
      v38 = a5;
      v37 = v14;
      v15 = SfnDWORD((__int64 *)a1, v9, v8, v7, v13, *(_QWORD *)(v25 - 4608));
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v13,
              *(_QWORD *)(v25 - 4608),
              v14,
              a5);
    }
    goto LABEL_8;
  }
  v41 = 0LL;
  v42 = 0LL;
  v26 = a6;
  if ( a6 )
    ThreadLock(a1, &v41);
  v27 = xxxDefWindowProc(a1);
  v30 = a7;
  *a7 = v27;
  if ( v26 )
    ThreadUnlock1(v30, v28, v29);
}
