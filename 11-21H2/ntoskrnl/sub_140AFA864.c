/*
 * XREFs of sub_140AFA864 @ 0x140AFA864
 * Callers:
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AFAA0C @ 0x140AFAA0C (sub_140AFAA0C.c)
 *     sub_140AFAA68 @ 0x140AFAA68 (sub_140AFAA68.c)
 */

__int64 __fastcall sub_140AFA864(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) >= 5u && (*(_DWORD *)(a1 + 112) & 0x100000) != 0 )
    return 3221225659LL;
  if ( (int)sub_140AFAA0C(
              a1,
              *(_DWORD *)(a1 + 56),
              (int)a1 + 148,
              *(unsigned __int8 *)(a1 + 88),
              2,
              (__int64)byte_140C4A4A0) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xC2uLL);
  if ( (int)sub_140AFAA0C(
              a1,
              *(_DWORD *)(a1 + 64),
              (int)a1 + 172,
              *(unsigned __int8 *)(a1 + 89),
              2,
              (__int64)&byte_140C4A4D0) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xD1uLL);
  sub_140AFAA0C(a1, *(_DWORD *)(a1 + 76), a1 + 208, *(unsigned __int8 *)(a1 + 91), 4, (__int64)&unk_140C4A500);
  sub_140AFAA0C(a1, *(_DWORD *)(a1 + 60), a1 + 160, *(unsigned __int8 *)(a1 + 88), 2, (__int64)&byte_140C4A530);
  sub_140AFAA0C(a1, *(_DWORD *)(a1 + 68), a1 + 184, *(unsigned __int8 *)(a1 + 89), 2, (__int64)&byte_140C4A560);
  sub_140AFAA0C(a1, *(_DWORD *)(a1 + 72), a1 + 196, *(unsigned __int8 *)(a1 + 90), 1, (__int64)&unk_140C4A590);
  if ( *(_BYTE *)(a1 + 8) > 1u && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    sub_140AFAA68(1LL, 1LL, a1 + 116, &byte_140C4A620);
  sub_140AFAA0C(a1, *(_DWORD *)(a1 + 80), a1 + 220, *(unsigned __int8 *)(a1 + 92), 1, (__int64)&unk_140C4A5C0);
  return sub_140AFAA0C(
           a1,
           *(_DWORD *)(a1 + 84),
           (int)a1 + 232,
           *(unsigned __int8 *)(a1 + 93),
           1,
           (__int64)&unk_140C4A5F0);
}
