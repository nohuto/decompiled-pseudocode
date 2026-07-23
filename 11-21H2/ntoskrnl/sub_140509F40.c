/*
 * XREFs of sub_140509F40 @ 0x140509F40
 * Callers:
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140509F40(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // ebp

  v4 = 0;
  if ( byte_140D016E8 )
  {
    v7 = 16 * a2;
    *(_QWORD *)(a4 + 72) = sub_14042A5E0(a3, (unsigned int)(16 * a2 - 1073733627));
    *(_QWORD *)(a4 + 80) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733626));
    *(_QWORD *)(a4 + 88) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733628));
    *(_QWORD *)(a4 + 96) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733624));
    *(_QWORD *)(a4 + 104) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733623));
    *(_QWORD *)(a4 + 112) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733622));
    *(_QWORD *)(a4 + 120) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733621));
    *(_QWORD *)(a4 + 128) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733620));
    *(_QWORD *)(a4 + 136) = sub_14042A5E0(a3, (unsigned int)(v7 - 1073733619));
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000007 )
    {
      _RAX = 2147483655LL;
      __asm { cpuid }
      v4 = _RBX;
    }
    *(_QWORD *)(a4 + 144) = v4;
    *(_DWORD *)(a4 + 64) = 10;
  }
}
