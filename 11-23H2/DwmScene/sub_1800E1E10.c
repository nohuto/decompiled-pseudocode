/*
 * XREFs of sub_1800E1E10 @ 0x1800E1E10
 * Callers:
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     sub_1800E1F58 @ 0x1800E1F58 (sub_1800E1F58.c)
 *     sub_1800E2F50 @ 0x1800E2F50 (sub_1800E2F50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1E10(int a1, int a2, int a3, int a4, _QWORD *a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; // r11d
  int v9; // r10d
  unsigned __int8 v10; // si
  int v11; // r13d
  unsigned int v12; // ebp
  __int64 result; // rax
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  char v16; // r14

  v8 = a3;
  v9 = a1;
  if ( a4 == 1 )
  {
    v10 = 1;
    v11 = 1;
  }
  else
  {
    v10 = 0;
    v11 = 3;
  }
  v12 = 0;
  result = 2 * (unsigned int)v10;
  v14 = 0;
  v15 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a5 && v14 == 100 * (v14 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 40LL))(*a5);
        v9 = a1;
        v8 = a3;
      }
      v16 = v10 && (v12 & 1) != 0;
      sub_1800E2F50(v9, v8, v12, v12 + 1, v12 + 2, v16, a7, a8);
      result = sub_1800E1F58(a1, v12, v12 + 1, v12 + 2, v16, a6);
      v8 = a3;
      v12 += v11;
      ++v14;
    }
    while ( v12 < v15 );
  }
  return result;
}
