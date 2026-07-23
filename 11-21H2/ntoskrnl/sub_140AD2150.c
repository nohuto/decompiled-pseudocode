/*
 * XREFs of sub_140AD2150 @ 0x140AD2150
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 */

__int64 __fastcall sub_140AD2150(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(); // rdx
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, unsigned __int64); // r8
  __int64 v5; // r10
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v1 = sub_140AB9010(a1);
  if ( *(_QWORD *)(v1 + 1992) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(v1 + 608))(v1 + 1992, 0LL);
  v2 = (__int64 (__fastcall *)())v1;
  v3 = *(_QWORD *)(v1 + 1936);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))(v1 + 240);
  v5 = *(unsigned int *)(v1 + 1964);
  v6 = *(_QWORD *)(v1 + 1944);
  v7 = (unsigned __int64)&v12 ^ v3;
  do
  {
    v8 = *(_QWORD *)v2 ^ v7;
    *(_QWORD *)v2 = v8;
    v7 = __ROR8__(v8, 3);
    v2 = (__int64 (__fastcall *)())((char *)v2 + 8);
  }
  while ( (unsigned __int64)v2 < (unsigned __int64)sub_140AD2150 );
  v9 = (unsigned __int64 *)&loc_140AD21D6;
  do
  {
    v10 = *v9 ^ v7;
    *v9 = v10;
    v7 = __ROR8__(v10, 5);
    ++v9;
  }
  while ( (unsigned __int64)v9 < v1 + v5 - 7 );
  return v4(v3, v6, v4, v7);
}
