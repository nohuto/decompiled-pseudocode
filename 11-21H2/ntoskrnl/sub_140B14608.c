/*
 * XREFs of sub_140B14608 @ 0x140B14608
 * Callers:
 *     sub_140B132D0 @ 0x140B132D0 (sub_140B132D0.c)
 *     sub_140B4E1B0 @ 0x140B4E1B0 (sub_140B4E1B0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14082F95C @ 0x14082F95C (sub_14082F95C.c)
 *     sub_14082FA20 @ 0x14082FA20 (sub_14082FA20.c)
 */

bool __fastcall sub_140B14608(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int128 *a3,
        __int64 *a4,
        unsigned int *a5)
{
  char v5; // bl
  unsigned int v8; // r14d
  unsigned int v10; // edi
  __int128 *v11; // r8
  ULONG_PTR v12; // rdx
  __int64 v14; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16[20]; // [rsp+30h] [rbp-28h] BYREF
  bool v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v8 = BugCheckParameter4;
  v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  String2 = 0LL;
  if ( a3 && *(_WORD *)a3 )
  {
    *(_OWORD *)v16 = *a3;
    if ( !sub_14082FA20(v16, (__int64)&String2, &v17) )
      return v5;
    if ( RtlEqualUnicodeString(&stru_140B57AE0, &String2, 1u) )
    {
      v11 = (__int128 *)v16;
      v12 = v8;
    }
    else
    {
      v11 = a3;
      v12 = v10;
    }
    v10 = sub_14082F95C(BugCheckParameter3, v12, v11);
  }
  if ( v10 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v14 = sub_1406BF400(BugCheckParameter3, v10, a5);
    else
      v14 = sub_1407C9820(BugCheckParameter3, v10, a5);
    *a4 = v14;
    return v14 != 0;
  }
  return v5;
}
