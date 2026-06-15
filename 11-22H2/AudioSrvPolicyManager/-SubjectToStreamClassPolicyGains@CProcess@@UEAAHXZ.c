/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x18002A840
 * Callers:
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800275F0 (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 * Callees:
 *     ?Category@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000E230 (-Category@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *((_DWORD *)this + 123) )
    return (unsigned int)CProcess::Category((unsigned int *)this) != 0;
  return v1;
}
