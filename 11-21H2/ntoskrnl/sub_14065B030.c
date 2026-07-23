/*
 * XREFs of sub_14065B030 @ 0x14065B030
 * Callers:
 *     sub_14065AED8 @ 0x14065AED8 (sub_14065AED8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14069F434 @ 0x14069F434 (sub_14069F434.c)
 *     sub_140722280 @ 0x140722280 (sub_140722280.c)
 */

__int64 __fastcall sub_14065B030(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3, char *a4)
{
  unsigned __int16 v8; // bp
  int v9; // ebp
  char v10; // bl
  ULONG_PTR *v11; // rax
  __int64 result; // rax
  UNICODE_STRING v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v13 = 0LL;
  RtlInitUnicodeString(&v13, 0LL);
  v8 = a3[8];
  v13.Buffer = a3 + 10;
  v9 = (v8 & 1) << 16;
  v13.Length = a3[1];
  v10 = 0;
  v13.MaximumLength = v13.Length;
  while ( ++a2 <= *(_WORD *)(a1 + 12) )
  {
    v11 = (ULONG_PTR *)sub_14069F434(a1, a2);
    result = sub_140722280(*v11, v9, 0LL, (__int64)&v14);
    if ( (int)result >= 0 )
    {
      v10 = 1;
      break;
    }
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  *a4 = v10;
  return 0LL;
}
