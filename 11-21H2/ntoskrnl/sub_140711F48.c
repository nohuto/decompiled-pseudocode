/*
 * XREFs of sub_140711F48 @ 0x140711F48
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x14023FCD0 (PsGetProcessStartKey.c)
 *     PsGetProcessSessionId @ 0x14028AF60 (PsGetProcessSessionId.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     sub_14070B934 @ 0x14070B934 (sub_14070B934.c)
 *     sub_14070BACC @ 0x14070BACC (sub_14070BACC.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     sub_140711EE8 @ 0x140711EE8 (sub_140711EE8.c)
 *     PsAcquireProcessExitSynchronization @ 0x140711F20 (PsAcquireProcessExitSynchronization.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140711F48(ULONG_PTR BugCheckParameter1, char *Address, SIZE_T Length, char a4, ULONG *a5)
{
  SIZE_T v5; // r15
  int v8; // ebx
  __int64 *v9; // rcx
  void *v10; // r12
  int v11; // edi
  __int64 v12; // r9
  ULONG v13; // edi
  size_t v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rdi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  ULONG Size; // [rsp+24h] [rbp-2A4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2A0h]
  int v26; // [rsp+2Ch] [rbp-29Ch] BYREF
  __int64 v27; // [rsp+30h] [rbp-298h] BYREF
  const void **v28; // [rsp+38h] [rbp-290h]
  PVOID P[2]; // [rsp+40h] [rbp-288h] BYREF
  void *v30; // [rsp+50h] [rbp-278h]
  ULONG_PTR v31; // [rsp+58h] [rbp-270h]
  size_t PackageSize[52]; // [rsp+60h] [rbp-268h] BYREF
  _OWORD v33[3]; // [rsp+200h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v31 = BugCheckParameter1;
  memset(v33, 0, sizeof(v33));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  Size = 0;
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v27 = 0LL;
  v9 = &qword_140001AF8;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v28 = (const void **)v9;
  v10 = (void *)sub_140347920(BugCheckParameter1, 0x746C6644u);
  v30 = v10;
  v26 = 0;
  sub_14070B934(v10, (WCHAR *)PackageSize, &v26);
  v11 = sub_14066A374((__int64)v10, Src, 0x44u, &Size);
  if ( v11 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)BugCheckParameter1) >= 0 )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v33, v12);
      sub_14070BACC(BugCheckParameter1, (__int64)&v27);
      sub_14070BB0C(BugCheckParameter1, (__int64)P);
      sub_1402D0930((__int64)v33, 0LL);
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
      v8 = v27;
    }
    v13 = Size + 100 + LODWORD(PackageSize[0]) + LODWORD(PackageSize[1]) + *(unsigned __int16 *)v28 + LOWORD(P[0]);
    if ( a5 )
      *a5 = v13;
    if ( a4 )
      ProbeForWrite(Address, v5, 4u);
    v14 = (unsigned int)v5;
    if ( v13 < (unsigned int)v5 )
      v14 = v13;
    memset(Address, 0, v14);
    if ( (unsigned int)v5 < 0x60 )
    {
      v11 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)Address = 96;
      *((_DWORD *)Address + 1) = *(_DWORD *)(BugCheckParameter1 + 1088);
      *((_QWORD *)Address + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)Address + 2) = *(_QWORD *)(BugCheckParameter1 + 1128);
      *((_QWORD *)Address + 3) = *(_QWORD *)(BugCheckParameter1 + 2304);
      *((_QWORD *)Address + 4) = *(_QWORD *)(BugCheckParameter1 + 2312);
      *((_QWORD *)Address + 5) = *(_QWORD *)(BugCheckParameter1 + 2296);
      *((_QWORD *)Address + 6) = sub_140711EE8(v15);
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v27);
      if ( (unsigned int)v5 >= v13 )
      {
        *((_DWORD *)Address + 18) = 96;
        v16 = Size;
        memmove(Address + 96, Src, Size);
        v17 = &Address[v16 + 96];
        *((_DWORD *)Address + 19) = v16 + 96;
        v18 = (unsigned __int16 *)v28;
        memmove(v17, v28[1], *(unsigned __int16 *)v28);
        v19 = &v17[*v18 + 2];
        *((_DWORD *)Address + 20) = (_DWORD)v19 - (_DWORD)Address;
        memmove(v19, &PackageSize[2], PackageSize[0]);
        v20 = &v19[PackageSize[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v20 - (_DWORD)Address;
        memmove(v20, &PackageSize[34], PackageSize[1]);
        v21 = &v20[PackageSize[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v21 - (_DWORD)Address;
        memmove(v21, P[1], LOWORD(P[0]));
        v11 = 0;
      }
      else
      {
        v11 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v10 )
    sub_1402F89B0((signed __int64 *)(BugCheckParameter1 + 1208), (unsigned __int64)v10, 0x746C6644u);
  return (unsigned int)v11;
}
