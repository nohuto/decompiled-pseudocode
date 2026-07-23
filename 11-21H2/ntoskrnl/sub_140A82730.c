/*
 * XREFs of sub_140A82730 @ 0x140A82730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140A925E8 @ 0x140A925E8 (sub_140A925E8.c)
 *     sub_140A92668 @ 0x140A92668 (sub_140A92668.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_140A82730(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        const void *a7)
{
  const void *v7; // rdi
  __int64 v9; // rbp
  unsigned int v11; // r15d
  __int64 result; // rax
  unsigned __int8 v14; // cl
  __int64 v15; // r8
  __int64 v16; // rbp
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+30h] [rbp-C8h]
  int v20; // [rsp+34h] [rbp-C4h]
  int v21; // [rsp+38h] [rbp-C0h]
  __int64 v22; // [rsp+40h] [rbp-B8h]
  __int64 v23; // [rsp+48h] [rbp-B0h]
  char v24[96]; // [rsp+50h] [rbp-A8h] BYREF

  v7 = *(const void **)a1;
  v9 = *(_QWORD *)(a1 + 240);
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  v21 = *(_DWORD *)(a5 + 96);
  v23 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v22 = *(_QWORD *)(a5 + 104);
  v20 = *(_DWORD *)(a5 + 4) & 0x8000000;
  result = sub_140A925E8(a3, a4);
  v14 = *a4;
  v15 = (unsigned int)result;
  v19 = result;
  if ( (*a4 < 3u || v14 > 4u && (v14 <= 0xDu || v14 > 0xFu && v14 != 22)) && *(_DWORD *)(v9 + 56) == 2 )
  {
    v16 = *(unsigned __int8 *)(a1 + 60);
    if ( (unsigned __int8)v16 >= 2u && (*(_DWORD *)(a1 + 56) & 0x2000000) == 0 )
    {
      sub_140A92CE0(769LL);
      if ( (int)sub_1403BF7F4(v24, 91LL, (__int64)"CulpritAddress = %p, Irp = %p, IRQL = %u.\n", a7, v7, v16) >= 0 )
        sub_1405FDF9C(v24);
      result = sub_140A92D34(769LL, a7, v7, v16);
      *(_DWORD *)(a1 + 56) |= 0x2000000u;
      v15 = v19;
    }
  }
  if ( a3 )
  {
    v17 = *(_DWORD *)(a5 + 4);
    if ( (*(_BYTE *)(a1 + 56) & 0x20) != 0 && (v17 & 0x1000000) == 0 )
    {
      if ( (_DWORD)v15 && !v20 )
      {
        *(_DWORD *)(a5 + 4) = v17 | 0x1000000;
        sub_1405FFB44(0x212u, a7, v7);
      }
      if ( v11 != v21 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        v18 = 571;
        if ( a4[1] != 0xFF )
          v18 = 531;
        sub_1405FFB44(v18, a7, v7);
      }
      if ( v23 != v22 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        sub_1405FFB44(0x214u, a7, v7);
      }
    }
    result = sub_140A92668(a4, v11, v15);
    if ( !(_DWORD)result )
      return sub_1405FFD00(768LL, a7, v7, v11);
  }
  return result;
}
