/*
 * XREFs of sub_1406AFD10 @ 0x1406AFD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406AFD10(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  char v4; // di
  int v5; // ecx
  _BYTE *v6; // rcx
  __int64 v8; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h]

  v3 = (_QWORD *)a1;
  v8 = 0LL;
  Object = 0LL;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v4 )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v3;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = v4;
  v5 = sub_14072B3B0(a1, (_DWORD)ObjectType, a3, v4);
  if ( v5 >= 0 )
  {
    v6 = Object;
    *((_QWORD *)Object + 12) = 0LL;
    v6[104] = 0;
    *((_QWORD *)v6 + 11) = 0LL;
    v5 = sub_140729C30(v6, 0LL, 0, 0LL, (__int64)&v8);
    if ( v5 >= 0 )
      *v3 = v8;
  }
  return (unsigned int)v5;
}
