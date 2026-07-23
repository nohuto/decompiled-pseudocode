/*
 * XREFs of sub_140A9A540 @ 0x140A9A540
 * Callers:
 *     sub_140A89D94 @ 0x140A89D94 (sub_140A89D94.c)
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 *     sub_140A9CA48 @ 0x140A9CA48 (sub_140A9CA48.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A9AF40 @ 0x140A9AF40 (sub_140A9AF40.c)
 */

void __fastcall sub_140A9A540(const UNICODE_STRING *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rdx

  v1 = (_QWORD *)sub_140A9AF40(a1);
  if ( v1 )
  {
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    ExFreePoolWithTag(v1, 0x44536656u);
  }
}
