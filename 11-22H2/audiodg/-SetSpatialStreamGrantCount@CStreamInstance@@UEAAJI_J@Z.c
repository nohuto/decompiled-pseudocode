/*
 * XREFs of ?SetSpatialStreamGrantCount@CStreamInstance@@UEAAJI_J@Z @ 0x140077C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z @ 0x140068D34 (-SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z.c)
 */

__int64 __fastcall CStreamInstance::SetSpatialStreamGrantCount(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 5;
  EnterCriticalSection(this + 5);
  v7 = SetSpatialStreamGrantCountInternal((struct IStreamInstanceInternal *)&this[-1].SpinCount, a2, a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v7);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v8;
  }
}
