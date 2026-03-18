/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8
 * Callers:
 *     xxxSendMessageBSM @ 0x1C0061FF0 (xxxSendMessageBSM.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C004AA20 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     _PostTransformableMessageIL @ 0x1C004F3FC (_PostTransformableMessageIL.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C00E3BA4 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        ShellWindowManagement **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  void *v7; // rbx
  __int64 v8; // r12
  unsigned int v10; // r15d
  int v11; // eax
  __int64 v12; // rdx
  _BOOL8 v13; // r14
  __int64 v14; // rax
  __int64 v16; // rax
  struct tagWND *v17; // rsi
  PETHREAD **v18; // r8
  __int64 v19; // r8
  int v20; // r14d
  int v21; // edx
  int v22; // r14d
  BOOL v23; // r12d
  int v24; // r15d
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __m128i v31; // xmm0
  PETHREAD *v32; // rcx
  PETHREAD *v33; // rcx
  bool v34; // zf
  int v35; // [rsp+50h] [rbp-B0h]
  PETHREAD **v36; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-A0h]
  _BOOL8 v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-90h]
  HANDLE InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  void *Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  struct tagBWL *v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __m128i v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+F0h] [rbp-10h]

  v51 = 0LL;
  v7 = 0LL;
  v48 = a4;
  v37 = a3;
  v8 = a4;
  v50 = 0LL;
  v10 = 1;
  v35 = 1;
  v47 = gptiCurrent;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v11 = 1;
    v46 = 1LL;
  }
  else
  {
    v11 = 0;
    v46 = 0LL;
  }
  v53 = 0;
  v52 = 0LL;
  if ( v11 )
    UserSetLastError(87);
  if ( !a1 )
    return 0LL;
  if ( !a6 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794) )
    a6 = 1;
  v49 = BuildHwndList(a1[14], (const struct tagWND *)2, 0LL, 1LL);
  if ( !v49 )
    return 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
    && a1[3] == (ShellWindowManagement *)grpdeskRitInput
    && ((*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
     || CanForceForeground(*(const struct tagPROCESSINFO **)(gptiCurrent + 424LL))) )
  {
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  v38 = 0LL;
  v13 = 0LL;
  if ( a2 == 537 )
  {
    if ( v37 == 32772 || (v38 = 0LL, v37 == 0x8000) )
    {
      v34 = *(_DWORD *)(v8 + 4) == 2;
      v13 = 0LL;
      v38 = 0LL;
      if ( v34 )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x40000000) == 0 )
        {
          v31 = *(__m128i *)v8;
          v53 = *(_DWORD *)(v8 + 16);
          v52 = v31;
          v38 = 0LL;
          v34 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
          v52.m128i_i32[3] = _mm_srli_si128(v31, 8).m128i_i32[1] | 0x40000000;
          if ( v34 )
          {
            v36 = 0LL;
            GetProcessLuid(0LL, &v36);
            v38 = 0LL;
            if ( (_DWORD)v36 == luidSystem[0] )
            {
              v13 = HIDWORD(v36) == luidSystem[1];
              v38 = v13;
            }
          }
          goto LABEL_17;
        }
        return 0LL;
      }
    }
  }
LABEL_17:
  Handle = (char *)v49 + 32;
  v14 = *((_QWORD *)v49 + 4);
  if ( v14 == 1 )
    goto LABEL_18;
  while ( 1 )
  {
    LOBYTE(v12) = 1;
    v39 = 0;
    v16 = HMValidateHandleNoSecure(v14, v12);
    v17 = (struct tagWND *)v16;
    if ( !v16 )
      goto LABEL_44;
    v12 = *((unsigned int *)a5 + 1);
    v18 = (PETHREAD **)(v16 + 16);
    v36 = (PETHREAD **)(v16 + 16);
    if ( (v12 & 2) != 0 )
    {
      if ( (*v18)[54] == *(PETHREAD *)(v47 + 432) )
        goto LABEL_44;
    }
    else
    {
      v36 = (PETHREAD **)(v16 + 16);
    }
    if ( (v12 & 0x400) != 0 )
    {
      v33 = *v18;
      v42 = 0LL;
      if ( (int)GetProcessLuid(*v33, &v42) < 0 || *((_QWORD *)a5 + 4) != v42 )
        goto LABEL_44;
      v18 = v36;
    }
    if ( v13 )
    {
      v32 = *v18;
      v44 = 0LL;
      if ( (int)GetProcessLuid(*v32, &v44) < 0 )
        goto LABEL_44;
      if ( __PAIR64__(luidSystem[1], luidSystem[0]) != v44 )
        v39 = 1;
    }
    v19 = *((_QWORD *)v17 + 5);
    if ( (*(_WORD *)(v19 + 42) & 0x2FFF) != 0x29C )
    {
      v12 = **(unsigned __int16 **)(*((_QWORD *)v17 + 17) + 8LL);
      if ( *(_WORD *)(gpsi + 908LL) != (_WORD)v12
        && gaOleMainThreadWndClass != (_WORD)v12
        && (!v46 || (*(_BYTE *)(v19 + 21) & 2) == 0) )
      {
        break;
      }
    }
LABEL_44:
    Handle = (char *)Handle + 8;
    v14 = *(_QWORD *)Handle;
    if ( *(_QWORD *)Handle == 1LL )
      goto LABEL_18;
    v13 = v38;
  }
  *(_QWORD *)&v50 = *(_QWORD *)(v47 + 416);
  *(_QWORD *)(v47 + 416) = &v50;
  *((_QWORD *)&v50 + 1) = v17;
  HMLockObject(v17);
  v20 = *((_DWORD *)a5 + 1);
  if ( (v20 & 0x10) != 0 )
  {
    PostTransformableMessageIL(v17, a2, v37, v8, a6);
LABEL_47:
    ThreadUnlock1(v29, v28, v30);
    goto LABEL_44;
  }
  if ( (v20 & 0x100) != 0 )
  {
    xxxSendNotifyMessage(v17, a2, v37, (struct _LARGE_STRING *)v8, a6);
    goto LABEL_47;
  }
  if ( (v20 & 0x20000000) != 0 )
  {
    QueueNotifyTransformableMessage(v17, a2, v37, v8, a6, 1);
    goto LABEL_47;
  }
  v45 = 0LL;
  v21 = v20 & 8;
  InputBuffer = 0LL;
  v22 = v20 & 0x20;
  v43 = v21;
  v23 = a2 == 536 && v37 == 4;
  if ( v21 )
    v24 = v23 ? 2000 : 5000;
  else
    v24 = 0;
  if ( v23 )
  {
    InputBuffer = PsGetThreadProcessId(**v36);
    ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
    v21 = v43;
  }
  if ( xxxSendTransformableMessageTimeout(
         (ULONG_PTR)v17,
         (v21 != 0 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
         v24,
         (__int64)&v45,
         a6,
         1) )
  {
    if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
    {
      v10 = 0;
      if ( a2 == 17 )
        v34 = v45 == 0;
      else
        v34 = v45 == 1112363332;
      LOBYTE(v10) = !v34;
      v35 = v10;
    }
    else
    {
      v10 = v35;
    }
  }
  else
  {
    v10 = v22;
    v35 = v22;
  }
  if ( v23 )
  {
    InputBuffer = 0LL;
    InputBuffer = PsGetThreadProcessId(**v36);
    ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
  }
  if ( v10 )
  {
    ThreadUnlock1(v26, v25, v27);
    v8 = v48;
    goto LABEL_44;
  }
  v34 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
  *((_QWORD *)a5 + 3) = *(_QWORD *)v17;
  if ( !v34 )
  {
    v26 = (void *)*((_QWORD *)v17 + 3);
    Handle = 0LL;
    if ( v26 )
    {
      ObOpenObjectByPointer(v26, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
      v7 = Handle;
    }
    *((_QWORD *)a5 + 2) = v7;
  }
  ThreadUnlock1(v26, v25, v27);
LABEL_18:
  FreeHwndList(v49);
  return v10;
}
