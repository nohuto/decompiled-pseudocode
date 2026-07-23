/*
 * XREFs of sub_140AA17D0 @ 0x140AA17D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AA1B48 @ 0x140AA1B48 (sub_140AA1B48.c)
 */

__int64 __fastcall sub_140AA17D0(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3)
{
  void *v3; // rbx
  __int64 (__fastcall *v4)(); // rdi
  int v7; // edi

  v3 = 0LL;
  v4 = a2;
  if ( (qword_140D01450 & 0x800) != 0 && dword_140D57588 )
  {
    v3 = (void *)sub_140AA1B48(a2, a3, 0LL);
    if ( !v3 )
      return 3221225626LL;
    v4 = sub_140AA1E50;
  }
  v7 = sub_14042A5E0(a1, v4);
  if ( v7 < 0 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)v7;
}
