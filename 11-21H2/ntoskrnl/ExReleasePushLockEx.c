/*
 * XREFs of ExReleasePushLockEx @ 0x1402AD0A0
 * Callers:
 *     sub_140242F10 @ 0x140242F10 (sub_140242F10.c)
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140257E3C @ 0x140257E3C (sub_140257E3C.c)
 *     sub_140282C5C @ 0x140282C5C (sub_140282C5C.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_14028D948 @ 0x14028D948 (sub_14028D948.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1402F5D4C @ 0x1402F5D4C (sub_1402F5D4C.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     CcGetNumberOfMappedPages @ 0x1403A0A10 (CcGetNumberOfMappedPages.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 *     sub_1403C7A8C @ 0x1403C7A8C (sub_1403C7A8C.c)
 *     sub_1403D87A8 @ 0x1403D87A8 (sub_1403D87A8.c)
 *     sub_14053E700 @ 0x14053E700 (sub_14053E700.c)
 *     FsRtlRemovePerStreamContext @ 0x1405418D0 (FsRtlRemovePerStreamContext.c)
 *     sub_140562004 @ 0x140562004 (sub_140562004.c)
 *     sub_1405CBFFC @ 0x1405CBFFC (sub_1405CBFFC.c)
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_14067EC64 @ 0x14067EC64 (sub_14067EC64.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_140691330 @ 0x140691330 (sub_140691330.c)
 *     sub_140691444 @ 0x140691444 (sub_140691444.c)
 *     sub_1406930B0 @ 0x1406930B0 (sub_1406930B0.c)
 *     sub_1406930D4 @ 0x1406930D4 (sub_1406930D4.c)
 *     sub_14069BF4C @ 0x14069BF4C (sub_14069BF4C.c)
 *     sub_14069D254 @ 0x14069D254 (sub_14069D254.c)
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_1406A5F34 @ 0x1406A5F34 (sub_1406A5F34.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406B94DC @ 0x1406B94DC (sub_1406B94DC.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_1406BF4AC @ 0x1406BF4AC (sub_1406BF4AC.c)
 *     sub_1406C0720 @ 0x1406C0720 (sub_1406C0720.c)
 *     sub_1406C08F0 @ 0x1406C08F0 (sub_1406C08F0.c)
 *     sub_1406C1234 @ 0x1406C1234 (sub_1406C1234.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_1406D3020 @ 0x1406D3020 (sub_1406D3020.c)
 *     sub_1406D5E5C @ 0x1406D5E5C (sub_1406D5E5C.c)
 *     sub_1406D6D50 @ 0x1406D6D50 (sub_1406D6D50.c)
 *     sub_1406D708C @ 0x1406D708C (sub_1406D708C.c)
 *     sub_1406D9E90 @ 0x1406D9E90 (sub_1406D9E90.c)
 *     sub_1406D9F40 @ 0x1406D9F40 (sub_1406D9F40.c)
 *     sub_1406D9FC8 @ 0x1406D9FC8 (sub_1406D9FC8.c)
 *     sub_1406DEFDC @ 0x1406DEFDC (sub_1406DEFDC.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     sub_1406E4980 @ 0x1406E4980 (sub_1406E4980.c)
 *     sub_1406E6B08 @ 0x1406E6B08 (sub_1406E6B08.c)
 *     sub_1406E717C @ 0x1406E717C (sub_1406E717C.c)
 *     sub_1406E80C4 @ 0x1406E80C4 (sub_1406E80C4.c)
 *     NtMakePermanentObject @ 0x1406EA8F0 (NtMakePermanentObject.c)
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 *     sub_1406EC954 @ 0x1406EC954 (sub_1406EC954.c)
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071B8C0 @ 0x14071B8C0 (sub_14071B8C0.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_140735E30 @ 0x140735E30 (sub_140735E30.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076A134 @ 0x14076A134 (sub_14076A134.c)
 *     sub_1407735A0 @ 0x1407735A0 (sub_1407735A0.c)
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779800 @ 0x140779800 (sub_140779800.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077A8E0 @ 0x14077A8E0 (sub_14077A8E0.c)
 *     sub_14077AD94 @ 0x14077AD94 (sub_14077AD94.c)
 *     sub_14077B3D4 @ 0x14077B3D4 (sub_14077B3D4.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_14078EF08 @ 0x14078EF08 (sub_14078EF08.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140790EEC @ 0x140790EEC (sub_140790EEC.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 *     sub_140797468 @ 0x140797468 (sub_140797468.c)
 *     sub_14079A984 @ 0x14079A984 (sub_14079A984.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     sub_1407B0FE0 @ 0x1407B0FE0 (sub_1407B0FE0.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 *     sub_1407BC580 @ 0x1407BC580 (sub_1407BC580.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C3E50 @ 0x1407C3E50 (sub_1407C3E50.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 *     sub_1407F02A8 @ 0x1407F02A8 (sub_1407F02A8.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 *     sub_1407F85CC @ 0x1407F85CC (sub_1407F85CC.c)
 *     sub_1407FAD60 @ 0x1407FAD60 (sub_1407FAD60.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_14080FCA4 @ 0x14080FCA4 (sub_14080FCA4.c)
 *     sub_140814FBC @ 0x140814FBC (sub_140814FBC.c)
 *     sub_1408150FC @ 0x1408150FC (sub_1408150FC.c)
 *     sub_1408153C8 @ 0x1408153C8 (sub_1408153C8.c)
 *     sub_140815DC8 @ 0x140815DC8 (sub_140815DC8.c)
 *     sub_140815F0C @ 0x140815F0C (sub_140815F0C.c)
 *     sub_140816040 @ 0x140816040 (sub_140816040.c)
 *     sub_140816190 @ 0x140816190 (sub_140816190.c)
 *     sub_14081CB98 @ 0x14081CB98 (sub_14081CB98.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14083F51C @ 0x14083F51C (sub_14083F51C.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 *     sub_14085B02C @ 0x14085B02C (sub_14085B02C.c)
 *     sub_140861E8C @ 0x140861E8C (sub_140861E8C.c)
 *     sub_140865450 @ 0x140865450 (sub_140865450.c)
 *     sub_140881DF2 @ 0x140881DF2 (sub_140881DF2.c)
 *     sub_140883164 @ 0x140883164 (sub_140883164.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140910120 (CmUnregisterMachineHiveLoadedNotification.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_14091C9E8 @ 0x14091C9E8 (sub_14091C9E8.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140937460 (IoUnregisterContainerNotification.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 *     sub_140948FB8 @ 0x140948FB8 (sub_140948FB8.c)
 *     sub_140949104 @ 0x140949104 (sub_140949104.c)
 *     sub_14094A6E4 @ 0x14094A6E4 (sub_14094A6E4.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 *     sub_1409843A0 @ 0x1409843A0 (sub_1409843A0.c)
 *     sub_140984460 @ 0x140984460 (sub_140984460.c)
 *     sub_14098501C @ 0x14098501C (sub_14098501C.c)
 *     ObUnRegisterCallbacks @ 0x140985310 (ObUnRegisterCallbacks.c)
 *     sub_14098D024 @ 0x14098D024 (sub_14098D024.c)
 *     PsRegisterAltSystemCallHandler @ 0x1409B2180 (PsRegisterAltSystemCallHandler.c)
 *     sub_1409DA758 @ 0x1409DA758 (sub_1409DA758.c)
 *     sub_1409DAACC @ 0x1409DAACC (sub_1409DAACC.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 *     sub_1409EB970 @ 0x1409EB970 (sub_1409EB970.c)
 *     sub_1409EBA3C @ 0x1409EBA3C (sub_1409EBA3C.c)
 *     sub_1409EBB58 @ 0x1409EBB58 (sub_1409EBB58.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 *     sub_1409F5570 @ 0x1409F5570 (sub_1409F5570.c)
 *     sub_140A48C5C @ 0x140A48C5C (sub_140A48C5C.c)
 *     sub_140A6C7A8 @ 0x140A6C7A8 (sub_140A6C7A8.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 *     sub_140AB48B4 @ 0x140AB48B4 (sub_140AB48B4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // rdx
  int v12; // r9d

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != result) )
  {
    result = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      v9 = (unsigned int)sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v9 = 0xFFFFFFFFLL;
    _disable();
    v10 = (char *)CurrentThread + 1696;
    v11 = 0LL;
    do
    {
      if ( (*(_QWORD *)v10 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v10[18]
        && (*(_DWORD *)v10 & 1) == 0
        && *((_DWORD *)v10 + 2) == (_DWORD)v9 )
      {
        v10[18] = 0;
        if ( *(__int64 *)v10 < 0 )
        {
          *v10 |= 2u;
          _enable();
          sub_14034EE30(v10, v11, v9);
          _disable();
        }
        v12 = *((_DWORD *)v10 + 22);
        *((_DWORD *)v10 + 22) = 0;
        v10[17] = 0;
        *(_QWORD *)v10 = 0LL;
        result = (unsigned __int8)v10[16];
        *((_BYTE *)CurrentThread + 792) |= 1 << result;
        _enable();
        if ( v12 )
          return sub_14022B568((ULONG_PTR)CurrentThread, BugCheckParameter2, v12);
        return result;
      }
      v11 = (unsigned int)(v11 + 1);
      v10 += 96;
    }
    while ( (unsigned int)v11 < 6 );
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)v9, 0LL);
    _enable();
  }
  return result;
}
