/*
 * XREFs of sub_1800E1C18 @ 0x1800E1C18
 * Callers:
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 * Callees:
 *     sub_1800E1F58 @ 0x1800E1F58 (sub_1800E1F58.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1C18(int a1, int a2, int a3, _QWORD *a4, __int64 a5)
{
  unsigned __int8 v7; // bl
  int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned int v12; // r14d
  char v13; // al

  if ( a3 == 1 )
  {
    v7 = 1;
    v8 = 1;
  }
  else
  {
    v7 = 0;
    v8 = 3;
  }
  v9 = 0;
  result = 2 * (unsigned int)v7;
  v11 = 0;
  v12 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a4 && v11 == 100 * (v11 / 0x64) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4);
      v13 = v7 && (v9 & 1) != 0;
      result = sub_1800E1F58(a1, v9, v9 + 1, v9 + 2, v13, a5);
      v9 += v8;
      ++v11;
    }
    while ( v9 < v12 );
  }
  return result;
}
