/*
 * XREFs of sub_14054C654 @ 0x14054C654
 * Callers:
 *     sub_1405437A4 @ 0x1405437A4 (sub_1405437A4.c)
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 */

__int64 __fastcall sub_14054C654(__int64 a1)
{
  void *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = 0LL;
  if ( (dword_140D0689C & 0x100) == 0 )
    return 0LL;
  sub_14054BFF0(589847, &v5);
  v3 = v5 | 1;
  if ( (dword_140D0688C & 2) != 0 )
  {
    v1 = (void *)sub_14042A5E0(v5 & 0xFFFFFFFFFFFFF000uLL, 1LL);
    if ( v1 )
    {
LABEL_5:
      sub_14054C0E0(589847, v3);
      if ( v1 )
        qword_140D06B28 = v1;
      return 0LL;
    }
  }
  else
  {
    if ( !a1 )
    {
      v3 = v3 & 0xFFF | MmGetPhysicalAddress(qword_140D06B28).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    v1 = (void *)sub_14042A5E0(a1, 1LL);
    if ( v1 )
    {
      v3 &= 0xFFFu;
      goto LABEL_5;
    }
  }
  return 3221225626LL;
}
