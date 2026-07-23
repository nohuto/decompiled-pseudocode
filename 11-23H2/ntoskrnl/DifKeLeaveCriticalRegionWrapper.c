/*
 * XREFs of DifKeLeaveCriticalRegionWrapper @ 0x1405E4310
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x1404668BE (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8E34 (DifGetReturnAddressForWrappers.c)
 */

_QWORD *DifKeLeaveCriticalRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  int v6; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  _QWORD *result; // rax
  _QWORD *v10; // rdi
  _QWORD *j; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(273);
  v5 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v2 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v13 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v6 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v2, v1, v3, v4);
      goto LABEL_9;
    }
  }
  v13 = 0LL;
LABEL_10:
  for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int64 *))*(i - 1))(&v13);
  }
LABEL_17:
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v10 = v5 + 6;
    for ( j = (_QWORD *)v5[6]; j != v10; j = (_QWORD *)*j )
    {
      result = j - 2;
      if ( j != (_QWORD *)16 )
        result = (_QWORD *)((__int64 (__fastcall *)(__int64 *))result[1])(&v13);
    }
  }
  return result;
}
