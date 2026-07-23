/*
 * XREFs of sub_14056FA60 @ 0x14056FA60
 * Callers:
 *     sub_140570394 @ 0x140570394 (sub_140570394.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14056FA60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  char v7; // dl
  char v8; // al
  __int64 v9; // rcx
  __int16 v10; // r8
  _OWORD v11[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( _bittest64(&qword_140D068D8, 0x37u) )
  {
    v5 = a1[30];
    if ( v5 )
    {
      v6 = a1[68];
      v7 = 0;
      if ( v6 == *((_QWORD *)KeGetCurrentThread() + 23) )
      {
        v8 = 1;
      }
      else
      {
        sub_14030D5C0(v6, 0LL, (__int64)v11, a4);
        v8 = 1;
        v7 = 1;
      }
      v9 = 0LL;
      if ( *(_QWORD *)(v6 + 1408) )
      {
        v10 = *(_WORD *)(v6 + 2412);
        if ( v10 != 332 && v10 != 452 )
          v8 = 0;
        if ( v8 )
          v9 = v5 + 0x2000;
      }
      *(_QWORD *)(v5 + 6216) = a1[133];
      if ( v9 )
        *(_QWORD *)(v9 + 4112) = a1[133];
      if ( v7 )
        sub_1402D0930((__int64)v11, 0LL);
    }
  }
}
