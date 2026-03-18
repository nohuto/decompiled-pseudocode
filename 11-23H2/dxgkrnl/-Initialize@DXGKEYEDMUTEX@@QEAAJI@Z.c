/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1C034FFC4
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C034F010 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00159D0 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this, int a2)
{
  int v3; // eax
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v7[8]; // [rsp+50h] [rbp-18h] BYREF
  char v8; // [rsp+58h] [rbp-10h]

  if ( a2 )
  {
    *((_DWORD *)this + 8) = a2;
    *((_BYTE *)this + 176) = 1;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 43) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v3 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v3;
  if ( v3 )
  {
    Current = DXGPROCESS::GetCurrent(v4);
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 8), Current);
    if ( v8 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    return 0LL;
  }
  WdLogSingleEntry2(6LL, this, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"KeyedMutex 0x%I64x: Unable to create keyed mutex handle, returning 0x%I64x",
    (__int64)this,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  if ( v8 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return 3221225495LL;
}
