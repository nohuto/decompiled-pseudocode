/*
 * XREFs of sub_14050E2B0 @ 0x14050E2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050E2B0(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 result; // rax

  if ( (a1 & 0x100000000LL) != 0 )
  {
    _RAX = (unsigned int)a2;
    __asm { cpuid }
    *a3 = result;
    *a4 = _RBX;
    *a5 = _RCX;
    *a6 = _RDX;
  }
  else
  {
    result = qword_140C4C4E8;
    if ( qword_140C4C4E8 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      result = sub_14042A5E0(a1, a2);
      if ( (int)result >= 0 )
        return result;
      *a3 = 0;
      *a4 = 0;
    }
    else
    {
      *a3 = 0;
      *a4 = 0;
    }
    *a5 = 0;
    *a6 = 0;
  }
  return result;
}
