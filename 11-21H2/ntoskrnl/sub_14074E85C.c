/*
 * XREFs of sub_14074E85C @ 0x14074E85C
 * Callers:
 *     sub_14074E73C @ 0x14074E73C (sub_14074E73C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14074D458 @ 0x14074D458 (sub_14074D458.c)
 *     sub_14074EA08 @ 0x14074EA08 (sub_14074EA08.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AB750 @ 0x1407AB750 (sub_1407AB750.c)
 *     sub_14096799C @ 0x14096799C (sub_14096799C.c)
 */

__int64 __fastcall sub_14074E85C(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  _QWORD *v4; // r15
  __int64 result; // rax
  char v6; // r12
  volatile signed __int32 *v7; // rcx
  signed __int32 v8; // eax
  signed __int64 *v9; // rbx
  signed __int64 *v10; // rsi
  PVOID Object; // [rsp+60h] [rbp+40h] BYREF
  signed __int64 *v12; // [rsp+68h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD **)(v1 + 16);
  v12 = 0LL;
  Object = 0LL;
  result = sub_14074EA08(v1, &v12, &Object);
  if ( (int)result >= 0 )
  {
    if ( (v12[32] & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) |= 0x200u;
      v6 = 1;
      v7 = (volatile signed __int32 *)Object;
      *(_WORD *)(v2 + 244) &= ~0x2000u;
      v8 = _InterlockedExchangeAdd(v7 + 100, 1u);
      v9 = (signed __int64 *)Object;
      *(_DWORD *)(v2 + 44) = v8 + 1;
      *(_QWORD *)(v2 + 120) = v9[7];
      *(_QWORD *)(v2 + 184) = v4;
      *(_QWORD *)(v2 + 192) = *v4;
      if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
      {
        sub_1407AB750(v2, v9);
        v10 = v12;
      }
      else
      {
        sub_1407AB750(v2, v1);
        v10 = v12;
        if ( v9 != v12 )
        {
          if ( _InterlockedCompareExchange64(v9 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v9 + 44);
          sub_1402AFC00((ULONG_PTR)(v9 + 44));
          v10 = v12;
          v9 = (signed __int64 *)Object;
        }
        v6 = 0;
      }
      if ( byte_140D01161 )
        sub_14096799C(v2);
      a1[4] = (__int64)v10;
      a1[2] = (__int64)v4;
      sub_1407AACC0(a1);
      if ( v6 && v9 != v10 )
      {
        if ( _InterlockedCompareExchange64(v9 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v9 + 44);
        sub_1402AFC00((ULONG_PTR)(v9 + 44));
        v9 = (signed __int64 *)Object;
      }
      ObfDereferenceObject(v9);
      return 0LL;
    }
    else
    {
      sub_14074D458((__int64)v4, v12, (signed __int64 *)Object);
      return 3221227271LL;
    }
  }
  return result;
}
