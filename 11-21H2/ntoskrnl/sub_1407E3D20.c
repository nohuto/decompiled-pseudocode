/*
 * XREFs of sub_1407E3D20 @ 0x1407E3D20
 * Callers:
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall sub_1407E3D20(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, char *a5, unsigned int Size)
{
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  int v15; // [rsp+24h] [rbp-14h]

  if ( *(_QWORD *)(a1 + 296) )
  {
    if ( Size < 0x20 )
      return 2147483653LL;
    a4[3] = *(_QWORD *)(a2 + 32);
  }
  v8 = 0;
  v15 = 0;
  while ( v8 < (*(_DWORD *)(a1 + 324) >> 10) + 1 )
  {
    v9 = *a3 - (v8 << 10);
    v10 = v9 + 7;
    if ( v9 >= v9 + 7 || v10 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v11 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v9 = *(_BYTE *)v9;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v9 != v11 );
    v8 = ++v15;
  }
  v12 = *a3;
  v13 = *a3 - 32;
  *a3 = v13;
  if ( (v13 & 0xF) != 0 )
    v14 = (_QWORD *)(v12 - 48);
  else
    v14 = (_QWORD *)(v12 - 40);
  *a3 = (__int64)v14;
  *v14 = a5 + 16;
  memmove(a5, a4, Size);
  return 0LL;
}
