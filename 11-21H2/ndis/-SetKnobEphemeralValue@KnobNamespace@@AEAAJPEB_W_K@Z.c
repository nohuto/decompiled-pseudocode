/*
 * XREFs of ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C0134114
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C0133CF4 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C00310D4 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0113A50 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0113C08 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x1C0133C64 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 */

__int64 __fastcall KnobNamespace::SetKnobEphemeralValue(KnobNamespace *this, const wchar_t *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  KnobDescriptor *v6; // rdi
  struct KnobState *v7; // rbx
  __int64 CurrentValue; // rax
  KnobDescriptor *v10; // [rsp+30h] [rbp-20h] BYREF
  KLockHolder v11; // [rsp+38h] [rbp-18h] BYREF
  struct KnobState *v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  KnobCollection *v14; // [rsp+88h] [rbp+38h] BYREF

  v13 = a3;
  v14 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v11.m_State = Unlocked;
  v11.m_Lock = &this->m_lock;
  v11.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v11);
  if ( KnobNamespace::FindKnobByName(this, a2, (_LIST_ENTRY ***)&v14, (const struct KnobDescriptor **)&v10, &v12) )
  {
    v6 = v10;
    v5 = KnobCollection::ValidateKnobValue(v14, &v13, v10);
    if ( v5 )
    {
      *((_DWORD *)v12 + 2) = v5;
    }
    else
    {
      v7 = v12;
      *(_QWORD *)v12 = v13;
      *((_DWORD *)v7 + 4) = 4;
      CurrentValue = KnobDescriptor::GetCurrentValue(v6);
      KnobCollection::CommitSingleKnob(v14, v6, v7, CurrentValue, 0);
      v5 = *((_DWORD *)v7 + 2);
    }
  }
  else
  {
    v5 = -1073741772;
  }
  KLockHolder::~KLockHolder(&v11);
  return v5;
}
