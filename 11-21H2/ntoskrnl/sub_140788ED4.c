/*
 * XREFs of sub_140788ED4 @ 0x140788ED4
 * Callers:
 *     sub_1406D04CC @ 0x1406D04CC (sub_1406D04CC.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_140789210 @ 0x140789210 (sub_140789210.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_140A28D58 @ 0x140A28D58 (sub_140A28D58.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_140789084 @ 0x140789084 (sub_140789084.c)
 */

NTSTATUS __fastcall sub_140788ED4(__int64 a1, const WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  unsigned __int64 v4; // rbx
  NTSTATUS result; // eax
  int v10; // ecx
  unsigned int v11; // eax
  const WCHAR *v12; // r8
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v16[400]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v13 = 0;
  v14 = 0;
  *a4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)sub_140789040(a2) )
    return -1073741810;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    v10 = sub_140789084(a1, (unsigned int)&DestinationString, 1, (unsigned int)v16);
    if ( v10 == -1073741810 )
    {
      if ( (int)sub_14077DA5C(
                  a1,
                  (__int64)a2,
                  1,
                  0,
                  0LL,
                  (__int64)qword_140010918,
                  (__int64)&v14,
                  (__int64)v16,
                  400,
                  (__int64)&v13,
                  0) < 0 )
      {
        *a4 = 13;
        if ( (unsigned int)v4 >= 0xD )
        {
          v12 = L"HTREE\\ROOT\\0";
          return sub_1402E0340(a3, v4, v12, 0LL, 0LL, 2304);
        }
        return -1073741789;
      }
      v11 = v13 >> 1;
      v13 >>= 1;
    }
    else
    {
      result = v10;
      if ( v10 < 0 )
        return result;
      v11 = v13;
    }
    *a4 = v11;
    if ( (unsigned int)v4 >= v11 )
    {
      v12 = (const WCHAR *)v16;
      return sub_1402E0340(a3, v4, v12, 0LL, 0LL, 2304);
    }
    return -1073741789;
  }
  return result;
}
