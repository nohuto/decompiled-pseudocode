/*
 * XREFs of HalInitSystem @ 0x140A56BD0
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A56C0C @ 0x140A56C0C (sub_140A56C0C.c)
 *     sub_140AD62E8 @ 0x140AD62E8 (sub_140AD62E8.c)
 *     sub_140AFB108 @ 0x140AFB108 (sub_140AFB108.c)
 */

__int64 __fastcall HalInitSystem(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
      KeBugCheckEx(0x5Cu, 0x8200uLL, 0xFFFFFFFFC000000DuLL, (unsigned int)BugCheckParameter3, 0LL);
    return sub_140A56C0C(a2);
  }
  else
  {
    sub_140AD62E8();
    return sub_140AFB108(a2);
  }
}
