/*
 * XREFs of ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x140068430
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z @ 0x140051690 (-PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z.c)
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z @ 0x1400692B0 (-PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z.c)
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x14000994C (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140068514 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 */

__int64 __fastcall CSubmixImpl::PopulateAudioHistoryForStream(
        CSubmixImpl *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  struct IStreamInstanceInternal *Stream; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v12 = -2005139430;
    v13 = 1098LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12);
    if ( v6 )
      LeaveCriticalSection(v6);
    return (unsigned int)v12;
  }
  v12 = PopulateAudioHistoryForStreamInternal(Stream, a3, a4, a5, a6);
  if ( v12 < 0 )
  {
    v13 = 1100LL;
    goto LABEL_3;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
