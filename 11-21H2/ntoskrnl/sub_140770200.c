/*
 * XREFs of sub_140770200 @ 0x140770200
 * Callers:
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 */

__int64 __fastcall sub_140770200(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 **v8; // rax
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 **v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r9d
  __int64 result; // rax

  if ( a3 == 1 )
  {
    v8 = (__int64 **)&off_140A3AC00;
    v9 = a3 - 1 + 33;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_9;
    v8 = &off_140A39560;
    v9 = 9;
  }
  v10 = 0;
  do
  {
    v11 = v8;
    if ( *((_DWORD *)v8 + 3) == a5 )
      break;
    v11 = 0LL;
    ++v10;
    v8 += 3;
  }
  while ( v10 < v9 );
  if ( v11 && *v11 )
  {
    v12 = sub_14077A710(a3);
    sub_1407720B8(a1, a2, v12, v14, 0LL, v13);
  }
LABEL_9:
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return sub_14042A5E0(a1, a2);
  return result;
}
