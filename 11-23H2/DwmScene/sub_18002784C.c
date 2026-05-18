/*
 * XREFs of sub_18002784C @ 0x18002784C
 * Callers:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18002784C(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      v4 = (volatile signed __int32 *)*((_QWORD *)v1 + 1);
      if ( v4 )
        sub_180010574(v4);
      v1 += 16;
    }
    result = sub_1800100E8(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
