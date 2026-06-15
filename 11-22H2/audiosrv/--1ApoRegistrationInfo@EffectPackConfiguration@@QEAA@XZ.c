/*
 * XREFs of ??1ApoRegistrationInfo@EffectPackConfiguration@@QEAA@XZ @ 0x180005450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPackConfiguration::ApoRegistrationInfo::~ApoRegistrationInfo(
        EffectPackConfiguration::ApoRegistrationInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v3 )
    CoTaskMemFree(v3);
}
