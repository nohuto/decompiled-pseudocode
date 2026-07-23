/*
 * XREFs of sub_14090A6D0 @ 0x14090A6D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140523D5C @ 0x140523D5C (sub_140523D5C.c)
 *     sub_14090A8B8 @ 0x14090A8B8 (sub_14090A8B8.c)
 *     sub_140A522B8 @ 0x140A522B8 (sub_140A522B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14090A6D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v10; // rdi
  char v11; // bp
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rcx
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v17 = 0;
  v6 = *(unsigned int *)(v2 + 16);
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( (unsigned int)v6 < (unsigned int)v7 )
    return (unsigned int)-1073741811;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(4 * (v6 + 2 * (v7 + 16))), 1131176264LL);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = v7;
  v11 = 1;
  v12 = (*(_DWORD *)a1 & 2) != 0;
  *((_BYTE *)v10 + 45) = v12;
  if ( !(_DWORD)v7 )
  {
LABEL_11:
    if ( v12 )
    {
      if ( (_DWORD)v7 )
      {
        v14 = ExAllocatePool2(64LL, (unsigned int)(v3 * v7), 1131176264LL);
        *((_QWORD *)v10 + 4) = v14;
        if ( !v14 )
        {
          v8 = -1073741670;
          goto LABEL_15;
        }
      }
      sub_140A522B8();
    }
    *a2 = v10;
    return 0;
  }
  *((_QWORD *)v10 + 1) = v10 + 32;
  v13 = (__int64)&v10[v7 + 32];
  *((_QWORD *)v10 + 2) = v13;
  *((_QWORD *)v10 + 3) = v13 + 4 * v6;
  memmove(v10 + 32, (const void *)(*(_QWORD *)(a1 + 8) + 20LL), 4 * v7);
  memmove(*((void **)v10 + 2), (const void *)(*(_QWORD *)(a1 + 16) + 20LL), 4 * v6);
  sub_14090A8B8(*((_QWORD *)v10 + 1), (unsigned int)v7);
  sub_14090A8B8(*((_QWORD *)v10 + 2), (unsigned int)v6);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    *((_BYTE *)v10 + 44) = 1;
  else
    v11 = *((_BYTE *)v10 + 44);
  v8 = sub_140523D5C(
         *((_QWORD *)v10 + 1),
         *((_DWORD **)v10 + 2),
         *((ULONG **)v10 + 3),
         *v10,
         v11,
         *((_BYTE *)v10 + 45),
         &v17);
  if ( v8 >= 0 )
  {
    v3 = v17;
    v12 = *((_BYTE *)v10 + 45);
    v10[10] = v17;
    goto LABEL_11;
  }
LABEL_15:
  v15 = (void *)*((_QWORD *)v10 + 4);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x436C6148u);
  ExFreePoolWithTag(v10, 0x436C6148u);
  return (unsigned int)v8;
}
