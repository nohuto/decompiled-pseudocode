/*
 * XREFs of sub_140B08F6C @ 0x140B08F6C
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 */

__int64 sub_140B08F6C()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  sub_1402D6B0C((__int64)&unk_140D00B60, 0x1419978u, 0, 0, (__int64)&qword_14000EFB0, 1);
  if ( !dword_140C29790 )
    dword_140C29794 = 1;
  v3 = 0x20000000000LL;
  result = MmCreateSection((int)&v2, 983071LL, 0, &v3, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4F3D8 = v2;
    qword_140C4F3E0 = sub_140287970(v2);
    v3 = 0x4000000LL;
    result = MmCreateSection((int)&v2, 983071LL, 0, &v3, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v1 = v2;
      *(&qword_140C4F378 - 1) = v2;
      qword_140C4F378 = sub_140287970(v1);
      return 0LL;
    }
  }
  return result;
}
