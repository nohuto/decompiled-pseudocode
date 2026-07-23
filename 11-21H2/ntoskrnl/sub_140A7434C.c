/*
 * XREFs of sub_140A7434C @ 0x140A7434C
 * Callers:
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A70244 @ 0x140A70244 (sub_140A70244.c)
 *     sub_140A7131C @ 0x140A7131C (sub_140A7131C.c)
 *     KdLogDbgPrint @ 0x140A73FF0 (KdLogDbgPrint.c)
 */

__int64 __fastcall sub_140A7434C(
        unsigned int a1,
        unsigned int a2,
        char *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // edi
  unsigned __int16 v11; // r10
  unsigned __int64 v12; // rdx
  void *v13; // rsp
  char *v14; // r9
  char v15; // bl
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _BYTE v19[480]; // [rsp+0h] [rbp-200h] BYREF
  __int128 v20; // [rsp+200h] [rbp+0h] BYREF

  v20 = 0LL;
  v8 = 101LL;
  if ( a1 < 0x9C )
    v8 = a1;
  v9 = 3;
  if ( a1 < 0x9C )
    v9 = a2;
  v10 = 0;
  *a8 = 0;
  if ( v9 <= 0x1F )
    v9 = 1 << v9;
  if ( (v9 & dword_140C0BBC8) != 0 || (_mm_lfence(), (v9 & *(_DWORD *)*(&off_140008610 + v8)) != 0) )
  {
    v11 = 512;
    if ( a4 <= 0x200u )
      v11 = a4;
    if ( a5 )
    {
      if ( v11 )
      {
        v12 = (unsigned __int64)&a3[v11];
        if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v13 = alloca(512LL);
      sub_140A70244((__int64)v19, a3, v11);
      a3 = v14;
    }
    *((_QWORD *)&v20 + 1) = a3;
    LOWORD(v20) = v11;
    KdLogDbgPrint((unsigned __int16 *)&v20);
    if ( !(_BYTE)KdDebuggerNotPresent || byte_140C40504 )
    {
      v15 = sub_140A6F7A0(a6);
      v10 = sub_140A7131C((unsigned __int16 *)&v20) ? 0x80000003 : 0;
      LOBYTE(v16) = v15;
      sub_140A6F900(v16, v17);
    }
    else
    {
      v10 = -1073741667;
    }
  }
  *a8 = 1;
  return v10;
}
