/*
 * XREFs of ?GetLayoutEnv@CAppLayout@@UEAAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180795730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayout::GetLayoutEnv(CAppLayout *this, struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 16);
  AcquireSRWLockShared((PSRWLOCK)this + 2);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 40);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 7);
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
