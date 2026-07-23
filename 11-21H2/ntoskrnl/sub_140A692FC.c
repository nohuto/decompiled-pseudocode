/*
 * XREFs of sub_140A692FC @ 0x140A692FC
 * Callers:
 *     sub_140A67BA0 @ 0x140A67BA0 (sub_140A67BA0.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056CB60 @ 0x14056CB60 (sub_14056CB60.c)
 *     sub_140A5A248 @ 0x140A5A248 (sub_140A5A248.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 */

__int64 sub_140A692FC()
{
  int v0; // eax
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
  {
    sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), 0LL);
    v0 = sub_140A67C14(0);
    v1 = qword_140C448A8;
    *(_DWORD *)(qword_140C448A8 + 33308) = v0;
    *(_DWORD *)(v1 + 200) = 6;
  }
  sub_140A5A248();
  sub_14042A5E0(0LL, 0LL);
  sub_14056CB60();
  sub_14042A5E0(2LL, *(_QWORD *)(qword_140C448A8 + 33160));
  v2 = sub_140A67C14(0);
  v4 = qword_140C448A8;
  *(_QWORD *)(qword_140C448A8 + 33280) = 10000 * (v2 - *(_QWORD *)(qword_140C448A8 + 33280));
  *(_DWORD *)(v4 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 188));
  result = qword_140C448A8;
  v6 = *(unsigned int *)(qword_140C448A8 + 64);
  if ( (v6 & 0x20) != 0 )
    return sub_14042A5E0(v6, v3);
  return result;
}
