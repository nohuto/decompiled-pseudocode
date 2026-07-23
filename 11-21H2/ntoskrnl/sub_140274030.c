/*
 * XREFs of sub_140274030 @ 0x140274030
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_140274720 @ 0x140274720 (sub_140274720.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_140274030(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 *v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v7; // cl
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v13[8]; // [rsp+28h] [rbp-30h] BYREF

  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8 * ((v3 >> 3) & 0x1FF));
      v11 = v4 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v4;
      v4 = v11;
      if ( (v10 & 0x42) != 0 )
        v4 = v11 | 0x42;
    }
  }
  v12 = v4;
  v5 = (unsigned __int64 *)(48 * (((unsigned __int64)sub_140317A10(&v12) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  result = (unsigned __int64)*(unsigned int *)v5 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    sub_140274720(0xFFFFFFFFFFLL, a2, v13);
    v7 = 8;
    while ( 1 )
    {
      result = --v7;
      v8 = v13[v7];
      if ( v8 )
        break;
      if ( !v7 )
        return result;
    }
    result = *v5 & 0xFFFFFFFFFFFE000FuLL;
    *v5 = result | (16 * (v8 & 0x3FF | ((unsigned __int64)(v7 & 7) << 10)));
  }
  return result;
}
