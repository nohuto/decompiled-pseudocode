/*
 * XREFs of ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180014130
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18000FB40 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HHPEAUIDuckingController@@PEAH@Z @ 0x18003269C (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV-$shared_ptr@VDuckin.c)
 */

__int64 __fastcall UpdatePolicyGainsFromStreamClassPolicyTable(
        struct TSSession *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct IDuckingController *a6,
        int *a7)
{
  int *v7; // r13
  __int64 v8; // r15
  _QWORD *v9; // r14
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // r10d
  _QWORD *i; // rbx
  _QWORD *v16; // rcx
  int updated; // eax
  unsigned int v18; // ebx
  BOOL v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v22; // [rsp+88h] [rbp+10h]
  int v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = (int)a2;
  v7 = a7;
  v8 = a3;
  v9 = &unk_18004C140;
  if ( !a4 )
    v9 = &unk_18004D340;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( v13 < 0x18 )
  {
    v23 = 0;
    if ( v9[24 * v8 + v14] )
    {
      for ( i = (_QWORD *)*((_QWORD *)a1 + 133); i; i = (_QWORD *)*i )
      {
        v16 = (_QWORD *)i[1];
        if ( v16[3] >= 8uLL )
          v16 = (_QWORD *)*v16;
        if ( !(unsigned int)_o__wcsicmp(v16, v9[24 * v8 + v12]) )
        {
          updated = CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
                      (int)a1 + 72,
                      v22,
                      v12,
                      (unsigned int)i[1] + 32,
                      a4,
                      a5,
                      (__int64)a6,
                      (__int64)&v23);
          v18 = updated;
          if ( updated < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x68B,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
              (const char *)(unsigned int)updated);
            return v18;
          }
          v19 = *v7 || v23;
          *v7 = v19;
          break;
        }
      }
    }
    v13 = ++v12;
    v14 = v12;
  }
  return 0LL;
}
