/*
 * XREFs of sub_140AB6B80 @ 0x140AB6B80
 * Callers:
 *     sub_14041FB10 @ 0x14041FB10 (sub_14041FB10.c)
 *     sub_14041FF90 @ 0x14041FF90 (sub_14041FF90.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140424840 @ 0x140424840 (sub_140424840.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_14042A6B0 @ 0x14042A6B0 (sub_14042A6B0.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_140AB6B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // sp
  bool v6; // cf
  _BYTE v7[40]; // [rsp-10h] [rbp-28h] BYREF

  __writegsqword(0xA010u, (unsigned __int64)v7);
  if ( ((__int64)KeGetPcr()[109].NtTib.ExceptionList & 2) == 0 )
  {
    v6 = (v5 & 1) != 0;
    if ( v6 && ((__int64)KeGetPcr()[109].NtTib.ExceptionList & 1) != 0 )
      __writegsdword(0xA018u, (__int64)KeGetPcr()[109].NtTib.ExceptionList & 0xFFFFFFFE);
    __writecr3((unsigned __int64)v7);
  }
  if ( ((__int64)KeGetPcr()[109].NtTib.ExceptionList & 2) == 0 )
    __asm { verw    [rsp+arg_18] }
  __asm
  {
    swapgs
    iretq
  }
}
