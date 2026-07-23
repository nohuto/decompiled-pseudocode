/*
 * XREFs of sub_140911B20 @ 0x140911B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140911B20(void *a1)
{
  __int64 result; // rax

  ExFreePoolWithTag(a1, 0);
  result = qword_140C54CB0;
  if ( qword_140C54CB0 )
    return sub_14042A5E0(qword_140C54CB8, (unsigned int)dword_140D0181C);
  return result;
}
