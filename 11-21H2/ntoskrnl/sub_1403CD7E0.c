/*
 * XREFs of sub_1403CD7E0 @ 0x1403CD7E0
 * Callers:
 *     sub_14051A670 @ 0x14051A670 (sub_14051A670.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140846F90 @ 0x140846F90 (sub_140846F90.c)
 *     sub_140846FD8 @ 0x140846FD8 (sub_140846FD8.c)
 */

__int64 __fastcall sub_1403CD7E0(void *Src, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  result = sub_140846FD8(Src, &v9);
  if ( (int)result >= 0 )
  {
    v6 = (void *)sub_1403B1F04(v5, v9);
    *a2 = (__int64)v6;
    if ( v6 )
    {
      v8 = sub_140846F90(Src, v6);
      if ( v8 < 0 )
      {
        sub_1403B1B5C(v7, *a2);
        *a2 = 0LL;
      }
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
