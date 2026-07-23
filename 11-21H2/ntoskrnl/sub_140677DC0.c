/*
 * XREFs of sub_140677DC0 @ 0x140677DC0
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402555BC @ 0x1402555BC (sub_1402555BC.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140419F54 @ 0x140419F54 (sub_140419F54.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140678454 @ 0x140678454 (sub_140678454.c)
 *     SeCheckForCriticalAceRemoval @ 0x1406785F0 (SeCheckForCriticalAceRemoval.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407172C8 @ 0x1407172C8 (sub_1407172C8.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_140719180 @ 0x140719180 (sub_140719180.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_140721D00 @ 0x140721D00 (sub_140721D00.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140677DC0(ULONG_PTR a1, _DWORD *a2, __int64 a3, ...)
{
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // r15
  bool v9; // zf
  __int64 v10; // rax
  _DWORD *v11; // rax
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  struct _LOOKASIDE_LIST_EX *v14; // r9
  unsigned int *v15; // r14
  _PRIVILEGE_SET *v16; // rax
  int v17; // eax
  __int64 v18; // rsi
  int v19; // esi
  int v20; // r9d
  _PRIVILEGE_SET *v21; // r12
  int v22; // eax
  __int64 v23; // r15
  unsigned int v24; // r12d
  __int64 v25; // r13
  __int64 v26; // rbx
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v28; // rbx
  int v30; // eax
  ULONG_PTR v31; // r12
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned int v36; // eax
  ULONG_PTR v37; // rax
  _DWORD *v38; // rdx
  _DWORD *v39; // rcx
  __int64 v40; // [rsp+48h] [rbp-81h]
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-79h]
  unsigned int v42; // [rsp+58h] [rbp-71h]
  PVOID P; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v44[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v45; // [rsp+70h] [rbp-59h] BYREF
  _DWORD v46[2]; // [rsp+78h] [rbp-51h] BYREF
  ULONG_PTR v47; // [rsp+80h] [rbp-49h] BYREF
  __int64 v48; // [rsp+88h] [rbp-41h]
  _DWORD v49[2]; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v50[2]; // [rsp+98h] [rbp-31h] BYREF
  ULONG_PTR v51; // [rsp+A0h] [rbp-29h]
  _DWORD *v52; // [rsp+A8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+118h] [rbp+4Fh] BYREF
  _DWORD *v55; // [rsp+120h] [rbp+57h]
  ULONG_PTR v56; // [rsp+128h] [rbp+5Fh]
  size_t Size; // [rsp+130h] [rbp+67h] BYREF
  va_list Sizea; // [rsp+130h] [rbp+67h]
  __int64 v59; // [rsp+138h] [rbp+6Fh]
  __int64 v60; // [rsp+140h] [rbp+77h]
  __int64 v61; // [rsp+148h] [rbp+7Fh]
  __int64 v62; // [rsp+150h] [rbp+87h]
  __int64 v63; // [rsp+158h] [rbp+8Fh]
  va_list va1; // [rsp+160h] [rbp+97h] BYREF

  va_start(va1, a3);
  va_start(Sizea, a3);
  Size = va_arg(va1, _QWORD);
  v59 = va_arg(va1, _QWORD);
  v60 = va_arg(va1, _QWORD);
  v61 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, _QWORD);
  v55 = a2;
  BugCheckParameter3 = a1;
  v44[1] = 0;
  v46[1] = 0;
  v44[0] = -1;
  v46[0] = -1;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 40);
  v49[0] = -1;
  v8 = 0LL;
  v50[0] = -1;
  v49[1] = 0;
  v50[1] = 0;
  P = 0LL;
  DestinationString = 0LL;
  v9 = (*(_BYTE *)(v5 + 140) & 1) == 0;
  v47 = 0LL;
  v42 = 0;
  v52 = 0LL;
  LOBYTE(Size) = 0;
  v40 = 0LL;
  v45 = 0LL;
  LODWORD(v51) = v6;
  if ( v9 )
    v10 = sub_1407C9820(v5);
  else
    v10 = sub_1406BF400(v5, v6);
  v48 = v10;
  if ( !v10 )
    return 3221225626LL;
  sub_140722534(v5, v10, v6);
  v11 = (_DWORD *)sub_140721D00(a1, v61);
  v9 = (*(_BYTE *)(v5 + 140) & 1) == 0;
  v12 = (unsigned int)*v11;
  LODWORD(v56) = *v11;
  if ( v9 )
    v13 = sub_1407C9820(v5);
  else
    v13 = sub_1406BF400(v5, v12);
  v15 = (unsigned int *)v13;
  if ( !v13 )
  {
    v28 = 0LL;
    v19 = -1073741670;
    v21 = 0LL;
    goto LABEL_23;
  }
  v16 = (_PRIVILEGE_SET *)Allocate(PagedPool, *(unsigned int *)(v13 + 16), 0x36384D43u, v14);
  Privileges = v16;
  if ( !v16 )
  {
    v19 = -1073741670;
    v21 = 0LL;
LABEL_88:
    v28 = 0LL;
LABEL_23:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( !v21 )
      goto LABEL_27;
    goto LABEL_26;
  }
  memmove(v16, v15 + 5, v15[4]);
  v17 = *a2;
  v18 = v63;
  if ( (v17 & 4) != 0 )
  {
    SeCheckForCriticalAceRemoval(Privileges, a3, v63, (size_t *)Sizea);
    if ( (_BYTE)Size )
    {
      BugCheckParameter3 = 0LL;
      sub_1407C0690(a1, &BugCheckParameter3);
      if ( BugCheckParameter3 )
      {
        v19 = -1073741822;
        sub_140346D64((void *)BugCheckParameter3, 0x624E4D43u);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        v19 = -1073741822;
      }
      v21 = Privileges;
      goto LABEL_88;
    }
  }
  P = Privileges;
  v19 = sub_140726700(0, *v55, a3, (unsigned int)&P, 0, v59, v60, v18);
  if ( v19 >= 0 )
  {
    v20 = a3;
    v21 = Privileges;
    v19 = sub_140678454(a1, (_DWORD)Privileges, *v55, v20, (__int64)P);
    if ( v19 >= 0 )
    {
      v22 = sub_140419F54();
      v23 = v61;
      LODWORD(Size) = v22;
      if ( v61 )
        v24 = 1;
      else
        v24 = v6 >> 31;
      v25 = v62;
      v26 = MEMORY[0xFFFFF78000000014];
      if ( v61 )
      {
        v19 = sub_14071F300(v5, (unsigned int)v56);
        if ( v19 < 0 )
          goto LABEL_71;
        *(_DWORD *)(v25 + 96) = -1;
        *(_QWORD *)(v25 + 88) = 0LL;
        *(_DWORD *)(v25 + 68) = 9;
        *(_BYTE *)(v25 + 100) = 0;
      }
      else
      {
        v19 = sub_14071F300(v5, (unsigned int)v51);
        if ( v19 < 0 )
          goto LABEL_71;
        v19 = sub_14071F300(v5, (unsigned int)v56);
        if ( v19 < 0 )
          goto LABEL_71;
      }
      if ( (unsigned __int8)sub_140719180(v5, P, v24, &v47, &v52) )
      {
        BugCheckParameter4 = (unsigned int)v47;
        if ( (_DWORD)v47 == (_DWORD)v56 )
        {
          v9 = v23 == 0;
          v8 = v45;
          if ( v9 )
          {
            *(_QWORD *)(v48 + 4) = v26;
            *(_QWORD *)(BugCheckParameter3 + 168) = v26;
          }
          else
          {
            ++v15[3];
            *(_QWORD *)(v25 + 88) = v52;
            *(_DWORD *)(v25 + 96) = BugCheckParameter4;
          }
          goto LABEL_21;
        }
        v19 = sub_14071F300(v5, (unsigned int)v47);
        if ( v19 < 0 )
          goto LABEL_71;
        if ( v23 )
        {
          v39 = v52;
          *(_DWORD *)(v25 + 96) = *v52;
          *(_QWORD *)(v25 + 88) = v39;
        }
        else if ( v15[3] == 1 )
        {
          v19 = sub_14071F300(v5, v15[1]);
          if ( v19 < 0 )
            goto LABEL_71;
          v19 = sub_14071F300(v5, v15[2]);
          if ( v19 < 0 )
            goto LABEL_71;
        }
        if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
          v35 = sub_1406BF400(v5, (unsigned int)BugCheckParameter4);
        else
          v35 = sub_1407C9820(v5);
        v8 = v35;
        if ( !v35 )
        {
          if ( !v61 )
            KeBugCheckEx(0x51u, 4uLL, 5uLL, v5, BugCheckParameter4);
          v19 = -1073741670;
          v28 = 0LL;
          goto LABEL_22;
        }
        if ( !v61 )
        {
          v36 = v15[3];
          if ( v36 == 1 )
          {
            if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
              sub_1406BF450(v5, v44);
            else
              sub_1407C97C0(v5, v44);
            v15 = 0LL;
            sub_1402555BC(v5, (unsigned int)v56);
            sub_14079BD98(v5, (unsigned int)v56);
          }
          else
          {
            v15[3] = v36 - 1;
          }
          *(_DWORD *)(v48 + 44) = BugCheckParameter4;
        }
        ++*(_DWORD *)(v8 + 12);
        LODWORD(v31) = v56;
        v40 = 0LL;
        if ( !v61 )
        {
          v34 = v48;
LABEL_66:
          v37 = BugCheckParameter3;
          *(_QWORD *)(v34 + 4) = v26;
          ++*(_QWORD *)(v37 + 304);
          *(_QWORD *)(v37 + 168) = v26;
          sub_14071B640(v37, *(unsigned int *)(v34 + 44), 0);
          v42 = 0;
LABEL_21:
          v28 = v40;
LABEL_22:
          v21 = Privileges;
          goto LABEL_23;
        }
        goto LABEL_77;
      }
      v30 = sub_140419F54();
      v19 = sub_14079C8A4(v5, v30 + 20, v24, (unsigned int)&v47 + 4, (__int64)&v45, (__int64)v46);
      if ( v19 >= 0 )
      {
        v31 = HIDWORD(v47);
        v42 = HIDWORD(v47);
        if ( v23 )
        {
          v8 = v45;
          *(_DWORD *)(v45 + 8) = HIDWORD(v47);
          *(_DWORD *)(v8 + 4) = v31;
        }
        else
        {
          v19 = sub_14071F300(v5, v15[1]);
          if ( v19 < 0 )
            goto LABEL_71;
          if ( v15[3] == 1 )
          {
            v19 = sub_14071F300(v5, v15[2]);
            if ( v19 < 0 )
              goto LABEL_71;
          }
          if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
            v32 = sub_1406BF400(v5, v15[1]);
          else
            v32 = sub_1407C9820(v5);
          v8 = v45;
          v40 = v32;
          if ( !v32 )
          {
            v19 = -1073741670;
            goto LABEL_21;
          }
          *(_DWORD *)(v45 + 4) = v15[1];
          *(_DWORD *)(v8 + 8) = v56;
          v15[1] = v31;
          *(_DWORD *)(v32 + 8) = v31;
          --v15[3];
        }
        *(_WORD *)v8 = 27507;
        v33 = Size;
        *(_DWORD *)(v8 + 12) = 1;
        *(_DWORD *)(v8 + 16) = v33;
        memmove((void *)(v8 + 20), P, v33);
        if ( (int)sub_1407172C8(v5, (unsigned int)v31) < 0 )
        {
          v28 = v40;
          if ( !v61 )
          {
            ++v15[3];
            v15[1] = *(_DWORD *)(v8 + 4);
            *(_DWORD *)(v40 + 8) = *(_DWORD *)(v8 + 8);
          }
          v19 = -1073741670;
          goto LABEL_22;
        }
        if ( !v61 )
        {
          v34 = v48;
          *(_DWORD *)(v48 + 44) = v31;
          if ( !v15[3] )
          {
            if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
              sub_1406BF450(v5, v44);
            else
              sub_1407C97C0(v5, v44);
            v15 = 0LL;
            sub_1402555BC(v5, (unsigned int)v56);
            sub_14079BD98(v5, (unsigned int)v56);
          }
          goto LABEL_66;
        }
        LODWORD(Size) = 0;
        if ( !sub_140346D80(v5, v31, (size_t *)Sizea) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v31);
        v38 = *(_DWORD **)(*(_QWORD *)(v5 + 1888) + 16LL * (unsigned int)Size + 8);
        *(_QWORD *)(v25 + 88) = v38;
        *(_DWORD *)(v25 + 96) = *v38;
LABEL_77:
        v42 = 0;
        v19 = sub_14071784C(v25, 1LL);
        if ( v19 < 0 )
        {
          v9 = (*(_DWORD *)(v8 + 12))-- == 1;
          v42 = 0;
          if ( v9 )
          {
            sub_1402555BC(v5, (unsigned int)v31);
            sub_14079BD98(v5, (unsigned int)v31);
            v42 = 0;
          }
        }
        goto LABEL_21;
      }
LABEL_71:
      v8 = v45;
      goto LABEL_21;
    }
    goto LABEL_88;
  }
  P = 0LL;
  v28 = 0LL;
  v21 = Privileges;
LABEL_26:
  SeFreePrivileges(v21);
LABEL_27:
  if ( v42 )
    sub_14079BD98(v5, v42);
  if ( v28 )
  {
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      sub_1406BF450(v5, v49);
    else
      sub_1407C97C0(v5, v49);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      sub_1406BF450(v5, v46);
    else
      sub_1407C97C0(v5, v46);
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      sub_1406BF450(v5, v44);
    else
      sub_1407C97C0(v5, v44);
  }
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    sub_1406BF450(v5, v50);
  else
    sub_1407C97C0(v5, v50);
  return (unsigned int)v19;
}
