/*
 * XREFs of ?AddRemoveDeviceCommandApc@ConsumerControlManager@@CAX_K@Z @ 0x1800F9150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ConsumerControlManager::AddRemoveDeviceCommandApc(__int64 *Parameter)
{
  __int64 v1; // rax
  __int64 **v2; // rdx

  v1 = Parameter[3] + 64;
  v2 = *(__int64 ***)(Parameter[3] + 72);
  if ( *v2 != (__int64 *)v1 )
    __fastfail(3u);
  *Parameter = v1;
  Parameter[1] = (__int64)v2;
  *v2 = Parameter;
  ++*(_QWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 8) = Parameter;
}
