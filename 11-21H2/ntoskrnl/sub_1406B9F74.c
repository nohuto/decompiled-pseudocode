/*
 * XREFs of sub_1406B9F74 @ 0x1406B9F74
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_14024011C @ 0x14024011C (sub_14024011C.c)
 *     sub_14024013C @ 0x14024013C (sub_14024013C.c)
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_140937128 @ 0x140937128 (sub_140937128.c)
 */

int __fastcall sub_1406B9F74(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rdx
  struct _ECP_LIST *v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  UNICODE_STRING *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, v4 - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(v4) = sub_1406B9FD4(a1, a2);
  }
  else if ( v4 > 2 )
  {
    v8 = *(struct _ECP_LIST **)(a1 + 112);
    v12 = 0LL;
    LODWORD(v4) = sub_14024013C(v8, (PVOID *)&v12);
    if ( (v4 & 0x80000000) != 0LL
      || (v9 = sub_14024011C((__int64)v12),
          v10 = sub_140937128(a2 + 88, v9 + 16),
          LODWORD(v4) = sub_1406B9BC0(v10, a2, a1, v12),
          (v4 & 0x80000000) != 0LL) )
    {
      *(_DWORD *)(a1 + 48) = v4;
    }
  }
  return v4;
}
