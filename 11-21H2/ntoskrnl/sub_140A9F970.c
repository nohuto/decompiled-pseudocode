/*
 * XREFs of sub_140A9F970 @ 0x140A9F970
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140AA09D0 @ 0x140AA09D0 (sub_140AA09D0.c)
 */

__int64 __fastcall sub_140A9F970(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v6 = (unsigned int)dword_140C29FC0 >> 17;
  LOBYTE(v6) = (dword_140C29FC0 & 0x20000) != 0;
  sub_140AA09D0(v6);
  if ( (unsigned int)sub_140A96B0C(0)
    || (qword_140D01450 & 0x40000) != 0
    && qword_140D57510
    && (unsigned __int8)sub_14042A5E0("MmAllocatePagesForMdl", v8) )
  {
    return 0LL;
  }
  if ( (dword_140C29FC0 & 0x4000000) != 0 && a2 < 0x100000000LL )
    sub_140A8C924(0xC4u, 0x141uLL, a2, a4, 0LL);
  v9 = sub_14042A5E0(a1, a2);
  v10 = v9;
  if ( v9 )
  {
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B064(retaddr, 232LL, 0xF0u, *(unsigned int *)(v9 + 40));
  }
  return v10;
}
