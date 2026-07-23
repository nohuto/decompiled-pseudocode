/*
 * XREFs of sub_14096E2E0 @ 0x14096E2E0
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 * Callees:
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096E2E0(__int64 a1, unsigned int a2, unsigned int a3, UNICODE_STRING *a4)
{
  UNICODE_STRING *v5; // rsi
  int v6; // ebx
  _BYTE *v7; // rax
  __int64 v8; // rdx
  void *v9; // rdi

  v5 = a4;
  if ( (((unsigned __int16)a3 | (unsigned __int16)a2) & 0x1FF) != 0 )
  {
    v6 = -1073741811;
  }
  else if ( a2 == a3 )
  {
    v7 = NaptrDnsRecordConvert_2(a1, 0LL, 0LL, a2, a3, a4, 0, 4);
    v5 = 0LL;
    v9 = v7;
    if ( !v7 )
      return (unsigned int)-1073741670;
    v6 = sub_14096E06C((__int64)v7, v8, a2);
    if ( v6 >= 0 )
    {
      v6 = sub_14084B418((__int64)v9);
      if ( v6 >= 0 )
        return 0;
    }
    sub_14096F074(v9);
  }
  else
  {
    v6 = -1073741637;
  }
  if ( v5 )
    ExFreePoolWithTag(v5->Buffer, 0);
  return (unsigned int)v6;
}
