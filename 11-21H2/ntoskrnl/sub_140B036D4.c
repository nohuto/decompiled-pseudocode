/*
 * XREFs of sub_140B036D4 @ 0x140B036D4
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B01BE0 @ 0x140B01BE0 (sub_140B01BE0.c)
 *     sub_140B02040 @ 0x140B02040 (sub_140B02040.c)
 */

__int64 __fastcall sub_140B036D4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (_DWORD)a1 == 1 )
  {
    dword_140C2AD60 = 0;
    qword_140C2AD58 = (__int64)&qword_140C2AD50;
    qword_140C2AD50 = (ULONG_PTR)&qword_140C2AD50;
    qword_140C2AAF8 = 0LL;
    dword_140C2AB00 = 2097153;
    memset(&unk_140C2AB04, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&dword_140C2AB00, 0);
    dword_140C2AC40[0] = 2097153;
    memset(&unk_140C2AC44, 0, 0x104uLL);
    sub_14042A5E0(39LL, 4LL);
    byte_140C2AD48 = sub_140B02040();
    if ( byte_140C2AD48 )
    {
      qword_140C2AC20 = (void *)ExAllocatePool2(64LL, 0x104uLL, 0x6B725449u);
      if ( !qword_140C2AC20 )
        return (unsigned int)-1073741670;
    }
  }
  else if ( (_DWORD)a1 == 2 && byte_140C2AD48 )
  {
    if ( (dword_140D06AC4 & 4) != 0 )
      LOBYTE(v3) = 1;
    v3 = sub_140B01BE0(a1, v3, a3);
    byte_140C2AE98 = 1;
  }
  return v3;
}
