/*
 * XREFs of sub_1403B8DA0 @ 0x1403B8DA0
 * Callers:
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 * Callees:
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     sub_1403B8E24 @ 0x1403B8E24 (sub_1403B8E24.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403B8DA0(ULONG_PTR *a1)
{
  ULONG_PTR v2; // rax
  __int64 v3; // rdx
  ULONG_PTR v4; // rbx
  int v5; // r10d
  int v6; // eax
  ULONG_PTR v8; // rax
  __int64 v9; // rdx

  v2 = sub_1403B8E24(2LL);
  v4 = v2;
  if ( v2 && (v5 = sub_1403AE924(v2, v3), v5 >= 0)
    || (v8 = sub_1403B8E24(0LL), (v4 = v8) != 0) && (v5 = sub_1403AE924(v8, v9), v5 >= 0) )
  {
    *a1 = v4;
    if ( *(_QWORD *)(v4 + 104) )
      off_140C020C8 = *(__int64 (__fastcall **)())(v4 + 104);
    v6 = *(_DWORD *)(v4 + 228);
    if ( (v6 & 1) != 0 )
    {
      byte_140C4AD58 = 1;
      if ( (v6 & 0x400) != 0 )
        byte_140C4AD7E = 1;
    }
  }
  else
  {
    sub_14051E038(0, 2, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 372);
  }
  return (unsigned int)v5;
}
