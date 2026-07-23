/*
 * XREFs of sub_1403D808C @ 0x1403D808C
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1403D808C()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  qword_140C48AF8 = (PVOID)ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !qword_140C48AF8 )
    v0 = -1073741670;
  qword_140C48B38 = ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !qword_140C48B38 )
  {
    ExFreePoolWithTag(qword_140C48AF8, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_140C48B22 = 6;
  word_140C48B20 = 1;
  qword_140C48B30 = (__int64)&qword_140C48B28;
  qword_140C48B28 = (__int64)&qword_140C48B28;
  qword_140C48B10 = (__int64)&qword_140C48B08;
  qword_140C48B08 = (__int64)&qword_140C48B08;
  result = v0;
  dword_140C48B24 = 1;
  word_140C48B00 = 1;
  byte_140C48B02 = 6;
  dword_140C48B04 = 1;
  return result;
}
