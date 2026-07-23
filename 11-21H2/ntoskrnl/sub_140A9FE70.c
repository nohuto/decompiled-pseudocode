/*
 * XREFs of sub_140A9FE70 @ 0x140A9FE70
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A815FC @ 0x140A815FC (sub_140A815FC.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 */

__int64 __fastcall sub_140A9FE70(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)BugCheckParameter3, a2);
  if ( (dword_140C29FC0 & 1) != 0 )
    sub_140A815FC(BugCheckParameter3, a2);
  if ( (unsigned int)sub_140A96B0C(0) == 1
    || (qword_140D01450 & 0x40000) != 0 && qword_140D57510 && (unsigned __int8)sub_14042A5E0("MmMapIoSpace", v7) )
  {
    return 0LL;
  }
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
  {
    v8 = 4;
    if ( a3 != 1 )
    {
      v8 = 516;
      if ( a3 == 2 )
        v8 = 1028;
    }
    v9 = MmMapIoSpaceEx(BugCheckParameter3, a2, v8);
  }
  else
  {
    v9 = sub_14042A5E0(BugCheckParameter3, a2);
  }
  v10 = v9;
  if ( v9 )
  {
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B064(retaddr, 216LL, 0xE0u, a2);
  }
  return v10;
}
