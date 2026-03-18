/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01CC070
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1C015A570 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(CTouchProcessor *this, unsigned __int16 a2, struct _GUID *a3)
{
  CTouchProcessor *v3; // rbx
  struct CInputPointerNode *NodeById; // rax
  char v7; // bl
  PERESOURCE *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = gpTouchProcessor;
  *a3 = 0LL;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v9, (CTouchProcessor *)((char *)v3 + 32), 0);
  NodeById = CTouchProcessor::FindNodeById(v3, a2, 0, 0);
  v7 = 0;
  if ( NodeById
    && (*((_QWORD *)NodeById + 5) != *(_QWORD *)&a3->Data1 || *((_QWORD *)NodeById + 6) != *(_QWORD *)a3->Data4) )
  {
    v7 = 1;
    *a3 = *(struct _GUID *)((char *)NodeById + 40);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v9);
  return v7;
}
