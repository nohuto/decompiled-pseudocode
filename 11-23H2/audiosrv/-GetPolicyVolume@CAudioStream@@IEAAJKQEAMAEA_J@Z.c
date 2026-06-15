/*
 * XREFs of ?GetPolicyVolume@CAudioStream@@IEAAJKQEAMAEA_J@Z @ 0x180018C20
 * Callers:
 *     ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x180018B64 (-CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::GetPolicyVolume(CAudioStream *this, unsigned int a2, float *const a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 24) )
  {
    v6 = 0LL;
    if ( a2 )
    {
      v7 = a2;
      do
      {
        a3[v6] = *(float *)(*((_QWORD *)this + 15) + v6 * 4) * *((float *)this + 26);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    *a4 = *((_QWORD *)this + 14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v9);
    return 2147942487LL;
  }
}
