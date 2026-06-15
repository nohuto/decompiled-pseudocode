/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x14006E840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3, void *a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((_QWORD *)this + 11);
  if ( !v6 )
  {
    v9 = -2147467263;
    v10 = 493LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( a4 )
  {
    v12 = *((_QWORD *)this + 13);
    if ( v12 )
    {
      if ( v12 != -1 )
      {
        CloseHandle(*((HANDLE *)this + 13));
        v6 = *((_QWORD *)this + 11);
      }
    }
    *((_QWORD *)this + 13) = a4;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2,
         a3,
         a4);
  if ( v9 < 0 )
  {
    v10 = 501LL;
    goto LABEL_3;
  }
  return 0LL;
}
