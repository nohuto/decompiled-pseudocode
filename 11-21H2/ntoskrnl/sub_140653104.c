/*
 * XREFs of sub_140653104 @ 0x140653104
 * Callers:
 *     sub_140652F10 @ 0x140652F10 (sub_140652F10.c)
 * Callees:
 *     sub_140652C28 @ 0x140652C28 (sub_140652C28.c)
 *     sub_140652C64 @ 0x140652C64 (sub_140652C64.c)
 *     sub_14065355C @ 0x14065355C (sub_14065355C.c)
 *     sub_1406536F0 @ 0x1406536F0 (sub_1406536F0.c)
 */

__int64 __fastcall sub_140653104(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v4; // r14d
  unsigned __int16 v8; // di
  unsigned int v9; // eax
  unsigned int v10; // r9d
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  char v13; // r9
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v4 = *a3;
  LOWORD(v15) = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( (dword_140C10CC0 & 1) != 0 )
    {
      v9 = sub_1406536F0(a1, a4, a2, (unsigned __int16)v4, (__int64)&v15);
      v10 = v9;
      if ( v9 != 261 )
      {
        if ( !v9 )
        {
          dword_140C10CF4 = 7;
          if ( (unsigned __int16)v15 >= 3u )
          {
            *a3 = v15;
            return v10;
          }
        }
        goto LABEL_17;
      }
      v8 = v15;
    }
    if ( (unsigned int)sub_14065355C(a1, a4, 2LL) )
      goto LABEL_17;
    v11 = sub_140652C28(a1, 1u);
    LOBYTE(a1) = v11 >> 6;
    if ( (v11 & 0x80u) != 0 )
      goto LABEL_17;
    if ( (v11 & 0x40) == 0 )
      break;
    if ( (unsigned int)sub_14065355C(a1, a4, 1LL) )
      goto LABEL_17;
    sub_140652C28(a1, 0);
    sub_140652C64(v12, 0, 0x68u);
    a1 = v8;
    if ( v8 <= v4 - 1 )
    {
      a1 = v8++;
      LOWORD(v15) = v8;
      *(_BYTE *)(a1 + a2) = v13;
    }
  }
  if ( !(unsigned int)sub_14065355C(a1, a4, 1LL) )
  {
    sub_140652C28(a1, 0);
    dword_140C10CF4 = 7;
    if ( v8 >= 3u )
    {
      *a3 = v8;
      return 0;
    }
  }
LABEL_17:
  *a3 = 0;
  sub_140652C64(a1, 1u, 0x60u);
  return v10;
}
