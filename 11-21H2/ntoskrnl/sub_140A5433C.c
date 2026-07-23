/*
 * XREFs of sub_140A5433C @ 0x140A5433C
 * Callers:
 *     sub_140A4DC5C @ 0x140A4DC5C (sub_140A4DC5C.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     __report_rangecheckfailure_1 @ 0x140A699D0 (__report_rangecheckfailure_1.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_140A5433C(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char *result; // rax
  unsigned __int64 v4; // rdx

  v1 = __readcr4();
  if ( (qword_140D068D8 & 0x800000) != 0 )
  {
    if ( (v1 & 0x40000) == 0 )
      __writecr4(v1 | 0x40000);
    __asm { xsetbv }
    if ( qword_140D06A68 )
      __writemsr(0xDA0u, qword_140D06A68);
    if ( _bittest64(&qword_140D068D8, 0x37u) )
    {
      if ( a1 )
        v4 = *a1;
      else
        v4 = MEMORY[0xFFFFF78000000710];
      __writemsr(0x1C4u, v4);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    result = (char *)CurrentPrcb + 496;
    if ( *((struct _KPRCB **)CurrentPrcb + 4408) != (struct _KPRCB *)((char *)CurrentPrcb + 496) )
    {
      *((_DWORD *)CurrentPrcb + 8818) |= 0x100040u;
      if ( (_BYTE)byte_140E01841 )
        *((_DWORD *)CurrentPrcb + 8818) |= 0x100080u;
    }
  }
  else if ( (v1 & 0x40000) != 0 )
  {
    __writecr4(v1 & 0xFFFFFFFFFFFBFFFFuLL);
  }
  return result;
}
