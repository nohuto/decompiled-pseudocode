/*
 * XREFs of sub_1405EEE8C @ 0x1405EEE8C
 * Callers:
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 * Callees:
 *     sub_1405EECF4 @ 0x1405EECF4 (sub_1405EECF4.c)
 *     sub_1405EEF88 @ 0x1405EEF88 (sub_1405EEF88.c)
 */

__int64 __fastcall sub_1405EEE8C(__int64 a1, _DWORD *a2, int a3)
{
  PVOID v3; // rbp
  _DWORD *v5; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  int v8; // esi
  _DWORD *v9; // r15
  __int64 v10; // r12
  int v11; // ecx
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]

  v13 = HIDWORD(a1);
  v3 = qword_140D068F0;
  v12 = 0;
  v5 = (_DWORD *)sub_1405EEF88((_DWORD)qword_140D068F0, (_DWORD)qword_140D068F0, (_DWORD)a2, a3, (__int64)&v12);
  if ( !v5 )
    return 3221226021LL;
  v7 = v12;
  if ( v12 > 0x32 )
    return 2147483653LL;
  v8 = (_DWORD)a2 + *a2;
  if ( v12 )
  {
    v9 = &unk_140E01AD4;
    v10 = v12;
    do
    {
      v11 = (_DWORD)v3 + v5[1];
      *(v9 - 1) = (_DWORD)v3 + *v5 - (_DWORD)a2;
      *v9 = v11 - (_DWORD)a2;
      v9[1] = v8 - (_DWORD)a2;
      v9 += 3;
      v8 += sub_1405EECF4((__int64)v3, (__int64)v5, 0LL);
      v5 += 3;
      --v10;
    }
    while ( v10 );
  }
  dword_140E01848 = 12 * v7;
  dword_140C02500 = 12 * v7;
  result = 0LL;
  qword_140C024F8 = (__int64)&unk_140E01AD0;
  return result;
}
