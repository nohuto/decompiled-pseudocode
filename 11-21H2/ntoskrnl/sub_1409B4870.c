/*
 * XREFs of sub_1409B4870 @ 0x1409B4870
 * Callers:
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

int __fastcall sub_1409B4870(__int64 a1)
{
  __int64 *v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 **v5; // rax

  v1 = (__int64 *)(a1 + 56);
  v3 = *(__int64 **)(a1 + 56);
  if ( v3 == v1 )
  {
    ++*(_DWORD *)(a1 + 72);
  }
  else
  {
    v4 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || (v5 = (__int64 **)v3[1], *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (__int64)v5;
    *v3 = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    LODWORD(v1) = KeSetEvent((PRKEVENT)(v3 + 2), 0, 0);
  }
  return (int)v1;
}
