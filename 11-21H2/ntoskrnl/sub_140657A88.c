/*
 * XREFs of sub_140657A88 @ 0x140657A88
 * Callers:
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 * Callees:
 *     sub_140721F88 @ 0x140721F88 (sub_140721F88.c)
 */

__int64 __fastcall sub_140657A88(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // r10d
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( a2 && *(_QWORD *)(a1 + 240) )
  {
    v8 = 0LL;
    v4 = a1 + 208;
    while ( 1 )
    {
      v5 = sub_140721F88(v4, &v8, a3, v3);
      if ( !v5 )
        break;
      if ( *(_DWORD *)(v5 + 68) == v6 )
        return *(unsigned int *)(v5 + 72);
    }
  }
  return *(_DWORD *)(v3 + 40) >> 31;
}
