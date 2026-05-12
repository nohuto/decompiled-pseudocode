/*
 * XREFs of sub_1C00A0EE4 @ 0x1C00A0EE4
 * Callers:
 *     sub_1C00A0DEC @ 0x1C00A0DEC (sub_1C00A0DEC.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003DE0C @ 0x1C003DE0C (sub_1C003DE0C.c)
 *     sub_1C003DE44 @ 0x1C003DE44 (sub_1C003DE44.c)
 *     sub_1C003DEFC @ 0x1C003DEFC (sub_1C003DEFC.c)
 */

signed int __fastcall sub_1C00A0EE4(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  signed int result; // eax
  unsigned __int64 v7; // rax
  _WORD *v8; // r14
  __int64 v9; // r8
  __int64 v10; // rdi
  char *v11; // rax
  __int64 v12; // rdx
  _WORD *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  char Dst; // [rsp+58h] [rbp-A8h] BYREF
  char SourceString[263]; // [rsp+59h] [rbp-A7h] BYREF
  _BYTE v21[256]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(&Dst, 0, 0x104uLL);
  v14 = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  if ( !(unsigned int)sub_1C0007798(a1, 17) )
    return -1073741637;
  v7 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return -1073741789;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v7 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  *a3 = 0LL;
  v8 = a2 + 2;
  memset_0(a2 + 2, 0, 0x100uLL);
  v9 = *(_QWORD *)(a1 + 5016);
  if ( v9 )
  {
    result = sub_1C003DE0C((_WORD *)a2 + 4, 128LL, v9);
    if ( result >= 0 )
LABEL_28:
      *a3 = 264LL;
  }
  else
  {
    v17 = 1;
    v18 = 268;
    result = sub_1C001A364(a1 + 336);
    if ( result >= 0 )
    {
      if ( Dst == 1 )
      {
        result = sub_1C003DE44(SourceString, 0x7FFFFFFFLL, &v14);
        v10 = v14;
      }
      else
      {
        v11 = SourceString;
        v12 = 0x7FFFFFFFLL;
        do
        {
          if ( !*v11 )
            break;
          ++v11;
          --v12;
        }
        while ( v12 );
        result = v12 == 0 ? 0xC000000D : 0;
        v10 = (0x7FFFFFFF - v12) & -(__int64)(v12 != 0);
      }
      if ( result >= 0 )
      {
        if ( (unsigned __int64)(v10 - 1) > 0x7E )
          return -1073739509;
        v15.Buffer = (PWSTR)v21;
        v15.MaximumLength = 256;
        if ( Dst == 1 )
        {
          result = sub_1C003DEFC(&v15.Length, SourceString);
        }
        else
        {
          RtlInitAnsiString(&DestinationString, SourceString);
          result = RtlAnsiStringToUnicodeString(&v15, &DestinationString, 0);
        }
        if ( result >= 0 )
        {
          result = sub_1C003DE0C(v8, 128LL, (__int64)v21);
          if ( result >= 0 )
          {
            v13 = (_WORD *)sub_1C0007CF4(64LL, 2 * v10 + 2, 1413833042LL, *(_QWORD *)(a1 + 8));
            *(_QWORD *)(a1 + 5016) = v13;
            if ( v13 )
              sub_1C003DE0C(v13, v10 + 1, (__int64)v21);
            result = 0;
            goto LABEL_28;
          }
        }
      }
    }
  }
  return result;
}
