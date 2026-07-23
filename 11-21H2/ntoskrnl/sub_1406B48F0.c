/*
 * XREFs of sub_1406B48F0 @ 0x1406B48F0
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D02F0 @ 0x1402D02F0 (sub_1402D02F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406B48F0(ULONG_PTR BugCheckParameter1, __int64 a2, void *a3, unsigned int a4, _DWORD *a5)
{
  size_t v5; // rdi
  __int64 result; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // [rsp+40h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD Src[12]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-58h] BYREF
  _OWORD v20[3]; // [rsp+C8h] [rbp-50h] BYREF

  v5 = a4;
  memset(Src, 0, 0x58uLL);
  Object = 0LL;
  v14 = 0;
  memset(v20, 0, sizeof(v20));
  if ( (_DWORD)v5 != 48 && (_DWORD)v5 != 88 )
    return 3221225476LL;
  result = sub_140732D40(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = (_QWORD *)*((_QWORD *)Object + 173);
    Src[0] = v10[24];
    Src[1] = v10[8];
    Src[4] = v10[40];
    Src[6] = v10[56];
    Src[5] = -1LL;
    sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v20, v9);
    v11 = sub_1402D02F0(&v19, &v18, &v17, &Src[2], &Src[3], &v14);
    sub_1402D0930((__int64)v20, 0LL);
    v12 = 2 - ((v14 & 4) != 0);
    if ( (v14 & 1) != 0 )
      v13 = v12 | 4;
    else
      v13 = v12 | 8;
    LODWORD(Src[10]) = v13;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( v11 >= 0 )
    {
      memmove(a3, Src, v5);
      if ( a5 )
        *a5 = v5;
    }
    return (unsigned int)v11;
  }
  return result;
}
