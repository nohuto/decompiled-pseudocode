/*
 * XREFs of ?GetLatency@CAPOWrapperClient@@UEAAJPEA_J@Z @ 0x1800CF940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::GetLatency(CAPOWrapperClient *this, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, a2);
  else
    return 2147500033LL;
}
