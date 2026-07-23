/*
 * XREFs of sub_14070F744 @ 0x14070F744
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x14070F660 (IoQueryFileDosDeviceName.c)
 *     sub_14070F710 @ 0x14070F710 (sub_14070F710.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405569F4 @ 0x1405569F4 (sub_1405569F4.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     RtlVolumeDeviceToDosName @ 0x140710B90 (RtlVolumeDeviceToDosName.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14070F744(
        __int64 a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  __int64 v7; // rbx
  UNICODE_STRING *v8; // r12
  char v9; // r13
  unsigned int v10; // esi
  UNICODE_STRING *v11; // r14
  _DWORD *v12; // rcx
  NTSTATUS v13; // ebx
  UNICODE_STRING *v14; // rdx
  UNICODE_STRING *v15; // r15
  char v16; // r8
  _DWORD *v17; // r10
  unsigned int Length; // ecx
  char v19; // cl
  _DWORD *v20; // r13
  char *v21; // r14
  NTSTATUS v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // esi
  char *v26; // r15
  int v28; // eax
  UNICODE_STRING *Pool2; // rax
  unsigned int v30; // eax
  int v31; // ecx
  const wchar_t *v32; // rdx
  int v33; // r8d
  __int16 v34; // cx
  __int64 v35; // [rsp+40h] [rbp-68h] BYREF
  char *v36; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  _OWORD v38[5]; // [rsp+58h] [rbp-50h] BYREF
  bool v40; // [rsp+B8h] [rbp+10h]
  char v41; // [rsp+B8h] [rbp+10h]
  char v42; // [rsp+C0h] [rbp+18h]

  v42 = a3;
  v7 = a1;
  LODWORD(v35) = 0;
  v8 = 0LL;
  P = 0LL;
  v40 = 0;
  v9 = 0;
  v38[0] = 0LL;
  v10 = 16;
  if ( a5 >= 0x10 )
    v10 = a5;
  if ( a7 == 1 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v10, 538996553LL);
    v8 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      v13 = -1073741670;
      goto LABEL_45;
    }
    v11 = Pool2;
    a3 = v42;
  }
  else
  {
    v11 = (UNICODE_STRING *)v38;
    if ( a5 >= 0x10 )
      v11 = a4;
  }
  v12 = *(_DWORD **)(v7 + 8);
  if ( !a3 )
    goto LABEL_7;
  v28 = v12[13];
  if ( (v28 & 0x10) != 0 )
  {
    v32 = L"\\\\?\\vmsmb";
    v33 = v28 & 0x80000;
    if ( (v28 & 0x80000) == 0 )
      v32 = &word_140865B20;
    LODWORD(v35) = v33 != 0 ? 36 : 20;
    if ( (unsigned int)v35 > v10 )
      goto LABEL_73;
    v13 = 0;
    v34 = v33 != 0 ? 18 : 2;
    v11->Length = v34;
    v11->MaximumLength = v34;
    v11->Buffer = &v11[1].Length;
    memmove(&v11[1], v32, (-(__int64)(v33 != 0) & 0x10) + 4);
  }
  else
  {
    v13 = RtlVolumeDeviceToDosName(v12, v11);
    LODWORD(v35) = v11->Length + 18;
  }
  if ( v13 < 0 )
  {
    v7 = a1;
LABEL_73:
    v12 = *(_DWORD **)(v7 + 8);
LABEL_7:
    v13 = sub_1407103B0((_DWORD)v12, (_DWORD)v11, v10, (unsigned int)&v35, 0);
    goto LABEL_8;
  }
  v9 = 1;
LABEL_8:
  if ( v13 < 0 )
  {
    if ( v13 != -1073741820 )
      goto LABEL_45;
  }
  else if ( !v9 )
  {
    v40 = v11->Length == 0;
  }
  v14 = a4;
  v15 = a4 + 1;
  v16 = v42;
  if ( !v42 || !v9 )
  {
    if ( a7 == 1 && a5 >= 0x10 && (unsigned int)v35 <= v10 )
    {
      a4->Length = v11->Length;
      a4->MaximumLength = v11->MaximumLength;
      memmove(v15, &v11[1], (unsigned int)v35 - 16LL);
      v14 = a4;
      v17 = (_DWORD *)a1;
      v16 = v42;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( v10 < (unsigned int)v35 )
    Length = v10 - 16;
  else
    Length = v11->Length;
  memmove(&a4[1], v11->Buffer, Length);
  v17 = (_DWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) == 0 )
  {
    ExFreePoolWithTag(v11->Buffer, 0);
    v14 = a4;
    v16 = v42;
LABEL_21:
    v17 = (_DWORD *)a1;
    goto LABEL_22;
  }
  v14 = a4;
  v16 = v42;
LABEL_22:
  if ( v40 )
    LODWORD(v35) = v35 + 2;
  v19 = 0;
  v41 = 0;
  if ( a5 < 0x10 || (unsigned int)v35 > v10 )
  {
    v20 = a6;
    *a6 = v35;
    v19 = 1;
    v41 = 1;
  }
  else
  {
    v14->Buffer = &v15->Length;
    v15 = (UNICODE_STRING *)((char *)v15 + v11->Length);
    v20 = a6;
  }
  if ( a7 == 1 )
  {
    v21 = (char *)v8;
  }
  else if ( v19 )
  {
    v21 = (char *)v38;
    if ( a5 >= 0x10 )
      v21 = (char *)v14;
  }
  else
  {
    v21 = (char *)&v15[-1].Buffer + 4;
    LODWORD(v36) = HIDWORD(v15[-1].Buffer);
  }
  if ( (a7 != 1 || v16) && (v17[20] & 2) != 0 )
    v22 = sub_14070FC40(v17, (__int64)&v35);
  else
    v22 = sub_14071E6BC(v17, (__int64)v21, (__int64)&v35, 1);
  v13 = v22;
  if ( (v22 & 0xC0000000) == 0xC0000000 )
  {
    v30 = v22 + 1073741822;
    if ( (unsigned int)(v13 + 1073741822) > 0xE )
      goto LABEL_45;
    v31 = 18435;
    if ( !_bittest(&v31, v30) )
      goto LABEL_45;
    LODWORD(v35) = 4;
    *(_DWORD *)v21 = 0;
    *((_WORD *)v21 + 2) = 92;
    v13 = 0;
    v23 = v35;
  }
  else
  {
    v23 = v35;
    if ( (unsigned int)v35 < 4 )
      v23 = 4;
    LODWORD(v35) = v23;
  }
  if ( v41 )
  {
    *v20 += *(_DWORD *)v21;
    v13 = a5 < 0x10 ? -1073741820 : -2147483643;
  }
  else
  {
    v24 = v23 - 4;
    v25 = *(_DWORD *)v21;
    if ( v24 <= *(_DWORD *)v21 )
      v25 = v24;
    LODWORD(v35) = (_DWORD)v15 + *(_DWORD *)v21 - (_DWORD)a4;
    if ( *((_WORD *)v21 + 2) == 92 )
    {
      if ( a7 == 1 )
        memmove(v15, v21 + 4, v25);
      else
        *(_DWORD *)v21 = (_DWORD)v36;
      v26 = (char *)v15 + v25;
      v36 = v26;
      *(_WORD *)v26 = 0;
      LODWORD(v35) = v35 + 2;
      *v20 = v35;
      LOWORD(v26) = (_WORD)v26 - (_WORD)a4;
      a4->Length = (_WORD)v26 - 16;
      a4->MaximumLength = (_WORD)v26 - 14;
    }
    else
    {
      v13 = -1073741767;
    }
  }
LABEL_45:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v13;
}
