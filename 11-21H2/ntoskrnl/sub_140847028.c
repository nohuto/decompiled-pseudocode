/*
 * XREFs of sub_140847028 @ 0x140847028
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14024BA3C @ 0x14024BA3C (sub_14024BA3C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 *     sub_14069C104 @ 0x14069C104 (sub_14069C104.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 */

NTSTATUS __fastcall sub_140847028(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  int v9; // ebx
  PVOID v10; // rdi
  _QWORD *v11; // rax
  signed __int64 v12; // rcx
  char v13[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID v14; // [rsp+48h] [rbp-28h] BYREF
  PVOID v15; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-18h] BYREF

  v13[0] = 0;
  v14 = 0LL;
  v15 = 0LL;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v15, 0LL);
  if ( result >= 0 )
  {
    v8 = v15;
    v9 = sub_140695160((__int64)v15, v13);
    if ( v9 >= 0 )
    {
      if ( v13[0] || sub_1406E856C(stru_140D3CB50, a3, 512, a2) )
      {
        v9 = sub_140732D40(a3, 512, (__int64)PsProcessType, a2, 0x65537350u, &v14, 0LL, 0LL);
        if ( v9 >= 0 )
        {
          v10 = v14;
          Object[0] = 0LL;
          if ( _bittest((const signed __int32 *)v14 + 280, 0xFu) )
          {
            v9 = -1073741637;
          }
          else
          {
            --*(_WORD *)(a1 + 484);
            ExAcquirePushLockSharedEx((ULONG_PTR)v10 + 1080, 0LL);
            if ( _bittest((const signed __int32 *)v10 + 280, 0xFu) )
            {
              v9 = -1073741637;
            }
            else
            {
              v9 = sub_140847260(v10, v8, Object);
              if ( v9 >= 0 )
              {
                v11 = v14;
                v12 = _InterlockedIncrement64(&qword_140C0BAF8);
                *((_QWORD *)v14 + 316) = v12;
                v11[317] = v12;
              }
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 135, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v10 + 135);
            sub_1402AFC00((ULONG_PTR)v10 + 1080);
            sub_1402AC800(a1);
            v10 = v14;
            if ( v9 >= 0 )
            {
              sub_14024BA3C((__int64)v14, a1);
              ObfDereferenceObject(Object[0]);
              sub_14069C104((__int64)v10);
            }
            v8 = v15;
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        v9 = -1073741727;
      }
    }
    ObfDereferenceObject(v8);
    return v9;
  }
  return result;
}
