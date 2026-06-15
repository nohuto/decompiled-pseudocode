/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x18001C890
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180017E90 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 123) )
  {
    if ( *((_DWORD *)this + 120) )
      v2 = *((_DWORD *)this + 121);
    else
      v2 = *((_DWORD *)this + 78);
    if ( v2 )
      return 1LL;
  }
  return result;
}
