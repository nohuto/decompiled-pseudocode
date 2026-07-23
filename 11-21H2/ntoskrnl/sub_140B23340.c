/*
 * XREFs of sub_140B23340 @ 0x140B23340
 * Callers:
 *     sub_140B23270 @ 0x140B23270 (sub_140B23270.c)
 * Callees:
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_140B23340(_QWORD *a1)
{
  int v2; // edx
  UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF
  void *v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)(&v4.MaximumLength + 1) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v2 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v4.Buffer = L"Control\\Pnp";
    *(_DWORD *)&v4.Length = 1572886;
    v2 = sub_14067A8B0(&v6, v5, &v4, 1u, 0, 0LL);
    if ( v2 >= 0 )
      *a1 = v6;
  }
  return (unsigned int)v2;
}
