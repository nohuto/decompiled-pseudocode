/*
 * XREFs of ?AveragePumpPassDuration@CAudioPump@@UEAAJPEAN@Z @ 0x140073A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioPump::AveragePumpPassDuration(CAudioPump *this, double *a2)
{
  __int64 v3; // rcx
  double v4; // xmm0_8

  v3 = *((unsigned int *)this + 94);
  v4 = 0.0;
  if ( (_DWORD)v3 )
    v4 = (double)(int)(*((_QWORD *)this + 46) / v3) / 10000.0;
  *a2 = v4;
  return 0LL;
}
