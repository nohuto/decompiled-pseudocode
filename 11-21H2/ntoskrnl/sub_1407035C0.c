/*
 * XREFs of sub_1407035C0 @ 0x1407035C0
 * Callers:
 *     sub_140429670 @ 0x140429670 (sub_140429670.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     RtlVirtualUnwind2 @ 0x140296070 (RtlVirtualUnwind2.c)
 *     sub_140296DC0 @ 0x140296DC0 (sub_140296DC0.c)
 *     sub_140297A70 @ 0x140297A70 (sub_140297A70.c)
 *     sub_140298364 @ 0x140298364 (sub_140298364.c)
 *     sub_140298378 @ 0x140298378 (sub_140298378.c)
 *     sub_1402989A8 @ 0x1402989A8 (sub_1402989A8.c)
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140429980 @ 0x140429980 (sub_140429980.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     sub_140703C00 @ 0x140703C00 (sub_140703C00.c)
 *     sub_140703FB0 @ 0x140703FB0 (sub_140703FB0.c)
 *     sub_14093237C @ 0x14093237C (sub_14093237C.c)
 *     sub_1409B4D94 @ 0x1409B4D94 (sub_1409B4D94.c)
 */

__int64 __fastcall sub_1407035C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  ULONG v9; // r12d
  __int64 v10; // r15
  int v11; // eax
  __int64 i; // rcx
  __int64 j; // rcx
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // r12d
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  char v19; // r9
  _CONTEXT *v20; // rdi
  __int64 result; // rax
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp-88h]
  ULONG ContextLength[2]; // [rsp+88h] [rbp-80h] BYREF
  ULONG64 v25; // [rsp+90h] [rbp-78h] BYREF
  ULONG64 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int128 v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-28h]
  _OWORD v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v35[144]; // [rsp+128h] [rbp+20h] BYREF
  char v36; // [rsp+1B8h] [rbp+B0h] BYREF
  ULONG64 v37; // [rsp+1C0h] [rbp+B8h] BYREF
  char v38; // [rsp+1C8h] [rbp+C0h] BYREF
  char v39; // [rsp+1D0h] [rbp+C8h] BYREF
  char v40; // [rsp+1D8h] [rbp+D0h] BYREF
  char v41; // [rsp+200h] [rbp+F8h] BYREF
  char v42; // [rsp+208h] [rbp+100h] BYREF
  char v43; // [rsp+210h] [rbp+108h] BYREF
  char v44; // [rsp+218h] [rbp+110h] BYREF
  unsigned __int64 v45; // [rsp+220h] [rbp+118h]
  char v46; // [rsp+328h] [rbp+220h] BYREF
  char v47; // [rsp+338h] [rbp+230h] BYREF
  char v48; // [rsp+348h] [rbp+240h] BYREF
  char v49; // [rsp+358h] [rbp+250h] BYREF
  char v50; // [rsp+368h] [rbp+260h] BYREF
  char v51; // [rsp+378h] [rbp+270h] BYREF
  char v52; // [rsp+388h] [rbp+280h] BYREF
  char v53; // [rsp+398h] [rbp+290h] BYREF
  char v54; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v55; // [rsp+3B8h] [rbp+2B0h] BYREF

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = a2;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  LOBYTE(v22) = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 120);
  v23 = a3;
  v29 = a2;
  v9 = *(_DWORD *)(v8 + 48);
  ContextLength[0] = 0;
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)CurrentThread + 345) & 0x200) != 0 )
    {
      if ( RtlGetExtendedContextLength(v9, ContextLength) >= 0 )
      {
        v11 = sub_14093237C(v5, *(_QWORD *)(a1 + 120), ContextLength[0]);
        a3 = v23;
        goto LABEL_59;
      }
      goto LABEL_57;
    }
    for ( i = *((_QWORD *)CurrentThread + 5); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
      ;
    v10 = i - 400;
  }
  else
  {
    v10 = *((_QWORD *)CurrentThread + 18);
    if ( !v10 || *(_WORD *)(v10 + 368) != 16 )
      goto LABEL_58;
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)sub_1402AB970((__int64)&v26, (__int64)&v25) )
    {
      v31 = qword_140E00040;
      memset(v34, 0, sizeof(v34));
      v30 = xmmword_140E00030;
      sub_140429980();
      v4[19] = &v36;
      v4[21] = &v38;
      v4[22] = &v39;
      v4[23] = &v40;
      v4[28] = &v41;
      v4[29] = &v42;
      v4[30] = &v43;
      v4[31] = &v44;
      v4[6] = &v46;
      v4[7] = &v47;
      v4[8] = &v48;
      v4[9] = &v49;
      v4[10] = &v50;
      v4[11] = &v51;
      v4[12] = &v52;
      v4[13] = &v53;
      v4[14] = &v54;
      v4[15] = &v55;
      v4[20] = &v37;
      while ( 1 )
      {
        v14 = v45;
        if ( v45 <= 0xFFFF800000000000uLL || !sub_140297A70(&v26, v37, &v25, (ULONG64 *)v34) )
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            goto LABEL_56;
          goto LABEL_57;
        }
        v15 = (unsigned int)sub_140296DC0(v14, (__int64)&v30);
        if ( !*((_QWORD *)&v30 + 1) )
          goto LABEL_57;
        if ( (int)RtlVirtualUnwind2(
                    0,
                    SDWORD2(v30),
                    v14,
                    v15,
                    (__int64)v35,
                    (__int64)&v22,
                    (__int64)&v28,
                    (__int64)&v27,
                    (__int64)v4,
                    (__int64)&v26,
                    (__int64)&v25,
                    0LL,
                    0) < 0 )
          break;
        if ( v27 == v10 )
        {
          v5 = v29;
          goto LABEL_23;
        }
      }
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
LABEL_56:
        __int2c();
    }
LABEL_57:
    a3 = v23;
LABEL_58:
    v11 = -1073741823;
    goto LABEL_59;
  }
  for ( j = *((_QWORD *)CurrentThread + 5); (*(_BYTE *)(j + 8) & 1) != 0; j = *(_QWORD *)(j + 40) )
    ;
  v4[19] = j - 464;
  v4[22] = j - 448;
  v4[23] = j - 456;
  v4[28] = j - 440;
  v4[29] = j - 432;
  v4[30] = j - 424;
  v4[31] = j - 416;
  v4[6] = j - 672;
  v4[7] = j - 656;
  v4[8] = j - 640;
  v4[9] = j - 624;
  v4[10] = j - 608;
  v4[11] = j - 592;
  v4[12] = j - 576;
  v4[13] = j - 560;
  v4[14] = j - 544;
  v4[15] = j - 528;
  v4[21] = v10 + 344;
LABEL_23:
  v16 = v9 & 0x100008;
  if ( v5 )
  {
    if ( v16 == 1048584 )
    {
      if ( *(_BYTE *)(a1 + 88) == 1 )
      {
        v3 = 1;
        goto LABEL_28;
      }
    }
    else if ( *(_BYTE *)(a1 + 88) == 1 )
    {
LABEL_28:
      v17 = *(_DWORD **)(a1 + 120);
      *(_QWORD *)ContextLength = 0LL;
      v11 = sub_140298378((__int64)CurrentThread, v17, (unsigned __int64 *)ContextLength);
      if ( v11 < 0 )
      {
        a3 = v23;
        goto LABEL_59;
      }
      if ( (*(_BYTE *)(a1 + 89) & 4) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 120);
        v32 = 0LL;
        LODWORD(v32) = 3;
        v33 = 0LL;
        v11 = sub_1402989A8((__int64)CurrentThread, v18, (unsigned int *)&v32, (__int64)ContextLength);
        if ( v11 < 0 )
        {
          a3 = v23;
          goto LABEL_59;
        }
      }
    }
    v19 = *(_BYTE *)(a1 + 88);
    if ( v19 == 1 && (v11 = sub_140298364(*(_QWORD *)(a1 + 120), *((_QWORD *)CurrentThread + 133)), v11 < 0) )
    {
      a3 = v23;
    }
    else if ( *((_QWORD *)CurrentThread + 205)
           && v19 == 1
           && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (*((_BYTE *)CurrentThread + 3) & 8) != 0) )
    {
      sub_1409B4D94(CurrentThread, *(_QWORD *)(a1 + 120));
      a3 = v23;
      v11 = 0;
    }
    else
    {
      sub_140703FB0(v10, v4, *(_QWORD *)(a1 + 120));
      a3 = v23;
      v11 = 0;
    }
    goto LABEL_59;
  }
  if ( v16 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
    _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
  if ( *((_QWORD *)CurrentThread + 205) && *(_BYTE *)(a1 + 88) == 1 )
  {
    v20 = *(_CONTEXT **)(a1 + 120);
    sub_140703C00(v10, v4, v20);
    if ( (*((_BYTE *)CurrentThread + 3) & 8) != 0 )
    {
      RtlCopyContext(v20, v20->ContextFlags, *((PCONTEXT *)CurrentThread + 205));
      a3 = v23;
      v11 = 0;
      goto LABEL_59;
    }
  }
  else
  {
    sub_140703C00(v10, v4, *(_QWORD *)(a1 + 120));
  }
  a3 = v23;
  v11 = 0;
LABEL_59:
  *(_DWORD *)(a1 + 92) = v11;
  result = v3;
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *a3 = a1 + 96;
  else
    *a3 = 0LL;
  return result;
}
