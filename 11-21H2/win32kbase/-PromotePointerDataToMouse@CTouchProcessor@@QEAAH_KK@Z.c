/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C01D2F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ApiSetEditionPromotePointer @ 0x1C020AEBC (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, void *a2, unsigned int a3)
{
  struct _KTHREAD **v3; // r14
  CTouchProcessor *v6; // rcx
  __int64 v7; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  unsigned __int16 v14; // di
  unsigned int v15; // ebx
  PERESOURCE *v17[6]; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v18[6]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (struct _KTHREAD **)((char *)this + 32);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v18,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  MsgData = CTouchProcessor::GetMsgData(v6, (__int64)a2, v7);
  v11 = 0;
  if ( MsgData )
  {
    if ( a3 == 0x10000000 )
    {
      v12 = *((_DWORD *)MsgData + 9);
      if ( (v12 & 1) != 0 )
      {
        a3 = 0;
      }
      else if ( (v12 & 2) == 0 && (v12 & 4) == 0 )
      {
        goto LABEL_13;
      }
    }
    v13 = *((_DWORD *)MsgData + 9);
    if ( (v13 & 0x10) != 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        if ( !a3 )
          goto LABEL_12;
      }
      else if ( a3 )
      {
LABEL_12:
        v14 = *((_WORD *)MsgData + 8);
        v15 = *((_DWORD *)MsgData + 7);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v17, v3, a2);
        v11 = ApiSetEditionPromotePointer(v14, v15, a3);
        CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v17);
      }
    }
  }
LABEL_13:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v18, v9, v10);
  return v11;
}
