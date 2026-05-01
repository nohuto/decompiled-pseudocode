/*
 * XREFs of sub_180014410 @ 0x180014410
 * Callers:
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 * Callees:
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 *     sub_1800166CC @ 0x1800166CC (sub_1800166CC.c)
 */

__int64 __fastcall sub_180014410(__int64 a1, unsigned int a2, void *a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // edi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockShared(a1 + 16);
  v9 = sub_1800166CC(a1, a2);
  v10 = v9;
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(a1 + 16);
  v13 = v10;
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 56) == a4 )
    {
      v11 = 0;
      *a5 = v10;
      return (unsigned int)v11;
    }
    v11 = -1073741583;
  }
  else
  {
    v11 = sub_1800128FC(a1, a2, a3, a4, &v13);
    if ( v11 < 0 )
    {
      v10 = v13;
    }
    else
    {
      v10 = 0LL;
      v11 = 0;
      *a5 = v13;
    }
  }
  if ( v10 )
    sub_180016348(v10);
  return (unsigned int)v11;
}
