/*
 * XREFs of ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x18003A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180013F48 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::AddRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  _BYTE *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  try
  {
    if ( a2 )
    {
      v6 = (_BYTE *)*((_QWORD *)this + 8);
      if ( v6 == *((_BYTE **)this + 9) )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((__int64)this + 56, v6, &v9);
      }
      else
      {
        *(_DWORD *)v6 = a2;
        *((_QWORD *)this + 8) += 4LL;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x160,
                           (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecifi"
                                "cendpointinfo.cpp",
                           v5);
  }
  return result;
}
