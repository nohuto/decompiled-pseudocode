/*
 * XREFs of sub_14054D424 @ 0x14054D424
 * Callers:
 *     sub_14054A25C @ 0x14054A25C (sub_14054A25C.c)
 *     sub_14054A4B0 @ 0x14054A4B0 (sub_14054A4B0.c)
 *     sub_14054AE18 @ 0x14054AE18 (sub_14054AE18.c)
 *     sub_14054D4B8 @ 0x14054D4B8 (sub_14054D4B8.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS *__fastcall sub_14054D424(int a1, char a2)
{
  PHYSICAL_ADDRESS *v3; // rbx
  PHYSICAL_ADDRESS *v4; // rcx
  PHYSICAL_ADDRESS *result; // rax

  v3 = (PHYSICAL_ADDRESS *)&unk_140C48820;
  if ( !a1 )
    v3 = (PHYSICAL_ADDRESS *)&unk_140C48800;
  v3->LowPart = 0;
  BYTE4(v3->QuadPart) = 0;
  if ( a1 == 1 )
  {
    v4 = (PHYSICAL_ADDRESS *)qword_140C48970;
    result = (PHYSICAL_ADDRESS *)qword_140C48980;
  }
  else
  {
    v4 = (PHYSICAL_ADDRESS *)qword_140C48980;
    result = (PHYSICAL_ADDRESS *)qword_140C48970;
  }
  if ( v4 )
  {
    v3[1].QuadPart = (LONGLONG)v4;
LABEL_8:
    v3[2] = MmGetPhysicalAddress(v4);
    BYTE3(v3->QuadPart) = a2 & 1;
    BYTE4(v3->QuadPart) = (a2 & 2) != 0;
    result = v3;
    BYTE2(v3->u.LowPart) = 1;
    return result;
  }
  v3[1].QuadPart = (LONGLONG)result;
  v4 = result;
  if ( result )
    goto LABEL_8;
  return result;
}
