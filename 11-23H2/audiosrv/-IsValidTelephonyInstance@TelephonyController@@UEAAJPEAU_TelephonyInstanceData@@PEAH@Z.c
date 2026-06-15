/*
 * XREFs of ?IsValidTelephonyInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801675F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyController::IsValidTelephonyInstance(
        TelephonyController *this,
        struct _TelephonyInstanceData *a2,
        int *a3)
{
  __int64 result; // rax
  __int64 *i; // rcx

  result = 0LL;
  if ( !a3 || !a2 )
    return 2147500035LL;
  *a3 = 0;
  for ( i = (__int64 *)*((_QWORD *)this + 3); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == *((_DWORD *)a2 + 1) )
    {
      *a3 = 1;
      return result;
    }
  }
  return result;
}
