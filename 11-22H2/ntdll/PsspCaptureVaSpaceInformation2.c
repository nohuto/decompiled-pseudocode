/*
 * XREFs of PsspCaptureVaSpaceInformation2 @ 0x180128BA4
 * Callers:
 *     PsspCaptureVaSpaceInformation @ 0x180128AC0 (PsspCaptureVaSpaceInformation.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     PsspCaptureImageInformation @ 0x1801289B8 (PsspCaptureImageInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation2(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __int64 a4,
        __int16 a5)
{
  int (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbx
  char v11; // r13
  int v12; // esi
  unsigned __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  int v20; // edi
  unsigned int v21; // esi
  __int64 v22; // r14
  _OWORD *v23; // rdi
  unsigned int v24; // r15d
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  _WORD *v27; // r12
  unsigned int v28; // eax
  unsigned __int16 *v29; // rsi
  __int64 v30; // rcx
  __int16 v31; // ax
  int v32; // eax
  size_t v33; // r8
  unsigned __int16 v34; // r14
  _QWORD *v35; // [rsp+38h] [rbp-91h]
  int v36; // [rsp+40h] [rbp-89h]
  int v37; // [rsp+48h] [rbp-81h]
  int v38; // [rsp+50h] [rbp-79h]
  int v39; // [rsp+58h] [rbp-71h]
  __int64 v40; // [rsp+60h] [rbp-69h] BYREF
  int v41; // [rsp+68h] [rbp-61h]
  unsigned int v42; // [rsp+6Ch] [rbp-5Dh]
  __int128 v43; // [rsp+70h] [rbp-59h] BYREF
  __int128 v44; // [rsp+80h] [rbp-49h]
  __int128 v45; // [rsp+90h] [rbp-39h]
  void *v46; // [rsp+A0h] [rbp-29h]
  HANDLE Handle; // [rsp+A8h] [rbp-21h]
  _QWORD v48[2]; // [rsp+B0h] [rbp-19h] BYREF
  _OWORD v49[5]; // [rsp+C0h] [rbp-9h] BYREF

  v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  v6 = a4;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  v12 = a5 & 0x1000;
  while ( 1 )
  {
    v41 = v12;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    if ( v5(v6, v7, 0LL, &v43, 48LL, 0LL) < 0 )
      break;
    v13 = v43;
    if ( (_QWORD)v43 != v7 )
      return 3221225793LL;
    if ( DWORD2(v45) == 0x1000000 || (v14 = 0, DWORD2(v45) == 0x40000) )
      v14 = 1;
    v9 += v14;
    v12 = a5 & 0x1000;
    if ( (a5 & 0x1000) != 0 && !v11 && (DWORD2(v45) == 0x1000000 || DWORD2(v45) == 0x40000) )
    {
      v40 = 0LL;
      v49[0] = 0LL;
      v15 = a3(v6, v7, 2LL, v49, 16LL, &v40);
      if ( v15 >= 0 || v15 == -1073741820 || v15 == -1073741789 || v15 == -2147483643 )
      {
        v16 = v40;
        if ( HIDWORD(v40) )
          v16 = 0LL;
        v40 = v16;
      }
      else
      {
        LODWORD(v16) = v40;
      }
      if ( (unsigned int)v16 > 0x10 && (v15 >= 0 || v15 == -1073741820 || v15 == -1073741789 || v15 == -2147483643) )
        v17 = (v16 - 5) & 0xFFFFFFF8;
      else
        v17 = 8;
      if ( v17 + (int)v10 < (unsigned int)v10 )
      {
        LODWORD(v10) = -1;
        v11 = 1;
      }
      else
      {
        LODWORD(v10) = v17 + v10;
      }
      v13 = v43;
    }
    ++v8;
    v7 = v13 + *((_QWORD *)&v44 + 1);
    if ( v13 + *((_QWORD *)&v44 + 1) < v13 )
    {
      v12 = v41;
      break;
    }
    v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  }
  v18 = 72LL * v8;
  if ( v18 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( v11 )
  {
    v10 = 8LL * v9;
    if ( v10 > 0xFFFFFFFF )
      return 3221225621LL;
  }
  else if ( v12 )
  {
    if ( (int)v10 + 16 < (unsigned int)v10 )
      return 3221225621LL;
    LODWORD(v10) = v10 + 16;
  }
  if ( (_DWORD)v10 )
  {
    if ( (int)v18 + (int)v10 < (unsigned int)v18 )
      return 3221225621LL;
    LODWORD(v18) = v18 + v10;
  }
  v48[1] = (unsigned int)v18;
  result = NtCreateSection();
  if ( (int)result >= 0 )
  {
    v38 = 4;
    v37 = 0;
    v36 = 1;
    v35 = v48;
    v46 = 0LL;
    v48[0] = 0LL;
    v20 = ZwMapViewOfSection();
    if ( v20 < 0 )
    {
      NtClose(Handle);
      return (unsigned int)v20;
    }
    v21 = v48[0];
    v22 = 0LL;
    v23 = v46;
    v24 = 0;
    v42 = v48[0];
    v39 = 0;
    while ( 1 )
    {
      if ( v24 + 72 < v24
        || v24 + 72 > v21
        || (v43 = 0LL,
            v44 = 0LL,
            v45 = 0LL,
            ((int (__fastcall *)(__int64, __int64, _QWORD, __int128 *, __int64, _QWORD, _QWORD *, int, int, int))a3)(
              v6,
              v22,
              0LL,
              &v43,
              48LL,
              0LL,
              v35,
              v36,
              v37,
              v38) < 0) )
      {
LABEL_84:
        NtUnmapViewOfSection();
        *(_DWORD *)(a1 + 912) = v39;
        *(_QWORD *)(a1 + 920) = Handle;
        *(_DWORD *)(a1 + 916) = v24;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( (_QWORD)v43 != v22 )
        return 3221225793LL;
      memset_thunk_772440563353939046(v23, 0, 0x48uLL);
      v25 = 72;
      *v23 = v43;
      *((_DWORD *)v23 + 4) = v44;
      *((_QWORD *)v23 + 3) = *((_QWORD *)&v44 + 1);
      *((_QWORD *)v23 + 4) = v45;
      *((_DWORD *)v23 + 10) = DWORD2(v45);
      if ( v41 )
        break;
LABEL_81:
      v24 += v25;
      v22 = v43 + *((_QWORD *)&v44 + 1);
      ++v39;
      v23 = (_OWORD *)((char *)v23 + v25);
      if ( (_QWORD)v43 + *((_QWORD *)&v44 + 1) < (unsigned __int64)v43 )
        goto LABEL_84;
      v21 = v42;
    }
    if ( DWORD2(v45) == 0x1000000 )
    {
      PsspCaptureImageInformation((__int64)(v23 + 3));
    }
    else if ( DWORD2(v45) != 0x40000 )
    {
      goto LABEL_81;
    }
    if ( v24 + 76 < v24 || v24 + 76 > v21 )
      goto LABEL_84;
    if ( !v11 )
    {
      v26 = v24 + 92;
      if ( v24 + 92 >= v24 + 76 && v26 <= v21 )
      {
        v27 = (_WORD *)v23 + 36;
        v28 = v42 - v26;
        *((_WORD *)v23 + 36) = 0;
        v29 = (unsigned __int16 *)v23 + 36;
        if ( v28 >= (unsigned int)v10 )
          v28 = v10;
        v30 = v28;
        v31 = -1;
        if ( (unsigned int)v30 < 0xFFFF )
          v31 = v30;
        *((_WORD *)v23 + 37) = v31;
        *((_QWORD *)v23 + 10) = (char *)v23 + 88;
        v40 = 0LL;
        v32 = a3(a4, v22, 2LL, (char *)v23 + 72, v30, &v40);
        if ( (v32 >= 0 || v32 == -1073741820 || v32 == -1073741789 || v32 == -2147483643) && HIDWORD(v40) )
        {
          v29 = 0LL;
          v32 = -1073741675;
        }
        v11 = 0;
        if ( v32 >= 0 )
        {
          v33 = *v29;
          if ( v33 + 2 > 0xFFFF )
          {
            v34 = 0;
          }
          else
          {
            v34 = v33 + 2;
            memmove(v29 + 1, *((const void **)v29 + 1), v33);
            *(unsigned __int16 *)((char *)v29 + *v29 + 2) = 0;
          }
          *v29 = v34;
          v11 = 0;
          LODWORD(v10) = v10 - ((v34 + 9) & 0xFFFFFFF8);
          v25 = (v34 + 81) & 0xFFFFFFF8;
          goto LABEL_80;
        }
LABEL_79:
        *v27 = 0;
        LODWORD(v10) = v10 - 2;
        v25 = 80;
LABEL_80:
        v6 = a4;
        goto LABEL_81;
      }
      v11 = 1;
    }
    v27 = (_WORD *)v23 + 36;
    goto LABEL_79;
  }
  return result;
}
