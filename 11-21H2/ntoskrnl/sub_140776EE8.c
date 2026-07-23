/*
 * XREFs of sub_140776EE8 @ 0x140776EE8
 * Callers:
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 *     sub_140778B24 @ 0x140778B24 (sub_140778B24.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140776EE8(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8,
        _DWORD *a9)
{
  int v9; // ebx
  int v10; // r15d
  __int64 Pool2; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  _DWORD *v14; // r14
  int v15; // r8d
  __int64 v16; // rdi
  int v17; // r9d
  int v18; // eax
  __int128 v20; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  Pool2 = ExAllocatePool2(256LL, 48LL * a7, 1483763280LL);
  *a8 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_11;
  }
  sub_140779DC4(P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_11;
  v13 = (unsigned int)*a9;
  v14 = (_DWORD *)(a6 + 20);
  while ( 1 )
  {
    v15 = 0;
    v16 = *a8 + 48 * v13;
    if ( !*v14 )
      goto LABEL_5;
    if ( *v14 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = sub_14069984C(1, a3, a2, 1, 0, a1, &Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v14 - 5);
      v20 = *(_OWORD *)(v14 - 1);
      *(_DWORD *)(v16 + 32) = 0;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_DWORD *)(v16 + 36) = 0;
      *(_OWORD *)(v16 + 16) = v20;
      goto LABEL_9;
    }
    v15 = (int)Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_11;
    v17 = a6 + 32 * v12;
    v18 = a4
        ? sub_140778B24(a3, v10, v15, v17, *v14, a5, v16)
        : sub_14077D784(a3, v10, v15, v17, *v14, *(_QWORD *)(v14 + 1), v16);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_11;
LABEL_9:
    ++*a9;
    ++v12;
    v13 = (unsigned int)*a9;
    v14 += 8;
    if ( v12 >= a7 )
      goto LABEL_11;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_11:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    sub_140779A50(P[0]);
  return (unsigned int)v9;
}
