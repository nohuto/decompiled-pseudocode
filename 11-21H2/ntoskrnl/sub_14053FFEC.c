/*
 * XREFs of sub_14053FFEC @ 0x14053FFEC
 * Callers:
 *     sub_14065DBC8 @ 0x14065DBC8 (sub_14065DBC8.c)
 *     sub_140919F98 @ 0x140919F98 (sub_140919F98.c)
 *     sub_140919FB8 @ 0x140919FB8 (sub_140919FB8.c)
 *     sub_14091F960 @ 0x14091F960 (sub_14091F960.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_14053FFEC(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
