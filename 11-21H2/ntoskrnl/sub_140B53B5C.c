/*
 * XREFs of sub_140B53B5C @ 0x140B53B5C
 * Callers:
 *     sub_140A89FE0 @ 0x140A89FE0 (sub_140A89FE0.c)
 * Callees:
 *     sub_140A9AF40 @ 0x140A9AF40 (sub_140A9AF40.c)
 */

_BOOL8 __fastcall sub_140B53B5C(const UNICODE_STRING *a1)
{
  __int64 v1; // rax

  v1 = sub_140A9AF40(a1);
  return v1 && *(_DWORD *)(v1 + 16) > *(_DWORD *)(v1 + 20);
}
