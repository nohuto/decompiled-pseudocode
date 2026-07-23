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

NTSTATUS __fastcall PsspCaptureVaSpaceInformation2(
        __int64 a1,
        void *a2,
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
  NTSTATUS result; // eax
  NTSTATUS v20; // edi
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
  int v35; // [rsp+58h] [rbp-71h]
  __int64 v36; // [rsp+60h] [rbp-69h] BYREF
  int v37; // [rsp+68h] [rbp-61h]
  unsigned int v38; // [rsp+6Ch] [rbp-5Dh]
  __int128 v39; // [rsp+70h] [rbp-59h] BYREF
  __int128 v40; // [rsp+80h] [rbp-49h]
  __int128 v41; // [rsp+90h] [rbp-39h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+A8h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp-19h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B8h] [rbp-11h] BYREF
  _OWORD v46[5]; // [rsp+C0h] [rbp-9h] BYREF

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
    v37 = v12;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    if ( v5(v6, v7, 0LL, &v39, 48LL, 0LL) < 0 )
      break;
    v13 = v39;
    if ( (_QWORD)v39 != v7 )
      return -1073741503;
    if ( DWORD2(v41) == 0x1000000 || (v14 = 0, DWORD2(v41) == 0x40000) )
      v14 = 1;
    v9 += v14;
    v12 = a5 & 0x1000;
    if ( (a5 & 0x1000) != 0 && !v11 && (DWORD2(v41) == 0x1000000 || DWORD2(v41) == 0x40000) )
    {
      v36 = 0LL;
      v46[0] = 0LL;
      v15 = a3(v6, v7, 2LL, v46, 16LL, &v36);
      if ( v15 >= 0 || v15 == -1073741820 || v15 == -1073741789 || v15 == -2147483643 )
      {
        v16 = v36;
        if ( HIDWORD(v36) )
          v16 = 0LL;
        v36 = v16;
      }
      else
      {
        LODWORD(v16) = v36;
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
      v13 = v39;
    }
    ++v8;
    v7 = v13 + *((_QWORD *)&v40 + 1);
    if ( v13 + *((_QWORD *)&v40 + 1) < v13 )
    {
      v12 = v37;
      break;
    }
    v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  }
  v18 = 72LL * v8;
  if ( v18 > 0xFFFFFFFF )
    return -1073741675;
  if ( v11 )
  {
    v10 = 8LL * v9;
    if ( v10 > 0xFFFFFFFF )
      return -1073741675;
  }
  else if ( v12 )
  {
    if ( (int)v10 + 16 < (unsigned int)v10 )
      return -1073741675;
    LODWORD(v10) = v10 + 16;
  }
  if ( (_DWORD)v10 )
  {
    if ( (int)v18 + (int)v10 < (unsigned int)v18 )
      return -1073741675;
    LODWORD(v18) = v18 + v10;
  }
  MaximumSize.QuadPart = (unsigned int)v18;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_18015A028,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v20 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewShare,
            0,
            4u);
    if ( v20 < 0 )
    {
      NtClose(SectionHandle);
      return v20;
    }
    v21 = ViewSize;
    v22 = 0LL;
    v23 = BaseAddress;
    v24 = 0;
    v38 = ViewSize;
    v35 = 0;
    while ( 1 )
    {
      if ( v24 + 72 < v24
        || v24 + 72 > v21
        || (v39 = 0LL, v40 = 0LL, v41 = 0LL, (int)a3(v6, v22, 0LL, &v39, 48LL, 0LL) < 0) )
      {
LABEL_84:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_DWORD *)(a1 + 912) = v35;
        *(_QWORD *)(a1 + 920) = SectionHandle;
        *(_DWORD *)(a1 + 916) = v24;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( (_QWORD)v39 != v22 )
        return -1073741503;
      memset_thunk_772440563353939046(v23, 0, 0x48uLL);
      v25 = 72;
      *v23 = v39;
      *((_DWORD *)v23 + 4) = v40;
      *((_QWORD *)v23 + 3) = *((_QWORD *)&v40 + 1);
      *((_QWORD *)v23 + 4) = v41;
      *((_DWORD *)v23 + 10) = DWORD2(v41);
      if ( v37 )
        break;
LABEL_81:
      v24 += v25;
      v22 = v39 + *((_QWORD *)&v40 + 1);
      ++v35;
      v23 = (_OWORD *)((char *)v23 + v25);
      if ( (_QWORD)v39 + *((_QWORD *)&v40 + 1) < (unsigned __int64)v39 )
        goto LABEL_84;
      v21 = v38;
    }
    if ( DWORD2(v41) == 0x1000000 )
    {
      PsspCaptureImageInformation((__int64)(v23 + 3), a2, *((char **)&v39 + 1));
    }
    else if ( DWORD2(v41) != 0x40000 )
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
        v28 = v38 - v26;
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
        v36 = 0LL;
        v32 = a3(a4, v22, 2LL, (char *)v23 + 72, v30, &v36);
        if ( (v32 >= 0 || v32 == -1073741820 || v32 == -1073741789 || v32 == -2147483643) && HIDWORD(v36) )
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
