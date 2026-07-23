/*
 * XREFs of sub_14091CFF0 @ 0x14091CFF0
 * Callers:
 *     sub_14091CF4C @ 0x14091CF4C (sub_14091CF4C.c)
 * Callees:
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 *     sub_140914D00 @ 0x140914D00 (sub_140914D00.c)
 */

__int64 __fastcall sub_14091CFF0(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // eax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  ULONG_PTR v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  sub_14071B250(a1);
  v6 = sub_140914D00(a1, &v10);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a3 + 24);
    v8 = (_QWORD *)(v10 + 120);
    if ( *v7 != a3 + 16 )
      __fastfail(3u);
    *v8 = a3 + 16;
    v8[1] = v7;
    *v7 = v8;
    *(_QWORD *)(a3 + 24) = v8;
    v6 = 0;
  }
  *(_DWORD *)(a3 + 8) = v6;
  LOBYTE(v3) = v6 < 0;
  return v3;
}
