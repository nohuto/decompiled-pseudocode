/*
 * XREFs of sub_140A82690 @ 0x140A82690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

__int64 __fastcall sub_140A82690(unsigned __int8 *a1)
{
  __int64 v1; // rax
  const char *v3; // rcx

  v1 = *a1;
  if ( (_BYTE)v1 == 15 )
  {
    if ( a1[1] == 1 )
      return sub_1405FDF9C("IRP_MJ_SCSI");
    return sub_1405FDF9C(off_140A75600[v1]);
  }
  if ( (unsigned __int8)v1 <= 0x1Bu )
    return sub_1405FDF9C(off_140A75600[v1]);
  v3 = "IRP_MJ_BOGUS";
  if ( (_BYTE)v1 != 0xFF )
    v3 = "IRP_MJ_??";
  return sub_1405FDF9C(v3);
}
