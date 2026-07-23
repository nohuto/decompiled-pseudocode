/*
 * XREFs of sub_140987D68 @ 0x140987D68
 * Callers:
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140987D68(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v6; // rcx
  __int64 Pool2; // rax
  _QWORD *v8; // rdx
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = 0;
  if ( (_DWORD)v2 )
  {
    if ( *(_DWORD *)(a2 + 4) < (unsigned int)v2 )
    {
      v6 = *(void **)(a2 + 8);
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_DWORD *)(a2 + 4) = 0;
      }
      if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(64LL, (unsigned int)(16 * v2), 1096181328LL);
      *(_QWORD *)(a2 + 8) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_DWORD *)(a2 + 4) = v2;
      LODWORD(v2) = *(_DWORD *)(a1 + 24);
    }
    v8 = *(_QWORD **)(a2 + 8);
    for ( i = 0; i < (unsigned int)v2; LODWORD(v2) = *(_DWORD *)(a1 + 24) )
    {
      v10 = i++;
      v11 = *(_QWORD *)(a1 + 32) + 16 * v10;
      *v8 = *(_QWORD *)v11;
      v8 += 2;
      *(v8 - 1) = *(unsigned int *)(v11 + 8);
    }
    *(_DWORD *)a2 = v2;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
