/*
 * XREFs of sub_1405D0014 @ 0x1405D0014
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140549A48 @ 0x140549A48 (sub_140549A48.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 */

__int64 __fastcall sub_1405D0014(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v5; // rdi
  int v6; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int)dword_140C23724;
  v2 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
  v3 = *(_QWORD *)(BugCheckParameter3 + 144);
  ++*(_DWORD *)(BugCheckParameter3 + 252);
  v5 = v2 + ((unsigned __int64)(4 * v1 + 4095) >> 12);
  v8 = *(_DWORD *)(BugCheckParameter3 + 152) << 12;
  v6 = sub_140549A48(BugCheckParameter3, BugCheckParameter3, v3, (__int64)&v8);
  if ( v6 < 0 )
    KeBugCheckEx(0xA0u, 0x10DuLL, 0xAuLL, BugCheckParameter3, v6);
  return sub_140A4DC74(BugCheckParameter3, v3, 1LL, v5);
}
