/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140394080
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402378F8 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140237E3C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  PSLIST_ENTRY Context; // rax
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v12; // xmm1
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+40h] [rbp-29h]
  __int128 v15; // [rsp+50h] [rbp-19h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  _OWORD v17[3]; // [rsp+70h] [rbp+7h] BYREF

  v4 = 0;
  memset(v17, 0, sizeof(v17));
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v14 = 0LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 6584) )
  {
    KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0LL, (__int64)v17, a4);
    v4 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v8 = (__int64)Context;
    if ( Context )
    {
      v9 = *a2;
      BugCheckParameter3[0] = a1;
      v15 = v9;
      v10 = a2[1];
      BugCheckParameter3[1] = (ULONG_PTR)a2;
      *(_QWORD *)&v14 = Context;
      v16 = v10;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                  (ULONG_PTR)BugCheckParameter3,
                  0x2000,
                  0,
                  0LL) < 0 )
      {
        ST_STORE<SM_TRAITS>::StReleaseReadContext((union _SLIST_HEADER *)a1, v8);
        v4 = 3;
      }
      else if ( DWORD2(v14) )
      {
        v4 = 6;
      }
      else
      {
        v12 = v16;
        *a2 = v15;
        a2[1] = v12;
      }
    }
    KiUnstackDetachProcess((__int64)v17, 0LL);
  }
  return v4 >> 2;
}
