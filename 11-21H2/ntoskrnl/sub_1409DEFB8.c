/*
 * XREFs of sub_1409DEFB8 @ 0x1409DEFB8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403E3480 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1407F88C0 @ 0x1407F88C0 (sub_1407F88C0.c)
 *     sub_140814244 @ 0x140814244 (sub_140814244.c)
 *     sub_14081C568 @ 0x14081C568 (sub_14081C568.c)
 *     sub_140864164 @ 0x140864164 (sub_140864164.c)
 *     sub_140883718 @ 0x140883718 (sub_140883718.c)
 *     sub_1409DFF60 @ 0x1409DFF60 (sub_1409DFF60.c)
 *     sub_1409E101C @ 0x1409E101C (sub_1409E101C.c)
 *     sub_1409E1B94 @ 0x1409E1B94 (sub_1409E1B94.c)
 *     sub_1409E1C60 @ 0x1409E1C60 (sub_1409E1C60.c)
 *     sub_1409E1DB8 @ 0x1409E1DB8 (sub_1409E1DB8.c)
 *     sub_1409E1E64 @ 0x1409E1E64 (sub_1409E1E64.c)
 *     sub_1409E39EC @ 0x1409E39EC (sub_1409E39EC.c)
 *     sub_1409E5988 @ 0x1409E5988 (sub_1409E5988.c)
 *     sub_1409ED7D4 @ 0x1409ED7D4 (sub_1409ED7D4.c)
 *     sub_1409EE454 @ 0x1409EE454 (sub_1409EE454.c)
 *     sub_1409EE518 @ 0x1409EE518 (sub_1409EE518.c)
 *     sub_1409EE650 @ 0x1409EE650 (sub_1409EE650.c)
 *     sub_1409EE6F8 @ 0x1409EE6F8 (sub_1409EE6F8.c)
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409DEFB8(unsigned __int8 *Address, SIZE_T Length, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v4; // r14d
  int v6; // ebx
  unsigned __int16 v7; // dx
  KPROCESSOR_MODE v8; // r8
  __int64 v9; // r15
  __int64 result; // rax
  int v11; // ebx
  int v12; // esi
  int v13; // r14d
  int v14; // r15d
  unsigned int v15; // r12d
  int v16; // r13d
  int v17; // esi
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // edx
  struct _KTHREAD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int *v24; // rcx
  int v25; // eax
  bool v26; // zf
  unsigned int v27; // r14d
  wchar_t *v28; // rax
  wchar_t *v29; // rsi
  ULONG v30; // edx
  wchar_t *v31; // rcx
  unsigned int v32; // r14d
  unsigned int v33; // r14d
  __int64 v34; // rbx
  unsigned int v35; // edx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r14d
  unsigned int v39; // r14d
  __int64 v40; // rbx
  unsigned int v41; // edx
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  _WORD *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // edx
  char v47; // r14
  struct _KTHREAD *v48; // rax
  __int64 v49; // rax
  unsigned int v51; // edx
  struct _KTHREAD *v52; // rax
  __int64 v53; // rax
  unsigned int v54; // esi
  wchar_t *v55; // rax
  wchar_t *v56; // rdi
  unsigned int v57; // r13d
  unsigned int v58; // ebx
  __int64 Pool2; // rax
  _DWORD *v60; // r14
  int v61; // eax
  unsigned int v62; // r14d
  unsigned int v63; // r14d
  char *v64; // r12
  unsigned int v65; // edx
  struct _KTHREAD *v66; // rax
  __int64 v67; // rax
  unsigned int v68; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v70; // rax
  char v71; // [rsp+30h] [rbp-1B8h]
  unsigned __int8 v72; // [rsp+31h] [rbp-1B7h]
  int v73; // [rsp+44h] [rbp-1A4h]
  unsigned int v74; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v75; // [rsp+50h] [rbp-198h]
  int v76; // [rsp+5Ch] [rbp-18Ch]
  __int128 v77; // [rsp+70h] [rbp-178h] BYREF
  wchar_t *Src[2]; // [rsp+80h] [rbp-168h]
  int v79; // [rsp+90h] [rbp-158h]
  _DWORD v80[67]; // [rsp+94h] [rbp-154h] BYREF
  __int64 v81; // [rsp+1A0h] [rbp-48h] BYREF
  int v82; // [rsp+1A8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = *(_DWORD *)Address;
  v73 = *(_DWORD *)Address;
  v9 = *((_QWORD *)sub_140347DB0() + 108);
  if ( v6 > 17 )
  {
    if ( v6 != 18 )
    {
      switch ( v6 )
      {
        case 19:
          if ( v4 < 0x18 )
            return 3221225476LL;
          v77 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v68 = WORD4(v77);
          if ( WORD4(v77) == 0xFFFF )
            v68 = *(unsigned __int8 *)(v9 + 4232);
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          v70 = sub_140797594(v9, v68, 1);
          v23 = v70;
          if ( v70 )
          {
            v11 = sub_14079435C(0x80u, v70);
            if ( v11 < 0 )
              goto LABEL_153;
            v25 = sub_1409EE454(v23, &v77);
            goto LABEL_152;
          }
          goto LABEL_37;
        case 20:
          goto LABEL_134;
        case 21:
          if ( PreviousMode && !(unsigned __int8)sub_1409E1E64() )
            return 3221225506LL;
          if ( v4 < 0x24 || Address[4] != 2 || v4 > 0x220 )
            return 3221225476LL;
          v57 = v4 - 34 + 280;
          v58 = (v4 - 34) >> 1;
          Pool2 = ExAllocatePool2(256LL, v57, 1350005829LL);
          v60 = (_DWORD *)Pool2;
          if ( !Pool2 )
            return 3221225495LL;
          wcsncpy_s((wchar_t *)(Pool2 + 280), v58, (const wchar_t *)Address + 17, v58);
          v81 = *((_QWORD *)Address + 2);
          v82 = *((_DWORD *)Address + 6);
          v60[2] = *((_DWORD *)Address + 7);
          v72 = Address[32];
          v61 = sub_140A56B08();
          if ( v61 == 2 )
          {
            *(_BYTE *)v60 = Address[8];
            *((_BYTE *)v60 + 1) = Address[9];
            *((_BYTE *)v60 + 2) = Address[10];
            *((_BYTE *)v60 + 3) = Address[11];
            *((_BYTE *)v60 + 4) = Address[12];
            *((_BYTE *)v60 + 5) = Address[13];
          }
          else if ( v61 == 1 )
          {
            *(_WORD *)v60 = Address[8];
            *((_BYTE *)v60 + 2) = Address[9];
          }
          v60[4] = 2097153;
          v60[5] = 0;
          memset(v60 + 6, 0, 0x100uLL);
          sub_1409E101C(&v81, v60 + 4);
          v11 = sub_14042A5E0(20LL, v57);
          if ( v72 )
            v11 = sub_1409DFF60(v60, &v81);
          v31 = (wchar_t *)v60;
          break;
        case 22:
          v77 = 0LL;
          Src[0] = 0LL;
          memset(v80, 0, 0x108uLL);
          if ( PreviousMode && !(unsigned __int8)sub_1409E1E64() )
            return 3221225506LL;
          if ( v4 != 20 )
            return 3221225476LL;
          v81 = *((_QWORD *)Address + 1);
          v82 = *((_DWORD *)Address + 4);
          LODWORD(v77) = *((_DWORD *)Address + 1);
          v11 = sub_14042A5E0(1LL, 24LL);
          if ( v11 < 0 )
            return (unsigned int)v11;
          v79 = v77;
          sub_1409E101C(&v81, &v80[1]);
          v54 = wcsnlen(Src[0], 0xFFuLL);
          v55 = (wchar_t *)ExAllocatePool2(256LL, 2LL * (v54 + 1), 1350005829LL);
          v56 = v55;
          if ( !v55 )
            return 3221225495LL;
          wcsncpy_s(v55, v54 + 1, Src[0], v54);
          v11 = sub_14042A5E0(21LL, 272LL);
          sub_1409E1B94(v56, v54);
          v31 = v56;
          break;
        case 23:
          if ( v4 < 0x18 )
            return 3221225476LL;
          v77 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v51 = WORD4(v77);
          if ( WORD4(v77) == 0xFFFF )
            v51 = *(unsigned __int8 *)(v9 + 4232);
          v52 = KeGetCurrentThread();
          --*((_WORD *)v52 + 242);
          v53 = sub_140797594(v9, v51, 1);
          v23 = v53;
          if ( !v53 )
            goto LABEL_37;
          v11 = sub_14079435C(0x80u, v53);
          if ( v11 < 0 )
            goto LABEL_153;
          v25 = sub_1409EE650(v23, &v77);
          goto LABEL_152;
        case 24:
          goto LABEL_134;
        case 25:
          return (unsigned int)sub_1409F3EC0(Address, v4, v8);
        default:
          v26 = v6 == 26;
          goto LABEL_95;
      }
      v30 = 1350005829;
      goto LABEL_133;
    }
    return (unsigned int)sub_1409ED7D4(Address, v4);
  }
  if ( v6 == 17 )
  {
LABEL_74:
    if ( v4 < 0x10 )
      return 3221225476LL;
    v38 = v4 - 16;
    if ( (v38 & 3) != 0 )
      return 3221225485LL;
    v39 = v38 >> 2;
    if ( (unsigned __int16)v39 > v7 )
      return 3221225485LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v40 = *((_QWORD *)Address + 1);
      memmove(&v81, Address + 16, 4LL * (unsigned __int16)v39);
      v41 = (unsigned __int16)v40;
      if ( (unsigned __int16)v40 == 0xFFFF )
        v41 = *(unsigned __int8 *)(v9 + 4232);
      v42 = KeGetCurrentThread();
      --*((_WORD *)v42 + 242);
      v43 = sub_140797594(v9, v41, 1);
      v23 = v43;
      if ( !v43 )
        goto LABEL_37;
      v24 = (unsigned int *)v43;
      if ( (*(_DWORD *)(v43 + 12) & 0x2000000) != 0 )
      {
        v11 = sub_140864164(v43, 0x80u);
        if ( v11 >= 0 )
        {
          v44 = word_140C15E20;
          if ( v73 != 10 )
            v44 = &unk_140C15EC0;
          sub_14081C568(&v81, v39, (__int64)&v44[10 * *(unsigned __int8 *)(v23 + 818)]);
        }
        goto LABEL_153;
      }
      goto LABEL_39;
    }
    return 3221225506LL;
  }
  if ( v6 <= 10 )
  {
    if ( v6 != 10 )
    {
      if ( v6 != 1 )
      {
        if ( v6 == 3 )
        {
          if ( v4 == 8 )
          {
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v18 = *((_DWORD *)Address + 1);
              KeWaitForSingleObject(&stru_140C160E0, Executive, 0, 0, 0LL);
              v11 = sub_1407F88C0(v18, 0);
              if ( v11 >= 0 )
                dword_140C0C85C = v18;
              goto LABEL_32;
            }
            return 3221225506LL;
          }
          return 3221225476LL;
        }
        if ( v6 != 5 )
        {
          if ( v6 != 6 )
          {
            if ( v6 == 7 )
            {
              if ( v4 == 16 )
              {
                result = sub_140790CA8((__int64)&qword_14000EEE0, 0x80u);
                v11 = result;
                if ( (int)result < 0 )
                  return result;
                if ( !PsIsCurrentThreadInServerSilo() )
                {
                  v12 = *((_DWORD *)Address + 1);
                  v13 = *((_DWORD *)Address + 2);
                  v76 = *((_DWORD *)Address + 3);
                  KeWaitForSingleObject(&stru_140C160E0, Executive, 0, 0, 0LL);
                  dword_140C0DA48 = v12;
                  dword_140C0DA44 = v13;
                  dword_140C0DA40 = v76;
LABEL_32:
                  KeReleaseMutex(&stru_140C160E0, 0);
                  return (unsigned int)v11;
                }
                return 3221225506LL;
              }
              return 3221225476LL;
            }
            return (unsigned int)-1073741822;
          }
          goto LABEL_134;
        }
        if ( ((v4 - 16) & 0xFFFFFFFB) == 0 )
        {
          result = sub_140790CA8((__int64)&qword_14000EEE0, 0x80u);
          v11 = result;
          if ( (int)result < 0 )
            return result;
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            v14 = *((_DWORD *)Address + 1);
            if ( !v14 )
              return 3221225485LL;
            v15 = *((_DWORD *)Address + 2);
            if ( v15 < 0x3E8 )
              return 3221225485LL;
            v16 = *((_DWORD *)Address + 3);
            if ( !v16 )
              return 3221225485LL;
            v17 = dword_140D050AC;
            if ( v4 == 20 )
            {
              v17 = *((_DWORD *)Address + 4);
              if ( (unsigned int)(v17 - 1) <= 0xF423E )
                return 3221225485LL;
            }
            KeWaitForSingleObject(&stru_140C160E0, Executive, 0, 0, 0LL);
            dword_140D050AC = v17;
            dword_140D0512C = v14;
            dword_140D05130 = v15;
            dword_140D05134 = v16;
            goto LABEL_32;
          }
          return 3221225506LL;
        }
        return 3221225476LL;
      }
      if ( v4 != 48 )
        return 3221225476LL;
      v19 = *((_QWORD *)Address + 1);
      v77 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v20 = (unsigned __int16)v19;
      if ( (unsigned __int16)v19 == 0xFFFF )
        v20 = *(unsigned __int8 *)(v9 + 4232);
      v21 = KeGetCurrentThread();
      --*((_WORD *)v21 + 242);
      v22 = sub_140797594(v9, v20, 1);
      v23 = v22;
      if ( !v22 )
      {
LABEL_37:
        v11 = -1073741162;
LABEL_40:
        sub_1402F9540((__int64)KeGetCurrentThread());
        return (unsigned int)v11;
      }
      v24 = (unsigned int *)v22;
      if ( (*(_DWORD *)(v22 + 12) & 0x2000000) == 0 )
      {
LABEL_39:
        sub_1407981E8(v24, 1);
        v11 = -1073741811;
        goto LABEL_40;
      }
      v11 = sub_140864164(v22, 0x80u);
      if ( v11 < 0 )
        goto LABEL_153;
      v25 = sub_140814244((int *)v23, (char *)&v77);
LABEL_152:
      v11 = v25;
      goto LABEL_153;
    }
    goto LABEL_74;
  }
  if ( v6 == 11 )
  {
    v71 = 0;
    if ( v4 < 0x10 )
      return 3221225476LL;
    v32 = v4 - 16;
    if ( (v32 & 3) != 0 )
      return 3221225485LL;
    v33 = v32 >> 2;
    if ( v33 > 1 )
      return 3221225485LL;
    v34 = *((_QWORD *)Address + 1);
    if ( v33 )
    {
      if ( *((_DWORD *)Address + 4) != 1316 )
        return 3221225485LL;
      v71 = 1;
    }
    if ( SeSinglePrivilegeCheck(stru_140D3CB00, PreviousMode) )
    {
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v35 = (unsigned __int16)v34;
        if ( (unsigned __int16)v34 == 0xFFFF )
          v35 = *(unsigned __int8 *)(v9 + 4232);
        v36 = KeGetCurrentThread();
        --*((_WORD *)v36 + 242);
        v37 = sub_140797594(qword_140D05008, v35, 1);
        v23 = v37;
        if ( !v37 )
        {
          sub_1402F9540((__int64)KeGetCurrentThread());
          return 3221226134LL;
        }
        v11 = sub_14079435C(0x80u, v37);
        if ( v11 >= 0 )
        {
          if ( v71 )
            _InterlockedOr((volatile signed __int32 *)(v23 + 816), 0x400u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v23 + 816), 0xFFFFFBFF);
        }
        goto LABEL_153;
      }
      return 3221225506LL;
    }
    return 3221225569LL;
  }
  if ( v6 == 12 )
  {
    if ( v4 < 0x10 )
      return 3221225476LL;
    result = sub_140790CA8((__int64)&qword_14000EEE0, 0x80u);
    if ( (int)result < 0 )
      return result;
    if ( SeSinglePrivilegeCheck(stru_140D3CB00, PreviousMode) )
    {
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v27 = (v4 - 16) >> 2;
      if ( v27 > dword_140D3B100 )
        return 3221225485LL;
      v28 = (wchar_t *)ExAllocatePool2(64LL, 4LL * v27, 1484223557LL);
      v29 = v28;
      if ( v28 )
      {
        memmove(v28, Address + 16, 4LL * v27);
        v11 = sub_1409E39EC(v29, v27);
        v30 = 0;
        v31 = v29;
LABEL_133:
        ExFreePoolWithTag(v31, v30);
        return (unsigned int)v11;
      }
      return 3221225495LL;
    }
    return 3221225569LL;
  }
  if ( v6 <= 13 )
    return (unsigned int)-1073741822;
  if ( v6 > 15 )
  {
    v26 = v6 == 16;
LABEL_95:
    if ( !v26 )
      return (unsigned int)-1073741822;
    if ( v4 != 32 )
      return 3221225476LL;
    v45 = *((_QWORD *)Address + 1);
    v75 = *((_DWORD *)Address + 5);
    v74 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v46 = (unsigned __int16)v45;
    if ( (unsigned __int16)v45 == 0xFFFF )
      v46 = *(unsigned __int8 *)(v9 + 4232);
    v47 = v6 == 26;
    v48 = KeGetCurrentThread();
    --*((_WORD *)v48 + 242);
    v49 = sub_140797594(v9, v46, 1);
    v23 = v49;
    if ( !v49 )
      goto LABEL_37;
    v11 = sub_14079435C(0x80u, v49);
    if ( v11 < 0 )
      goto LABEL_153;
    v25 = sub_140883718(v23, v75, v74, v47);
    goto LABEL_152;
  }
LABEL_134:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v62 = v4 - 16;
  if ( (v62 & 3) == 0 )
  {
    if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(v6 - 14) <= 1 )
      return 3221225506LL;
    v63 = v62 >> 2;
    v64 = (char *)(Address + 16);
    v65 = (unsigned __int16)*((_QWORD *)Address + 1);
    if ( v65 == 0xFFFF )
      v65 = *(unsigned __int8 *)(v9 + 4232);
    v66 = KeGetCurrentThread();
    --*((_WORD *)v66 + 242);
    v67 = sub_140797594(v9, v65, 1);
    v23 = v67;
    if ( v67 )
    {
      v11 = sub_14079435C(0x80u, v67);
      if ( v11 >= 0 )
      {
        switch ( v73 )
        {
          case 6:
            v25 = sub_1409E5988(v23, v64, v63);
            goto LABEL_152;
          case 15:
            v25 = sub_1409E1C60(v23, v64, v63);
            goto LABEL_152;
          case 14:
            v25 = sub_1409E1DB8(v23, v64, v63);
            goto LABEL_152;
        }
        if ( v73 != 20 )
        {
          v25 = sub_1409EE6F8(v23, v64, v63);
          goto LABEL_152;
        }
        sub_1409EE518(v23, v64, v63);
      }
LABEL_153:
      sub_1407981E8((unsigned int *)v23, 1);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  return 3221225485LL;
}
