/*
 * XREFs of ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800E7D44
 * Callers:
 *     _lambda_c1e1bf6016a03158d50952b4558ffdc8_::operator() @ 0x1800BB9DC (_lambda_c1e1bf6016a03158d50952b4558ffdc8_--operator().c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800E79B4 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetStateHandle(CallerIdentity *this, unsigned __int16 *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  v4 = OpenStateExplicit(-6LL, this, a3);
  v5 = 0;
  *(_QWORD *)a2 = v4;
  if ( !v4 )
    return (unsigned int)ResultFromKnownLastError();
  return v5;
}
