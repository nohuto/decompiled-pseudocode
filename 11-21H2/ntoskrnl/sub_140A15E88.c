/*
 * XREFs of sub_140A15E88 @ 0x140A15E88
 * Callers:
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 * Callees:
 *     sub_140A171B8 @ 0x140A171B8 (sub_140A171B8.c)
 */

void __fastcall sub_140A15E88(__int64 *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *a1 )
  {
    if ( *a1 == -1 )
    {
      *a1 = 0LL;
    }
    else
    {
      v2 = *a1;
      sub_140A171B8(&v2);
      *a1 = 0LL;
    }
  }
}
