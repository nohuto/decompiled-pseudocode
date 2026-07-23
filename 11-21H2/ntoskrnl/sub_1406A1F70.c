/*
 * XREFs of sub_1406A1F70 @ 0x1406A1F70
 * Callers:
 *     sub_1406A1EE0 @ 0x1406A1EE0 (sub_1406A1EE0.c)
 *     sub_1406A1F30 @ 0x1406A1F30 (sub_1406A1F30.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1406A1F70(void *a1, void *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v10; // r15
  KPROCESSOR_MODE v11; // bp
  char v12; // r14
  NTSTATUS result; // eax
  PVOID v14; // rsi
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 (__fastcall *v19)(); // r9
  void (__stdcall *v20)(PVOID, ULONG); // rbp
  char *PoolWithQuotaTag; // rbx
  __int64 v22; // rdx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v24; // [rsp+48h] [rbp-20h] BYREF

  v10 = 1;
  v11 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (a3 & 0xFFFEFFFE) == 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v12 = 0;
LABEL_6:
      Object = 0LL;
      result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, v11, &Object, 0LL);
      if ( result < 0 )
        return result;
      v14 = Object;
      if ( (*((_DWORD *)Object + 29) & 0x400) != 0
        || (v14 = Object, v16 = *((_QWORD *)KeGetCurrentThread() + 23), *(_QWORD *)(v16 + 1408))
        && ((v17 = *(_WORD *)(v16 + 2412), v17 == 332) || v17 == 452)
        && ((v18 = *((_QWORD *)Object + 68), !*(_QWORD *)(v18 + 1408)) || *(_WORD *)(v18 + 2412) == 0x8664)
        && (unsigned __int64)-(a4 >> 2) <= 0xFFFFFFFF )
      {
        v15 = -1073741816;
      }
      else
      {
        if ( !a2 )
        {
          PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
          if ( !PoolWithQuotaTag )
          {
            v15 = -1073741801;
            goto LABEL_29;
          }
          v19 = (__int64 (__fastcall *)())sub_140962BA0;
          v10 = v12 ^ 1;
          v20 = ExFreePoolWithTag;
          if ( !v12 )
            v19 = (__int64 (__fastcall *)())sub_1406D9550;
          goto LABEL_24;
        }
        v24 = 0LL;
        v15 = ObReferenceObjectByHandle(a2, 2u, qword_140D07020, v11, &v24, 0LL);
        if ( v15 >= 0 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v24, 1, 0) )
          {
            ObfDereferenceObject(v24);
            v14 = Object;
            v15 = -1073741584;
            goto LABEL_29;
          }
          v19 = sub_1406EAA90;
          v14 = Object;
          v20 = (void (__stdcall *)(PVOID, ULONG))sub_1406EAA90;
          PoolWithQuotaTag = (char *)v24 + 8;
LABEL_24:
          KeInitializeApc((__int64)PoolWithQuotaTag, (__int64)v14, 0, (__int64)v19, (__int64)v20, a4, v10, a5);
          if ( (a3 & 0x10000) != 0 )
            PoolWithQuotaTag[1] |= 1u;
          if ( KeInsertQueueApc((__int64)PoolWithQuotaTag, a6, a7, 0) )
          {
            v15 = 0;
          }
          else
          {
            sub_14042A5E0(PoolWithQuotaTag, v22);
            v15 = -1073741823;
          }
        }
      }
LABEL_29:
      ObfDereferenceObject(v14);
      return v15;
    }
    if ( !a2 )
    {
      v12 = 1;
      goto LABEL_6;
    }
  }
  return -1073741811;
}
