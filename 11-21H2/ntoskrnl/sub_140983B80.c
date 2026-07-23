/*
 * XREFs of sub_140983B80 @ 0x140983B80
 * Callers:
 *     sub_140983C8C @ 0x140983C8C (sub_140983C8C.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405ABD04 @ 0x1405ABD04 (sub_1405ABD04.c)
 *     sub_1405C4F88 @ 0x1405C4F88 (sub_1405C4F88.c)
 *     sub_1405C5930 @ 0x1405C5930 (sub_1405C5930.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 *     sub_140983AC0 @ 0x140983AC0 (sub_140983AC0.c)
 */

__int64 __fastcall sub_140983B80(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  ULONG_PTR v6; // rcx
  __int64 v7; // r9
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  _DWORD v12[53]; // [rsp+2Ch] [rbp-D4h] BYREF
  _OWORD v13[3]; // [rsp+100h] [rbp+0h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  v11 = -1;
  v10 = a1;
  result = sub_1409839C0(&v10);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; ; i = (_QWORD *)v9 )
    {
      v8 = sub_1407B6B90(i);
      v9 = (__int64)v8;
      if ( !v8 )
        break;
      if ( sub_14032A72C((__int64)v8) == *(_QWORD *)(a1 + 48) )
      {
        if ( sub_1405C4F88((__int64)&v10) )
          break;
        if ( sub_1405ABD04(v9) || *(_DWORD *)(v9 + 2140) )
        {
          sub_14030D5C0(v6, 0LL, (__int64)v13, v7);
          sub_1405C5930((__int64)&v10);
          sub_14097D7F8((__int64)&v10);
          sub_1402D0930((__int64)v13, 0LL);
        }
      }
    }
    *a2 = *(_QWORD *)&v12[49];
    sub_140983AC0((__int64)&v10);
    return 0LL;
  }
  return result;
}
