/*
 * XREFs of sub_1409EA760 @ 0x1409EA760
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14063A59C @ 0x14063A59C (sub_14063A59C.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     sub_14080AB10 @ 0x14080AB10 (sub_14080AB10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_1409EA760(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  bool v4; // cf
  int v5; // eax
  unsigned __int16 v7; // r12
  unsigned __int64 v8; // rcx
  void *v11; // r14
  unsigned int v12; // esi
  _WORD *v13; // r10
  unsigned int v14; // r8d
  int v15; // r11d
  int v16; // r8d
  unsigned int v17; // r9d
  ULONG v18; // r8d
  _OBJECT_NAME_INFORMATION *Pool2; // rbx
  NTSTATUS v20; // r15d
  int Length; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  ULONG ReturnLength; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  int v27; // [rsp+40h] [rbp-29h]
  unsigned int v28; // [rsp+44h] [rbp-25h]
  __int16 v29; // [rsp+48h] [rbp-21h]
  int v30; // [rsp+4Ah] [rbp-1Fh]
  __int16 v31; // [rsp+4Eh] [rbp-1Bh]
  unsigned __int64 *v32; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-11h]
  int v34; // [rsp+68h] [rbp-1h]
  int v35; // [rsp+6Ch] [rbp+3h]

  v4 = *(_BYTE *)(a4 + 64) != 0;
  ReturnLength = 0;
  v5 = *(_DWORD *)(a4 + 44);
  v7 = 4391 - v4;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v30 = 0;
  v31 = 0;
  v27 = v5;
  v11 = (void *)(v8 + 48);
  v28 = a3;
  v26 = v8 + 48;
  if ( *(_BYTE *)(a4 + 68) )
    v28 = a3 | 0x80000000;
  v12 = 1;
  v13 = *(_WORD **)(a4 + 8);
  v29 = (unsigned __int8)(BYTE1(v8) ^ dword_140D06C0C ^ *(_BYTE *)(v8 + 24));
  if ( v13 )
  {
    v14 = 0;
    if ( !*v13 )
    {
LABEL_8:
      sub_14080AB10(a1, a2);
      return 0;
    }
    v15 = *(_DWORD *)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ BYTE1(v8) ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)]
                    + 192);
    while ( !(unsigned int)sub_14063A59C(v15, *(_DWORD *)&v13[2 * v14 + 2]) )
    {
      v14 = v16 + 1;
      if ( v14 >= v17 )
        goto LABEL_8;
    }
  }
  ObfReferenceObjectWithTag(v11, 0x54777445u);
  sub_14080AB10(a1, a2);
  v18 = *(unsigned __int16 *)(a4 + 24);
  Pool2 = *(_OBJECT_NAME_INFORMATION **)(a4 + 16);
  v32 = &v26;
  ReturnLength = v18;
  v33[0] = 18LL;
  while ( 1 )
  {
    v20 = ObQueryNameString(v11, Pool2, v18, &ReturnLength);
    if ( v20 != -1073741820 )
      break;
    if ( Pool2 != *(_OBJECT_NAME_INFORMATION **)(a4 + 16) )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 1953985605LL);
    if ( !Pool2 )
      break;
    v18 = ReturnLength;
  }
  ObfDereferenceObjectWithTag(v11, 0x54777445u);
  if ( !v20 )
  {
    Length = 0x2000;
    if ( Pool2->Name.Length < 0x2000u )
      Length = Pool2->Name.Length;
    v12 = 2;
    v33[1] = Pool2->Name.Buffer;
    v34 = Length;
    v35 = 0;
  }
  v22 = 2LL * v12;
  v33[v22] = 2LL;
  v23 = *(_QWORD *)(a4 + 32);
  v33[v22 - 1] = &qword_14000EF90;
  sub_1402AB170((__int64)&v32, *(_QWORD *)(v23 + 1096), *(_DWORD *)v23, v12 + 1, v7, 0x401802u);
  if ( Pool2 && Pool2 != *(_OBJECT_NAME_INFORMATION **)(a4 + 16) )
    ExFreePoolWithTag(Pool2, 0);
  return 0;
}
