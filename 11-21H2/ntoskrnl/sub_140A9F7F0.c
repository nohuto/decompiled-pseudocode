/*
 * XREFs of sub_140A9F7F0 @ 0x140A9F7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140AA0838 @ 0x140AA0838 (sub_140AA0838.c)
 *     sub_140AA09D0 @ 0x140AA09D0 (sub_140AA09D0.c)
 */

struct _MDL *__fastcall sub_140A9F7F0(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  struct _MDL *v8; // rax
  struct _MDL *v9; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  sub_140AA09D0(0LL);
  if ( (unsigned int)sub_140A96B0C(0) )
    return 0LL;
  if ( (dword_140C29FC0 & 0x4000000) != 0 && a2 < 0x100000000LL )
    sub_140A8C924(0xC4u, 0x141uLL, a2, a4, 0LL);
  v8 = (struct _MDL *)sub_14042A5E0(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    sub_140AA0838(v8);
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B064(retaddr, 232LL, 0xF0u, v9->ByteCount);
  }
  return v9;
}
