/*
 * XREFs of sub_14056C810 @ 0x14056C810
 * Callers:
 *     sub_1405C7284 @ 0x1405C7284 (sub_1405C7284.c)
 * Callees:
 *     sub_14030A3C0 @ 0x14030A3C0 (sub_14030A3C0.c)
 */

int *__fastcall sub_14056C810(
        __int64 a1,
        char a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        __int64 *a6,
        int *a7)
{
  int v7; // edi
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  int *result; // rax
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v7 = 2;
  v12[0] = 0LL;
  v8 = *(_BYTE *)(a1 + 33) == 0;
  v9 = qword_140C2B1A0;
  v13 = 2;
  if ( v8 )
  {
    sub_14030A3C0(a1, 0, a5, a3, a4, v12, &v13);
    if ( v9 <= v12[0] )
      v9 = v12[0];
    goto LABEL_9;
  }
  if ( a2 )
  {
    if ( !(_BYTE)dword_140D05304 && !dword_140D31000 )
    {
      sub_14030A3C0(a1, 1u, a5, a3, a4, v12, &v13);
      if ( a5 + (unsigned int)dword_140C2B1C8 < v12[0] )
      {
        v9 = v12[0];
LABEL_9:
        v7 = v13;
      }
    }
  }
  v10 = -1LL;
  if ( v9 != -1LL )
  {
    if ( v9 <= a5 )
      v10 = 0LL;
    else
      v10 = v9 - a5;
  }
  *a6 = v10;
  result = a7;
  *a7 = v7;
  return result;
}
