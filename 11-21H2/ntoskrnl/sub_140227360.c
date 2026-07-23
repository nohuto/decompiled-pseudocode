/*
 * XREFs of sub_140227360 @ 0x140227360
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140269FA8 @ 0x140269FA8 (sub_140269FA8.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402D01A8 @ 0x1402D01A8 (sub_1402D01A8.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_140227360(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  BOOL v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)a1[21];
  v13 = 0;
  v5 = sub_140317A10(a2);
  v6 = v5;
  if ( (v5 & 1) != 0 && (v5 & 0x80u) == 0LL )
  {
    if ( (unsigned int)sub_1402D01A8(a1, a2) )
    {
      v8 = a1[2];
      if ( (unsigned int)sub_1403146E0(a1[3], (__int64)((_QWORD)a2 << 25) >> 16, 0LL, &v13, 0LL, 0LL) )
      {
        if ( v13 )
          sub_1402CF280(v8, (__int64)((_QWORD)a2 << 25) >> 16, 1LL, 0LL);
        v9 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v10 = 0;
        if ( (unsigned int)sub_140317A80(a2) )
          v10 = sub_140229550(v12, v11) != 0;
        *a2 = v9;
        if ( v10 )
          sub_1402294F0(a2, v9);
        sub_140269FA8(v8, 0LL);
        _bittestandset64(v2 + 3, ((unsigned __int64)a2 >> 3) & 0x1FF);
        if ( !*v2 )
          *v2 = a2;
      }
    }
  }
  return 0LL;
}
