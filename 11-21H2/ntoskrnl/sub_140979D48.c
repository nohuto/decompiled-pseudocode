/*
 * XREFs of sub_140979D48 @ 0x140979D48
 * Callers:
 *     sub_140979918 @ 0x140979918 (sub_140979918.c)
 * Callees:
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_1409B3D44 @ 0x1409B3D44 (sub_1409B3D44.c)
 */

__int64 __fastcall sub_140979D48(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR *v6; // rax
  int v7; // r8d
  _BYTE *v8; // r9
  int v9; // r10d
  __int64 v10; // r11
  ULONG_PTR v11; // rdx
  BOOL v12; // ebx
  __int64 result; // rax

  v6 = (ULONG_PTR *)sub_14032A72C(a1);
  if ( v6 == &StartContext )
    LODWORD(v11) = 0;
  else
    v11 = v6[22];
  v12 = 0;
  if ( a5 >= 4 )
    v12 = (*v8 & 1) != 0;
  result = sub_1409B3D44(
             v9,
             v11,
             a2[6] << 12,
             ((a2[7] << 12) | 0xFFFu) - (a2[6] << 12) + 1,
             v7 == 17,
             v10,
             a5,
             (__int64)(a2 + 18));
  if ( (int)result >= 0 )
  {
    if ( v12 )
      a2[16] |= 4u;
    return 0LL;
  }
  return result;
}
