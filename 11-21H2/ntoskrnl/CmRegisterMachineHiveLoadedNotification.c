/*
 * XREFs of CmRegisterMachineHiveLoadedNotification @ 0x1408335F0
 * Callers:
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1403C7B20 @ 0x1403C7B20 (sub_1403C7B20.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140833748 @ 0x140833748 (sub_140833748.c)
 *     sub_140833A64 @ 0x140833A64 (sub_140833A64.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmRegisterMachineHiveLoadedNotification(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  char *Pool2; // rax
  char *v9; // rdi
  wchar_t ***v10; // rcx

  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  result = sub_140833A64(a3);
  if ( (int)result >= 0 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 112LL, 842616131LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x70uLL);
      *((_QWORD *)v9 + 10) = a1;
      *((_DWORD *)v9 + 26) = 0;
      *((_QWORD *)v9 + 11) = a2;
      sub_140833748(v9 + 16, 1LL, sub_140861F60, v9);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&off_140C02530[17], 0LL);
      if ( HIDWORD(off_140C02530[14]) == 1 )
      {
        sub_1403C7B20((PWORK_QUEUE_ITEM)(v9 + 16));
      }
      else
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&off_140C02530[18], 0LL);
        v10 = (wchar_t ***)off_140C02530[20];
        if ( *v10 != &off_140C02530[19] )
          __fastfail(3u);
        *((_QWORD *)v9 + 1) = v10;
        *(_QWORD *)v9 = &off_140C02530[19];
        *v10 = (wchar_t **)v9;
        off_140C02530[20] = (wchar_t *)v9;
        v9[109] = 1;
        ExReleasePushLockEx((ULONG_PTR)&off_140C02530[18], 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)&off_140C02530[17], 0LL);
      result = 0LL;
      *a4 = v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
