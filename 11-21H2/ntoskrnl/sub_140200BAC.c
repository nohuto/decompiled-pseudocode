/*
 * XREFs of sub_140200BAC @ 0x140200BAC
 * Callers:
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140200BAC(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // edi
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // r8d
  char v12; // r12
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+54h] [rbp-Ch] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-8h] BYREF
  __int16 v23; // [rsp+A8h] [rbp+48h] BYREF
  int v24; // [rsp+B0h] [rbp+50h] BYREF

  v22 = 0LL;
  v7 = 0;
  v21 = 0;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  v9 = *((_QWORD *)KeGetCurrentThread() + 23);
  v12 = sub_1402CF4F0(v9 + 1664);
  while ( a2 <= a3 )
  {
    LOBYTE(v11) = v12;
    sub_140318330(a2, a3, v11, a1, 0LL, (__int64)&v24, (__int64)&v21, (__int64)&v23, (__int64)&v22, (__int64)&v20);
    v13 = v24 & 7;
    if ( v13 != 4 && v13 != 1 )
    {
      v7 = -1073741755;
      break;
    }
    v14 = sub_1402828F0(64LL, 40LL, 1649568077LL);
    v15 = (_QWORD *)v14;
    if ( !v14 )
    {
      v7 = -1073741670;
      break;
    }
    *(_QWORD *)(v14 + 16) = a2;
    *(_QWORD *)(v14 + 24) = v22;
    *(_DWORD *)(v14 + 32) = v24;
    v16 = *(_QWORD **)(a4 + 8);
    if ( *v16 != a4 )
LABEL_16:
      __fastfail(3u);
    *v15 = a4;
    v15[1] = v16;
    *v16 = v15;
    a2 = v22;
    *(_QWORD *)(a4 + 8) = v15;
  }
  LOBYTE(v10) = v12;
  sub_1402B0CE0(v9 + 1664, v10);
  if ( v7 < 0 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD **)a4;
      if ( *(_QWORD *)a4 == a4 )
        break;
      if ( v18[1] != a4 )
        goto LABEL_16;
      v19 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_16;
      *(_QWORD *)a4 = v19;
      *(_QWORD *)(v19 + 8) = a4;
      ExFreePoolWithTag(v18, 0);
    }
  }
  return (unsigned int)v7;
}
