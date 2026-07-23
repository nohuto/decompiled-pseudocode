/*
 * XREFs of sub_140A09E34 @ 0x140A09E34
 * Callers:
 *     sub_140A09D2C @ 0x140A09D2C (sub_140A09D2C.c)
 *     sub_140A6D528 @ 0x140A6D528 (sub_140A6D528.c)
 * Callees:
 *     sub_14065565C @ 0x14065565C (sub_14065565C.c)
 *     sub_140A36E2C @ 0x140A36E2C (sub_140A36E2C.c)
 *     sub_140A37060 @ 0x140A37060 (sub_140A37060.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A09E34(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  int v3; // r11d
  __int64 v4; // r10
  int v5; // r8d
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  int v10; // edi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = 0;
  v6 = (unsigned int *)(v1 + 128);
  if ( *(_WORD *)(v1 + 10) )
  {
    while ( 1 )
    {
      a1 = *((_QWORD *)v6 + 2) - 0x455742F98A1E1D01LL;
      if ( *((_QWORD *)v6 + 2) == 0x455742F98A1E1D01LL )
        a1 = *((_QWORD *)v6 + 3) + 0x17083CA3A1A9CC64LL;
      if ( !a1 )
        break;
      v6 += 18;
      if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(v1 + 10) )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(*v6 + v1 + 40);
    v4 = (unsigned int)v7;
    v2 = HIDWORD(v7);
  }
LABEL_8:
  v8 = (__int64 *)sub_140A36E2C(a1, v2, v3, v1, v2, v4);
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_14065565C(v8, (const void *)v1, *(_DWORD *)(v1 + 20));
    if ( v10 >= 0 )
      v10 = sub_140A37060(v9);
    if ( *((_DWORD *)v9 + 2) )
    {
      if ( *v9 )
        ExFreePoolWithTag((PVOID)*v9, 0x74614454u);
      *((_DWORD *)v9 + 2) = 0;
    }
    ExFreePoolWithTag(v9, 0x74614454u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
