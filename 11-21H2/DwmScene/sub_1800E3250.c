/*
 * XREFs of sub_1800E3250 @ 0x1800E3250
 * Callers:
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18005C750 @ 0x18005C750 (sub_18005C750.c)
 */

__int64 **__fastcall sub_1800E3250(__int64 **a1, __int64 a2, int *a3, int *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  int v11; // ebx
  __int64 **result; // rax

  v8 = (__int64 *)sub_18001D684();
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    sub_18005C750(v8, a2);
    *((_DWORD *)v9 + 2) = v11;
    *((_DWORD *)v9 + 3) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  result = a1;
  *a1 = v9;
  return result;
}
