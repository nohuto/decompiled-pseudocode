/*
 * XREFs of ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800FD288
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800FC580 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800FCFC8 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::QueueInputBuffers(ConsumerControlNexusDevice *this)
{
  ConsumerControlNexusDevice **v2; // rax
  ConsumerControlNexusDevice **v3; // rbx
  ConsumerControlNexusDevice *v4; // rcx
  ConsumerControlNexusDevice *v5; // rax
  __int64 v6; // rcx
  signed int LastError; // eax
  unsigned int v8; // edi
  ConsumerControlNexusDevice **v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  while ( *((_QWORD *)this + 8) )
  {
    v2 = (ConsumerControlNexusDevice **)((char *)this + 48);
    v3 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 6);
    if ( v3[1] != (ConsumerControlNexusDevice *)((char *)this + 48)
      || (v4 = *v3, *((ConsumerControlNexusDevice ***)*v3 + 1) != v3) )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v2 = v4;
    *((_QWORD *)v4 + 1) = v2;
    if ( v3 == v2 )
      v3 = 0LL;
    else
      --*((_QWORD *)this + 8);
    v3[2] = this;
    *(_OWORD *)(v3 + 3) = 0LL;
    *(_OWORD *)(v3 + 5) = 0LL;
    *((_DWORD *)v3 + 14) = 996;
    v3[8] = 0LL;
    v5 = (ConsumerControlNexusDevice *)*((_QWORD *)this + 12);
    v3[9] = v5;
    v6 = *((_QWORD *)this + 2);
    *(_OWORD *)(v3 + 3) = 0LL;
    v3[5] = 0LL;
    if ( !ReadFileEx(
            *(HANDLE *)(v6 + 40),
            v3 + 10,
            (DWORD)v5,
            (LPOVERLAPPED)(v3 + 3),
            (LPOVERLAPPED_COMPLETION_ROUTINE)ConsumerControlNexusDevice::HandleReadCompletion) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError )
      {
        if ( LastError != 997 )
        {
          if ( LastError > 0 )
            v8 = (unsigned __int16)LastError | 0x80070000;
          if ( (v8 & 0x80000000) != 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBD,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
              (const char *)v8);
            operator delete(v3);
            return v8;
          }
        }
      }
    }
    v9 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 10);
    if ( *v9 != (ConsumerControlNexusDevice *)((char *)this + 72) )
      goto LABEL_16;
    *v3 = (ConsumerControlNexusDevice *)((char *)this + 72);
    v3[1] = (ConsumerControlNexusDevice *)v9;
    *v9 = (ConsumerControlNexusDevice *)v3;
    ++*((_QWORD *)this + 11);
    *((_QWORD *)this + 10) = v3;
  }
  return 0LL;
}
