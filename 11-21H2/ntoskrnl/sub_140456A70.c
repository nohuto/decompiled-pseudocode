/*
 * XREFs of sub_140456A70 @ 0x140456A70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140456A70(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  char v3; // di
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 136);
  v3 = 0;
  if ( off_140C02520 == &off_140003200 && (dword_140C4D0B0 & 1) != 0 )
  {
    v4 = __readmsr(0x38Eu);
    a2 = (unsigned __int64)HIDWORD(v4) << 32;
    if ( (v4 & 0x80000000000000LL) != 0 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v5 = __readmsr(0x570u);
        a2 = (unsigned __int64)HIDWORD(v5) << 32;
        if ( (v5 & 0x111100000000LL) != 0 )
          KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
      }
      if ( off_140C02520[13] )
      {
        sub_14042A5E0(v2, a2);
        v3 = 1;
      }
      if ( qword_140D01710 )
        sub_14042A5E0(v2, a2);
    }
  }
  if ( off_140C02520[13] && !v3 )
    sub_14042A5E0(v2, a2);
  if ( qword_140C54B58 )
  {
    sub_14042A5E0(v2, a2);
  }
  else
  {
    sub_14042A5E0(v2, a2);
    sub_14042A5E0(0LL, v6);
  }
  return 1;
}
