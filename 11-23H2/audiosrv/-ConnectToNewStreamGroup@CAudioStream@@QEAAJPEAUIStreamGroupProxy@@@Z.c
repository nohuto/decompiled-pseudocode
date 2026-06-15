/*
 * XREFs of ?ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z @ 0x1800EB5BC
 * Callers:
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800DAAE0 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::ConnectToNewStreamGroup(CAudioStream *this, struct IStreamGroupProxy *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 576);
  v4 = *((_QWORD *)this + 72);
  if ( v4 )
  {
    v5 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v4 + 80LL))(*((_QWORD *)this + 72), v5);
    if ( v6 < 0 )
    {
      v7 = 2194LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct IStreamGroupProxy *))(*(_QWORD *)*v2 + 72LL))(
           *v2,
           v5,
           a2);
    if ( v6 < 0 )
    {
      v7 = 2195LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
