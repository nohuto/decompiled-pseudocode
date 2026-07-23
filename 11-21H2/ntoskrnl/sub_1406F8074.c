/*
 * XREFs of sub_1406F8074 @ 0x1406F8074
 * Callers:
 *     NtFindAtom @ 0x1406F68C0 (NtFindAtom.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406F8074(signed __int64 *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v5; // ebx

  v4 = sub_140281870(a1);
  if ( v4 )
  {
    v5 = sub_14042A5E0(v4[2].Count, a2);
    sub_140281930(a1, (__int64)v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
