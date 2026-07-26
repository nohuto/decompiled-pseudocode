/*
 * XREFs of PktMonCompEnableCallback @ 0x1C00D3300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall PktMonCompEnableCallback(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rcx
  int v3; // edx

  result = (__int64 (*)(void))a1;
  if ( (_QWORD)xmmword_1C00F53B0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_DWORD *)(v2 + 56) ^ (*(_DWORD *)(v2 + 56) ^ *((unsigned __int8 *)result + 16)) & 1;
    *(_DWORD *)(v2 + 56) = v3;
    *(_DWORD *)(v2 + 56) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(2 * *((_BYTE *)result + 17))) & 2;
    result = qword_1C00F53A8;
    if ( qword_1C00F53A8 )
      return (__int64 (*)(void))qword_1C00F53A8();
  }
  return result;
}
