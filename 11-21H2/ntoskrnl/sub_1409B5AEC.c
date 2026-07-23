/*
 * XREFs of sub_1409B5AEC @ 0x1409B5AEC
 * Callers:
 *     sub_1409AFB7C @ 0x1409AFB7C (sub_1409AFB7C.c)
 * Callees:
 *     sub_140354968 @ 0x140354968 (sub_140354968.c)
 */

__int64 __fastcall sub_1409B5AEC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  result = sub_140354968(v3, *(_QWORD *)(a1 + 32), (__int64 *)&v11);
  if ( (int)result >= 0 )
  {
    result = sub_140354968(v6, *(_QWORD *)(v7 + 24), (__int64 *)&v12);
    if ( (int)result >= 0 )
    {
      v9 = v11;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 || v12 < 0x1000 || (v12 & 0xFFF) != 0 || v12 > v11 )
      {
        return 3221225485LL;
      }
      else
      {
        v10 = (v12 / 5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        *v8 = v10;
        if ( v9 < v10 + 0x2000 )
          v9 = v10 + 0x2000;
        result = (unsigned int)result;
        *a2 = v9;
      }
    }
  }
  return result;
}
