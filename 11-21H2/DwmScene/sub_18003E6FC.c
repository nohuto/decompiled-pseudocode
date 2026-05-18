/*
 * XREFs of sub_18003E6FC @ 0x18003E6FC
 * Callers:
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18006C254 @ 0x18006C254 (sub_18006C254.c)
 *     sub_1800A573C @ 0x1800A573C (sub_1800A573C.c)
 *     sub_1800A585C @ 0x1800A585C (sub_1800A585C.c)
 * Callees:
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 */

__int64 *__fastcall sub_18003E6FC(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rax

  v2 = a2;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL || a2 <= 0 )
  {
LABEL_5:
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v4 = sub_18001D6AC(16 * v2, (__int64)&unk_1801289A6);
      if ( v4 )
        break;
      v2 >>= 1;
      if ( !v2 )
        goto LABEL_5;
    }
    *a1 = v4;
    a1[1] = v2;
  }
  return a1;
}
