/*
 * XREFs of ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C013FDC8
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9A8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C002BA60 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0119F80 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120204 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x1C013F918 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 */

__int64 __fastcall KnobNamespace::SetKnobEphemeralValue(KnobNamespace *this, const wchar_t *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  KnobDescriptor *v6; // rdi
  unsigned int v7; // eax
  struct KnobState *v8; // rbx
  __int64 CurrentValue; // rax
  KnobDescriptor *v11; // [rsp+30h] [rbp-20h] BYREF
  KLockHolder v12; // [rsp+38h] [rbp-18h] BYREF
  struct KnobState *v13; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  KnobCollection *v15; // [rsp+88h] [rbp+38h] BYREF

  v14 = a3;
  v15 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v12.m_State = Unlocked;
  v12.m_Lock = &this->m_lock;
  v12.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v12);
  if ( KnobNamespace::FindKnobByName(this, a2, (_LIST_ENTRY ***)&v15, (const struct KnobDescriptor **)&v11, &v13) )
  {
    v6 = v11;
    v7 = KnobCollection::ValidateKnobValue(v15, &v14, v11);
    v5 = v7;
    if ( v7 )
    {
      *((_DWORD *)v13 + 2) = v7;
    }
    else
    {
      v8 = v13;
      *(_QWORD *)v13 = v14;
      *((_DWORD *)v8 + 4) = 4;
      CurrentValue = KnobDescriptor::GetCurrentValue(v6);
      KnobCollection::CommitSingleKnob(v15, v6, v8, CurrentValue, 0);
      v5 = *((_DWORD *)v8 + 2);
    }
  }
  else
  {
    v5 = -1073741772;
  }
  KLockHolder::~KLockHolder(&v12);
  return v5;
}
