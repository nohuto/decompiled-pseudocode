/*
 * XREFs of EmClientRuleEvaluate @ 0x140A47E30
 * Callers:
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_140B30E08 @ 0x140B30E08 (sub_140B30E08.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402DC420 @ 0x1402DC420 (sub_1402DC420.c)
 *     sub_1402DCBD4 @ 0x1402DCBD4 (sub_1402DCBD4.c)
 *     sub_1402DCBFC @ 0x1402DCBFC (sub_1402DCBFC.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140A47F30 @ 0x140A47F30 (sub_140A47F30.c)
 *     sub_140A47FAC @ 0x140A47FAC (sub_140A47FAC.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)sub_140A47FAC() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C70, 0LL);
      v9 = sub_1402DCBFC(a1);
      if ( v9 && (v10 = sub_1402DCBD4((__int64)v9)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v11 + 48) )
          *a4 = sub_1402DC420((__int64)v10, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C48C70);
      sub_1402AFC00((ULONG_PTR)&qword_140C48C70);
      sub_140A47F30();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
