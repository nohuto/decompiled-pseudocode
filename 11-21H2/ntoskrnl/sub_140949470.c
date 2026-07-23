/*
 * XREFs of sub_140949470 @ 0x140949470
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140949470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rbx
  const WCHAR *i; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r11
  _QWORD *v11; // rcx
  int v13; // [rsp+60h] [rbp-59h] BYREF
  int v14; // [rsp+64h] [rbp-55h] BYREF
  int v15; // [rsp+68h] [rbp-51h] BYREF
  int v16; // [rsp+6Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  wchar_t Str1[40]; // [rsp+80h] [rbp-39h] BYREF

  DestinationString = 0LL;
  v14 = 0;
  Pool2 = 0LL;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  for ( i = (const WCHAR *)a2;
        !sub_140789040(i) && RtlInitUnicodeStringEx(&DestinationString, i) >= 0;
        i = (const WCHAR *)Pool2 )
  {
    v8 = sub_140779C10((__int64)&DestinationString, 0x746C6644u);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      break;
    }
    if ( i != (const WCHAR *)a2 )
    {
      v13 = 78;
      if ( (int)sub_14077CD90(
                  *(__int64 *)&qword_140D00AC0,
                  (__int64)i,
                  0LL,
                  37,
                  (__int64)&v14,
                  (__int64)Str1,
                  (__int64)&v13,
                  0) < 0
        || v14 != 1
        || v13 != 78
        || wcsicmp(Str1, *(const wchar_t **)(a3 + 8)) )
      {
        break;
      }
    }
    if ( !Pool2 )
    {
      Pool2 = ExAllocatePool2(256LL, 400LL, 1198550608LL);
      if ( !Pool2 )
        return 0LL;
    }
    if ( (int)sub_14077DA5C(
                a1,
                (__int64)i,
                1,
                0,
                0LL,
                (__int64)qword_140010918,
                (__int64)&v15,
                Pool2,
                400,
                (__int64)&v16,
                0) < 0 )
      goto LABEL_24;
    if ( v15 != 18 )
      break;
    *(_WORD *)(Pool2 + 398) = 0;
    if ( !wcsicmp((const wchar_t *)Pool2, *(const wchar_t **)a3) )
    {
      v9 = ExAllocatePool2(256LL, 416LL, 1198550608LL);
      if ( v9 )
      {
        if ( (int)sub_1402E0978((_WORD *)(v9 + 16), 0x190uLL, a2) < 0 )
        {
          ExFreePoolWithTag(v10, 0x47706E50u);
        }
        else
        {
          v11 = *(_QWORD **)(a3 + 24);
          if ( *v11 != a3 + 16 )
            __fastfail(3u);
          *v10 = a3 + 16;
          v10[1] = v11;
          *v11 = v10;
          *(_QWORD *)(a3 + 24) = v10;
        }
      }
      break;
    }
  }
  if ( !Pool2 )
    return 0LL;
LABEL_24:
  ExFreePoolWithTag((PVOID)Pool2, 0x47706E50u);
  return 0LL;
}
