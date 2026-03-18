/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C003EE20
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C003ED50 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01DB4D0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C016B1A4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall CKeyboardProcessor::CreateKeyboardInputMessage(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int16 a8,
        __int16 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10,
        struct _MIT_KEYBOARD_INPUT_MESSAGE *a11)
{
  int v15; // r12d
  int v16; // r15d
  int v17; // ebx
  __int16 v18; // ax
  unsigned __int128 v19; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v21; // di
  __int16 v22; // cx
  __int64 v23; // r15
  int v24; // r8d
  unsigned __int16 v25; // dx
  char *v26; // rcx
  unsigned __int8 v27; // dl
  __int64 v28; // rcx
  __int16 *v29; // rax
  __int16 v30; // r10
  _BYTE *v31; // rdx
  int v32; // r9d
  __int16 v33; // ax
  _OWORD *v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  _QWORD *v47; // rax
  int v48; // r8d
  int v49; // r9d
  int v50; // r8d
  unsigned __int16 v51; // dx
  _BYTE *i; // rcx
  unsigned __int8 v53; // dl
  char *v54; // rcx
  char v55; // cl
  __int16 v57; // [rsp+44h] [rbp-BCh]
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v59; // [rsp+4Ch] [rbp-B4h] BYREF
  _OWORD v60[22]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+1B0h] [rbp+B0h] BYREF

  v15 = a1;
  v57 = a2;
  memset(v60, 0, sizeof(v60));
  v16 = a3 & 0x8000;
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    v57 = -7907;
  v17 = 0;
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x4000LL) )
  {
    v58 = v15;
    *(_QWORD *)&v61 = a5;
    v59 = v16 == 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C028EE70,
      (unsigned int)&unk_1C0261E66,
      v48,
      v49,
      (__int64)&v59,
      (__int64)&v61,
      (__int64)&v58);
  }
  if ( a5 )
  {
    v47 = (_QWORD *)HMValidateHandleNoSecure((int)a5, 19);
    if ( v47 )
      *(_QWORD *)&v60[0] = *v47;
  }
  if ( a10 )
    v61 = *(_OWORD *)a10;
  else
    v61 = 0LL;
  v18 = WORD6(v60[20]);
  if ( (_BYTE)v15 )
    v18 = a9;
  WORD6(v60[20]) = v18;
  DWORD2(v60[20]) = a7;
  v60[21] = v61;
  if ( a6 )
    *((_QWORD *)&v19 + 1) = a6;
  else
    v19 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *((_QWORD *)&v60[19] + 1) = *((_QWORD *)&v19 + 1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  WORD4(v60[0]) = a4;
  *(LARGE_INTEGER *)&v60[20] = PerformanceCounter;
  v21 = v16 != 0;
  v22 = 256;
  if ( (a8 & 0x100) != 0 || (v22 = 512, (a8 & 0x200) != 0) )
    v21 |= v22;
  if ( (a8 & 0x80u) != 0 )
    v21 |= 0x80u;
  v23 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      v24 = (unsigned __int8)a3;
      if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
        v24 = 2 * (unsigned __int8)a3 + 128;
      v25 = 0;
      if ( *(_BYTE *)(gpKbdTbl + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(gpKbdTbl + 48) + 2LL * v25) != v24 )
        {
          if ( ++v25 >= *(unsigned __int8 *)(gpKbdTbl + 56) )
            goto LABEL_21;
        }
        LOWORD(v26) = (unsigned __int8)v25;
      }
      else
      {
LABEL_21:
        v26 = *(char **)(gpKbdTbl + 64);
        if ( v26 )
        {
          while ( *((_WORD *)v26 + 1) )
          {
            if ( (unsigned __int8)v26[2] == v24 )
            {
              LOWORD(v26) = (unsigned __int8)*v26 | 0xE000;
              goto LABEL_31;
            }
            v26 += 4;
          }
        }
        v26 = *(char **)(gpKbdTbl + 72);
        if ( v26 )
        {
          while ( *((_WORD *)v26 + 1) )
          {
            if ( (unsigned __int8)v26[2] == v24 )
            {
              LOWORD(v26) = (unsigned __int8)*v26 | 0xE100;
              goto LABEL_31;
            }
            v26 += 4;
            if ( !v26 )
              break;
          }
        }
        v27 = aVkNumpad;
        v26 = &aVkNumpad;
        if ( aVkNumpad )
        {
          while ( v27 != v24 )
          {
            v27 = *++v26;
            if ( !*v26 )
              goto LABEL_30;
          }
          LODWORD(v26) = (_DWORD)v26 - (unsigned int)&aVkNumpad + 71;
        }
        else
        {
LABEL_30:
          LOWORD(v26) = 0;
        }
      }
LABEL_31:
      v57 = (__int16)v26;
      if ( ausNumPadCvt[0] )
      {
        v28 = 0LL;
        v29 = ausNumPadCvt;
        while ( *(_BYTE *)v29 != (_BYTE)a3 )
        {
          v29 = &ausNumPadCvt[++v28];
          if ( !*v29 )
            goto LABEL_35;
        }
        v21 |= 2u;
      }
    }
LABEL_35:
    v21 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v21 |= 0x20u;
  }
  if ( ((GetActiveHKL() & 0x3FF) == 0x11 || (GetActiveHKL() & 0x3FF) == 0x12) && (a3 & 0x400) != 0 )
  {
    v50 = (unsigned __int8)a3;
    if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
      v50 = 2 * (unsigned __int8)a3 + 128;
    v51 = 0;
    if ( *(_BYTE *)(gpKbdTbl + 56) )
    {
      while ( *(unsigned __int8 *)(*(_QWORD *)(gpKbdTbl + 48) + 2LL * v51) != v50 )
      {
        if ( ++v51 >= *(unsigned __int8 *)(gpKbdTbl + 56) )
          goto LABEL_75;
      }
      v55 = v51;
    }
    else
    {
LABEL_75:
      i = *(_BYTE **)(gpKbdTbl + 64);
      if ( i )
      {
        while ( *((_WORD *)i + 1) )
        {
          if ( (unsigned __int8)i[2] == v50 )
          {
LABEL_91:
            v55 = *i;
            goto LABEL_84;
          }
          i += 4;
        }
      }
      for ( i = *(_BYTE **)(gpKbdTbl + 72); i; i += 4 )
      {
        if ( !*((_WORD *)i + 1) )
          break;
        if ( (unsigned __int8)i[2] == v50 )
          goto LABEL_91;
      }
      v53 = aVkNumpad;
      v54 = &aVkNumpad;
      if ( aVkNumpad )
      {
        while ( v53 != v50 )
        {
          v53 = *++v54;
          if ( !*v54 )
            goto LABEL_83;
        }
        v55 = (_BYTE)v54 - (unsigned __int8)&aVkNumpad + 71;
      }
      else
      {
LABEL_83:
        v55 = 0;
      }
    }
LABEL_84:
    v30 = v57;
    if ( v55 != (_BYTE)v57 )
      v30 = 0;
  }
  else
  {
    v30 = v57;
  }
  v31 = (char *)v60 + 14;
  WORD6(v60[0]) = (unsigned __int8)a3;
  WORD5(v60[0]) = v30;
  HIWORD(v60[16]) = (a3 >> 7) & 2 | v21;
  do
  {
    v32 = *((unsigned __int8 *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v17 >> 2));
    if ( _bittest(&v32, (unsigned __int8)(2 * (v17 & 3))) )
      *v31 |= 0x80u;
    if ( _bittest(&v32, (unsigned __int8)(2 * (v17 & 3) + 1)) )
      *v31 |= 1u;
    ++v17;
    ++v31;
  }
  while ( v17 < 256 );
  v33 = WORD2(v60[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v33 = v30;
  WORD2(v60[17]) = v33;
  v34 = v60;
  do
  {
    v35 = v34[1];
    *(_OWORD *)a11 = *v34;
    v36 = v34[2];
    *((_OWORD *)a11 + 1) = v35;
    v37 = v34[3];
    *((_OWORD *)a11 + 2) = v36;
    v38 = v34[4];
    *((_OWORD *)a11 + 3) = v37;
    v39 = v34[5];
    *((_OWORD *)a11 + 4) = v38;
    v40 = v34[6];
    *((_OWORD *)a11 + 5) = v39;
    v41 = v34[7];
    v34 += 8;
    *((_OWORD *)a11 + 6) = v40;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v41;
    --v23;
  }
  while ( v23 );
  v42 = v34[1];
  *(_OWORD *)a11 = *v34;
  v43 = v34[2];
  *((_OWORD *)a11 + 1) = v42;
  v44 = v34[3];
  *((_OWORD *)a11 + 2) = v43;
  v45 = v34[4];
  *((_OWORD *)a11 + 3) = v44;
  v46 = v34[5];
  *((_OWORD *)a11 + 4) = v45;
  *((_OWORD *)a11 + 5) = v46;
}
