/*
 * XREFs of sub_140753F8C @ 0x140753F8C
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     sub_1402D6944 @ 0x1402D6944 (sub_1402D6944.c)
 *     sub_140754108 @ 0x140754108 (sub_140754108.c)
 *     sub_140754758 @ 0x140754758 (sub_140754758.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140753F8C(_QWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  __int64 result; // rax
  int v10; // r9d
  int v11; // edi
  _QWORD *Pool2; // rax
  PVOID v13; // rbx
  PVOID v14; // rcx
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  PVOID v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  P = 0LL;
  *a3 = 0LL;
  if ( !a2 )
  {
    if ( !a1[1] )
      return 3221225485LL;
    *a3 = a1;
    return 0LL;
  }
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_12;
  v5 = (_DWORD *)a1[1];
  if ( !v5 )
    return 3221225485LL;
  if ( ((unsigned __int8)v5 & 3) != 0 )
    goto LABEL_12;
  v6 = 0;
  v7 = *a1;
  if ( *a1 )
  {
    if ( (*a1 & 3) == 0 )
    {
      v7 = *a1;
      v6 = *(_DWORD *)(*a1 + 4LL);
      v8 = (_DWORD *)a1[1];
      goto LABEL_8;
    }
LABEL_12:
    ExRaiseDatatypeMisalignment();
  }
  v8 = (_DWORD *)a1[1];
  if ( *v5 != 1 )
    return 3221225485LL;
LABEL_8:
  result = sub_1402D6944(v8, v6, a2, &P);
  if ( (int)result >= 0 )
  {
    if ( v7 && (LOBYTE(v10) = a2, v11 = sub_140754108(v7, (_DWORD)v8, v6, v10, 1, (__int64)&v16), v11 < 0) )
    {
      v13 = 0LL;
      v14 = P;
    }
    else
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1866556755LL);
      v13 = v16;
      v14 = P;
      if ( !Pool2 )
      {
        v11 = -1073741801;
        goto LABEL_26;
      }
      Pool2[1] = P;
      *Pool2 = v13;
      *a3 = Pool2;
      v11 = 0;
    }
    if ( v11 >= 0 )
      return (unsigned int)v11;
LABEL_26:
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    if ( v13 )
      sub_140754758(v13);
    return (unsigned int)v11;
  }
  return result;
}
