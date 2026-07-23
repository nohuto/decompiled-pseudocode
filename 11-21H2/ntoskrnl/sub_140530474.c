/*
 * XREFs of sub_140530474 @ 0x140530474
 * Callers:
 *     sub_140532C98 @ 0x140532C98 (sub_140532C98.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405330B8 @ 0x1405330B8 (sub_1405330B8.c)
 */

__int64 __fastcall sub_140530474(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  unsigned int v3; // ebx
  int v5; // esi
  _DWORD *v6; // rdi
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // edx
  _QWORD v11[16]; // [rsp+50h] [rbp-88h] BYREF

  v2 = *(_QWORD **)(a2 + 8);
  v3 = 0;
  v5 = a1;
  v6 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v6 + 4) == *(_DWORD *)(a1 + 160) )
    {
      memset(v11, 0, 0x78uLL);
      LOBYTE(v7) = 1;
      v8 = v2[2];
      v9 = *((unsigned __int16 *)v6 + 6);
      LODWORD(v11[6]) = *(_DWORD *)a2;
      v11[5] = v8;
      v11[0] = 0x200000001LL;
      sub_1405330B8(v5, v9, 0, v7, (__int64)v11, 0, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
