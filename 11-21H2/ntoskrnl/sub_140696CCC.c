/*
 * XREFs of sub_140696CCC @ 0x140696CCC
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409C8CBC @ 0x1409C8CBC (sub_1409C8CBC.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140696CCC(__int64 a1, PVOID *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 Pool2; // rax
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0;
  v4 = sub_1407103B0(a1, 0, 0, (unsigned int)&v8, 0);
  v5 = v4;
  if ( v4 == -1073741820 || v4 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(256LL, v8, 1850697043LL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v5 = sub_1407103B0(a1, Pool2, v8, (unsigned int)&v8, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == PsProcessType )
        {
          sub_1407B66E0(a1, a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
