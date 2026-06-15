/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140066D70
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3, void *a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  int v13; // [rsp+30h] [rbp-68h] BYREF
  char v14[32]; // [rsp+38h] [rbp-60h] BYREF
  int *v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+64h] [rbp-34h]

  v6 = *((_QWORD *)this + 11);
  if ( !v6 )
  {
    v9 = -2147467263;
LABEL_9:
    v11 = (_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                      v6,
                      _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 2u )
    {
      v17 = 0;
      v15 = &v13;
      v13 = v9;
      v16 = 4;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v11, byte_1400A6D1C, 0LL, 0LL, 3, (__int64)v14);
    }
    return (unsigned int)v9;
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)this + 12);
    if ( v10 && v10 != -1 )
    {
      CloseHandle(*((HANDLE *)this + 12));
      v6 = *((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 12) = a4;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2,
         a3,
         a4);
  if ( v9 < 0 )
    goto LABEL_9;
  return (unsigned int)v9;
}
