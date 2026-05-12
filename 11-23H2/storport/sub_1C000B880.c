/*
 * XREFs of sub_1C000B880 @ 0x1C000B880
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C000E38C @ 0x1C000E38C (sub_1C000E38C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C000B880(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r11d
  __int64 v9; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbp
  __int64 v13; // r14
  int v14; // r15d
  int v15; // r12d
  __int64 *v16; // rdi
  __int64 v17; // r13
  unsigned int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned int v21; // eax
  _QWORD Dst[8]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v24[64]; // [rsp+A0h] [rbp-88h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v6 = sub_1C000E2EC(a1);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    return 3238002694LL;
  v9 = *a3;
  v10 = *((_DWORD *)a3 + 2);
  v11 = *((_DWORD *)a3 + 4);
  v12 = a3[3];
  v13 = a3[4];
  v14 = *((_DWORD *)a3 + 10);
  v15 = *((_DWORD *)a3 + 12);
  v16 = a3 + 8;
  v17 = *(v16 - 1);
  switch ( a2 )
  {
    case 'U':
      goto LABEL_3;
    case 'V':
      goto LABEL_11;
    case ':':
LABEL_3:
      v18 = 2;
      break;
    case ';':
LABEL_11:
      v18 = 4;
      break;
    default:
      v18 = 8;
      break;
  }
  v19 = v18;
  do
  {
    v20 = *v16;
    v16 += 2;
    Dst[v7++] = v20;
    Dst[v7 + 7] = *(v16 - 1);
    --v19;
  }
  while ( v19 );
  v21 = sub_1C000E38C(v8, v9, v10, v11, v12, v13, v14, v15, v17, v18, (__int64)Dst, (__int64)v24);
  return sub_1C000E318(v21);
}
