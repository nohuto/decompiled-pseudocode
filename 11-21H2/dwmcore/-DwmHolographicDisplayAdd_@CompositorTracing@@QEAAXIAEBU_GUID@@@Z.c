/*
 * XREFs of ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z @ 0x180295790
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802951AC (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayAdd_(CompositorTracing *this, int a2, const struct _GUID *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  ULONG v7; // r9d
  int v8; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  ULONG v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  const struct _GUID *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v5 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                   (__int64)this,
                   _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      v15 = 0;
      v12 = 0;
      v10 = &v8;
      v11 = v7;
      v8 = a2;
      v13 = a3;
      v14 = 16;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_180373B31, 0LL, 0LL, v7, &v9);
    }
  }
}
