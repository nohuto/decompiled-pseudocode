/*
 * XREFs of ?BeginProcess@CAudioProcessor@@UEAAXXZ @ 0x14001EDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioProcessor::BeginProcess(CAudioProcessor *this)
{
  __int64 v1; // rax

  v1 = _InterlockedExchange64((volatile __int64 *)this + 83, 0LL);
  *((_QWORD *)this + 84) = v1;
  if ( v1 )
    *((_QWORD *)this + 101) = *((_QWORD *)this + 86) ^ v1;
  else
    *((_QWORD *)this + 101) = 0LL;
}
