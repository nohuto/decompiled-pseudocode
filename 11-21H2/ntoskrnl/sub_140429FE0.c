/*
 * XREFs of sub_140429FE0 @ 0x140429FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140236890 @ 0x140236890 (sub_140236890.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140569380 @ 0x140569380 (sub_140569380.c)
 */

void __fastcall sub_140429FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int64 a19)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  void *v33; // [rsp+F8h] [rbp+F8h]

  v33 = (void *)sub_14042A5E0(a1, a2);
  if ( (a6 & 0xFFFFFF3F) == 0x10000F )
  {
    _mm_setcsr(HIDWORD(a6));
    sub_140236890((signed __int64)v33, a19);
    if ( (byte_140E01841 & 1) != 0 )
    {
      __asm { rdsspq  rdx }
      sub_140569380(&retaddr, _RDX, 0LL);
    }
    retaddr = v33;
    _disable();
    __asm { iretq }
  }
  JUMPOUT(0x140429DE4LL);
}
