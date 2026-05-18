/*
 * XREFs of sub_1800CC7B4 @ 0x1800CC7B4
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180055188 @ 0x180055188 (sub_180055188.c)
 */

__int64 **__fastcall sub_1800CC7B4(__int64 **a1, __int64 a2, int *a3, int *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  int v11; // ebx
  __int64 **result; // rax

  v8 = (__int64 *)sub_18001C190();
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    sub_180055188(v8, a2);
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
