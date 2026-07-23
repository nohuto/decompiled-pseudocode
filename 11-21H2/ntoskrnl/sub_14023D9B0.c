/*
 * XREFs of sub_14023D9B0 @ 0x14023D9B0
 * Callers:
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 * Callees:
 *     sub_14023DA18 @ 0x14023DA18 (sub_14023DA18.c)
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 */

__int64 __fastcall sub_14023D9B0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  v5 = v3 << 20;
  sub_14023DA18(a1);
  return sub_140366D64(&v6, &v5, 0x8000LL);
}
