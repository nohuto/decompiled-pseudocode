/*
 * XREFs of sub_140B0CDAC @ 0x140B0CDAC
 * Callers:
 *     sub_140B0B9A8 @ 0x140B0B9A8 (sub_140B0B9A8.c)
 * Callees:
 *     sub_1402DCBD4 @ 0x1402DCBD4 (sub_1402DCBD4.c)
 *     sub_1402DCBFC @ 0x1402DCBFC (sub_1402DCBFC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0C830 @ 0x140B0C830 (sub_140B0C830.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B0CD58 @ 0x140B0CD58 (sub_140B0CD58.c)
 *     sub_140B0CFC8 @ 0x140B0CFC8 (sub_140B0CFC8.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 *     sub_140B0D408 @ 0x140B0D408 (sub_140B0D408.c)
 */

__int64 __fastcall sub_140B0CDAC(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // ebp
  void *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  int v12; // r8d
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rax
  void *Pool2; // rax
  void *v20; // rcx
  int v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-54h]
  unsigned int v23; // [rsp+48h] [rbp-50h]
  int v24; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v25; // [rsp+50h] [rbp-48h]
  GUID v26; // [rsp+58h] [rbp-40h] BYREF

  v26 = 0LL;
  v2 = 0;
  v25 = sub_140B0CD58(a1, (__int64)"TargetRuleDef");
  if ( v25 )
  {
    v3 = 0;
    while ( 1 )
    {
      v2 = 0;
      v4 = sub_140B0D408(a1, "TargetRuleDef", v3);
      if ( !v4 )
        goto LABEL_16;
      v24 = sub_140B0CCAC(a1, (__int64)"RuleNameGuidDef", v4, &v26);
      v2 = v24;
      if ( v24 < 0 )
        goto LABEL_16;
      v5 = sub_1402DCBFC(&v26);
      v6 = (__int64)v5;
      if ( !v5 )
        goto LABEL_16;
      v7 = *((_DWORD *)v5 + 10);
      v8 = 0;
      v9 = 0LL;
      v21 = 0;
      if ( !(*((_DWORD *)v5 + 11) + v7) )
        goto LABEL_15;
      v22 = sub_140B0C830(a1, (__int64)"TargetRuleDef", v3);
      if ( v22 )
        break;
LABEL_16:
      if ( ++v3 >= v25 )
        return v2;
    }
    v10 = sub_1402DCBD4(v6);
    v11 = v10;
    v13 = v12 * (*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 40));
    if ( v10 )
    {
      v13 += *((_DWORD *)v10 + 6);
      Pool2 = (void *)ExAllocatePool2(256LL, 4LL * v13, 0x74694D45u);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, (const void *)v11[2], 4LL * *((unsigned int *)v11 + 6));
      v8 = *((_DWORD *)v11 + 6);
      v20 = (void *)v11[2];
      v21 = v8;
      ExFreePoolWithTag(v20, 0x74694D45u);
    }
    else
    {
      v9 = (void *)ExAllocatePool2(256LL, 4LL * v13, 0x74694D45u);
      if ( !v9 )
        return (unsigned int)-1073741670;
    }
    v23 = 0;
    v14 = v22;
    if ( v22 )
    {
      v15 = v23;
      do
      {
        v16 = sub_140B0D2E8(a1, "TargetRuleDef", v3, v15);
        sub_140B0CFC8(a1, v16, *(_DWORD *)(v6 + 40), *(_DWORD *)(v6 + 44), (__int64)v9, v13, (__int64)&v21);
        ++v15;
      }
      while ( v15 < v14 );
      v2 = v24;
      v8 = v21;
    }
    if ( !v8 )
    {
      ExFreePoolWithTag(v9, 0x74694D45u);
      goto LABEL_16;
    }
LABEL_15:
    v17 = ExAllocatePool2(256LL, 0x28uLL, 0x74694D45u);
    *(_DWORD *)v17 = 0;
    ++dword_140C54CF4;
    *(_QWORD *)(v17 + 8) = v6;
    *(_QWORD *)(v17 + 16) = v9;
    *(_DWORD *)(v17 + 24) = v8;
    *(_QWORD *)(v17 + 32) = qword_140C48C18;
    qword_140C48C18 = v17 + 32;
    goto LABEL_16;
  }
  return v2;
}
