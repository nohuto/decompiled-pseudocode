/*
 * XREFs of ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140068C10
 * Callers:
 *     ?SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z @ 0x1400523A0 (-SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z.c)
 *     ?SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z @ 0x1400694C0 (-SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x14000994C (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z @ 0x140068CE4 (-SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z.c)
 */

__int64 __fastcall CSubmixImpl::SetSpatialStreamGrantCount(CSubmixImpl *this, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct IStreamInstanceInternal *Stream; // rax
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v10 = -2005139430;
    v11 = 1027LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v10);
    if ( v4 )
      LeaveCriticalSection(v4);
    return (unsigned int)v10;
  }
  v10 = SetSpatialStreamGrantCountInternal(Stream, a3, a4);
  if ( v10 < 0 )
  {
    v11 = 1029LL;
    goto LABEL_3;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
