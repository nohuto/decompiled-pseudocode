/*
 * XREFs of ?SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140004D74
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140004CE0 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SubMixDescriptorFromProcessSubmixDescriptor(
        struct PROCESS_SUBMIX_DESCRIPTOR *a1,
        enum PIPE_TYPE a2,
        struct SUBMIX_DESCRIPTOR *a3)
{
  unsigned int v3; // edx
  bool v4; // zf
  int v5; // eax
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a1 + 21) > 5u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)0x80070057LL,
      v8);
    return 2147942487LL;
  }
  else
  {
    v3 = 0;
    *(_DWORD *)a3 = *(_DWORD *)a1;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a3 + 2) = 3;
    v4 = *((_DWORD *)a1 + 6) == 0;
    *((_BYTE *)a3 + 13) = 0;
    *((_BYTE *)a3 + 12) = !v4;
    *((_QWORD *)a3 + 4) = *((_QWORD *)a1 + 4);
    *((_DWORD *)a3 + 4) = *((_DWORD *)a1 + 2);
    *((_QWORD *)a3 + 3) = *((_QWORD *)a1 + 2);
    *((_DWORD *)a3 + 10) = *((_DWORD *)a1 + 10);
    *((_QWORD *)a3 + 6) = *((_QWORD *)a1 + 6);
    *((_QWORD *)a3 + 7) = *((_QWORD *)a1 + 7);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a1 + 16);
    *(_OWORD *)((char *)a3 + 68) = *(_OWORD *)((char *)a1 + 68);
    v5 = *((_DWORD *)a1 + 21);
    *((_DWORD *)a3 + 22) = v5;
    *((_WORD *)a3 + 42) = 257;
    *((_BYTE *)a3 + 86) = 0;
    if ( v5 )
    {
      do
      {
        v7 = v3++;
        *(_OWORD *)((char *)a3 + 16 * v7 + 92) = *(_OWORD *)((char *)a1 + 16 * v7 + 88);
      }
      while ( v3 < *((_DWORD *)a3 + 22) );
    }
    return 0LL;
  }
}
