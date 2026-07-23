/*
 * XREFs of sub_14077D784 @ 0x14077D784
 * Callers:
 *     sub_140698510 @ 0x140698510 (sub_140698510.c)
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_140776EE8 @ 0x140776EE8 (sub_140776EE8.c)
 *     sub_1407770E0 @ 0x1407770E0 (sub_1407770E0.c)
 *     sub_140778B24 @ 0x140778B24 (sub_140778B24.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077D784(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, _OWORD *a7)
{
  __int128 v7; // xmm0
  _OWORD *v8; // rsi
  __int64 v9; // r12
  void *Pool2; // rdi
  __int64 v13; // rbp
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  void *v18; // rcx
  _DWORD v19[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+20h] BYREF

  v7 = *(_OWORD *)a4;
  v8 = a7;
  v9 = a6;
  v19[0] = 0;
  v22 = 512;
  Pool2 = 0LL;
  *a7 = v7;
  LODWORD(v13) = 0;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(a4 + 16);
  v14 = a5;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_DWORD *)v8 + 5) = v14;
  v15 = sub_14077DE70(v9, 0x7FFFFFFFLL, 1483763280LL, (char *)v8 + 24);
  if ( v15 >= 0 )
  {
    do
    {
      if ( v22 > (unsigned int)v13 )
      {
        v13 = v22;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x58706E50u);
        Pool2 = (void *)ExAllocatePool2(256LL, v13, 1483763280LL);
        if ( !Pool2 )
        {
          v15 = -1073741670;
          goto LABEL_18;
        }
      }
      v22 = 0;
      if ( a2 )
        v16 = sub_14077DA5C(qword_140D00AC0, a1, a2, a3, v9, a4, (__int64)v19, (__int64)Pool2, v13, (__int64)&v22, 0);
      else
        v16 = sub_14077DF24(qword_140D00AC0, a3, v9, a4, (__int64)v19, (__int64)Pool2, v13, (__int64)&v22);
      v15 = v16;
    }
    while ( v16 == -1073741789 );
    if ( v16 >= 0 )
    {
      *((_DWORD *)v8 + 8) = v19[0];
      *((_DWORD *)v8 + 9) = v22;
      *((_QWORD *)v8 + 5) = Pool2;
      return (unsigned int)v15;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x58706E50u);
  }
  if ( v15 == -1073741275 )
  {
    return 0;
  }
  else
  {
LABEL_18:
    v18 = (void *)*((_QWORD *)v8 + 3);
    if ( v18 )
      ExFreePoolWithTag(v18, 0x58706E50u);
  }
  return (unsigned int)v15;
}
