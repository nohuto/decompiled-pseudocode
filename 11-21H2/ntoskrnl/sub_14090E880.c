/*
 * XREFs of sub_14090E880 @ 0x14090E880
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090E880(HANDLE *a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // si
  int v11; // ebx
  char v12; // r14
  __int64 v13; // rax
  HANDLE v14; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  sub_140347770((__int64)&v17);
  v10 = sub_140AB46D0(v7, v6, v8);
  if ( v10 )
  {
    v12 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v12 == 1 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a1;
      *(_QWORD *)v13 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v11 = ObOpenObjectByName(a3, (__int64)qword_140C490F0, v12, 0LL, a2, 0LL, (__int64)&Handle);
    if ( v11 >= 0 )
    {
      *a1 = Handle;
      Handle = 0LL;
      v11 = 0;
    }
  }
  else
  {
    v11 = -1073741431;
  }
  v14 = Handle;
  if ( Handle )
    NtClose(Handle);
  if ( v10 )
    sub_140AB42A0(v14, v9);
  sub_14022EA30((__int64 *)&v17);
  return (unsigned int)v11;
}
