/*
 * XREFs of sub_14080EB6C @ 0x14080EB6C
 * Callers:
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_14080EA40 @ 0x14080EA40 (sub_14080EA40.c)
 * Callees:
 *     sub_140767E88 @ 0x140767E88 (sub_140767E88.c)
 */

__int64 __fastcall sub_14080EB6C(unsigned int **a1, __int64 a2)
{
  unsigned int *v3; // rcx
  unsigned int v4; // r11d
  __int64 v5; // rdx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v8 = 0LL;
  if ( sub_140767E88(v3, a2, (__int64)&v8) )
  {
    v5 = v8;
    v6 = *(_DWORD *)(v8 + 16);
    if ( (v6 & 1) != 0 )
    {
      --(*a1)[2];
      v6 = *(_DWORD *)(v5 + 16);
    }
    *(_DWORD *)(v5 + 16) = v6 | 1;
    ++(*a1)[2];
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v4;
}
