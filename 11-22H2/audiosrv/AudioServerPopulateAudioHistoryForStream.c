/*
 * XREFs of AudioServerPopulateAudioHistoryForStream @ 0x180124890
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x18011E840 (-PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z.c)
 */

__int64 __fastcall AudioServerPopulateAudioHistoryForStream(CVADServer *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v11, (char *)this);
  v8 = CVADServer::PopulateAudioHistoryForStream(this, *(_QWORD *)(a2 + 552), a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    EtwEventActivityIdControl(4LL, v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v8);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v11);
    return v9;
  }
}
