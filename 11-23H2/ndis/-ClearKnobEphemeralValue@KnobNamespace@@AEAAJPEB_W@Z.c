/*
 * XREFs of ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x1C013F620
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9A8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x1C013F918 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x1C014009C (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 */

__int64 __fastcall KnobNamespace::ClearKnobEphemeralValue(KnobNamespace *this, const wchar_t *a2)
{
  KnobNamespace *v4; // rcx
  unsigned int v5; // ebx
  struct KnobState *v6; // rbx
  KLockHolder v8; // [rsp+30h] [rbp-20h] BYREF
  struct KnobState *v9; // [rsp+70h] [rbp+20h] BYREF
  struct KnobDescriptor *v10; // [rsp+80h] [rbp+30h] BYREF
  struct KnobCollection *v11; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8.m_State = Unlocked;
  v8.m_Lock = &this->m_lock;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  if ( KnobNamespace::FindKnobByName(this, a2, &v11, (const struct KnobDescriptor **)&v10, &v9) )
  {
    v6 = v9;
    KnobNamespace::UpdateSingleKnob(v4, v11, v10, v9);
    v5 = *((_DWORD *)v6 + 2);
  }
  else
  {
    v5 = -1073741772;
  }
  KLockHolder::~KLockHolder(&v8);
  return v5;
}
