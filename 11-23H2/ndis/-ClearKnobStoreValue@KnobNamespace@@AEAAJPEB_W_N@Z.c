/*
 * XREFs of ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x1C013F6B4
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9A8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ??1KnobTransaction@@QEAA@XZ @ 0x1C00BC0D4 (--1KnobTransaction@@QEAA@XZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x1C013F918 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x1C014009C (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 */

__int64 __fastcall KnobNamespace::ClearKnobStoreValue(KnobNamespace *this, const wchar_t *a2, char a3)
{
  unsigned int v6; // ebx
  struct KnobCollection *v7; // rdi
  KnobNamespace *v8; // rcx
  struct KnobState *v9; // rbx
  struct KnobState *v11; // [rsp+30h] [rbp-40h] BYREF
  KLockHolder v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  char v14; // [rsp+60h] [rbp-10h]
  struct KnobDescriptor *v15; // [rsp+90h] [rbp+20h] BYREF
  struct KnobCollection *v16; // [rsp+A8h] [rbp+38h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v12.m_State = Unlocked;
  v13 = 0LL;
  v12.m_Lock = &this->m_lock;
  v14 = 0;
  v12.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v12);
  if ( !KnobNamespace::FindKnobByName(this, a2, &v16, (const struct KnobDescriptor **)&v15, &v11) )
  {
    v6 = -1073741772;
LABEL_4:
    KLockHolder::~KLockHolder(&v12);
    KnobTransaction::~KnobTransaction((KnobTransaction *)&v13);
    return v6;
  }
  v7 = v16;
  v6 = (*(__int64 (__fastcall **)(struct KnobCollection *, struct KnobDescriptor *))(*(_QWORD *)v16 + 16LL))(v16, v15);
  if ( v6 )
    goto LABEL_4;
  v9 = v11;
  if ( a3 )
    KnobNamespace::UpdateSingleKnob(v8, v7, v15, v11);
  v6 = *((_DWORD *)v9 + 2);
  KLockHolder::~KLockHolder(&v12);
  return v6;
}
