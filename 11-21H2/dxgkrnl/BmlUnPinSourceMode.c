/*
 * XREFs of BmlUnPinSourceMode @ 0x1C03AB82C
 * Callers:
 *     BmlFunctionalizePath @ 0x1C01BD8FC (BmlFunctionalizePath.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C03AB580 (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned int v9; // r14d
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // zf
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, v3);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)&a1[120 * v3 + 16];
    v8 = *(unsigned int *)(v7 + 28);
    v9 = *(_DWORD *)(v7 + 24);
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), v9, *(_DWORD *)(v7 + 28));
    v11 = Path;
    if ( Path )
    {
      v12 = *((_QWORD *)Path + 11);
      v13 = *(_QWORD *)(a2 + 48);
      v14 = *(_QWORD *)(v12 + 104);
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
        v15 = *(_QWORD *)(v12 + 104);
      }
      else
      {
        v15 = 0LL;
      }
      v16 = *(_QWORD *)(v15 + 144) == 0LL;
      v20 = v15;
      if ( v16
        || (v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13 + 496) + 48LL),
            v18 = v15 & -(__int64)(v15 != -137),
            LOBYTE(v15) = 1,
            v19 = v17(v18, v15),
            v19 >= 0) )
      {
        v19 = 0;
      }
      else
      {
        WdLogSingleEntry4(
          3LL,
          v11,
          a2,
          *(unsigned int *)(*((_QWORD *)v11 + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)v11 + 12) + 24LL));
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v20, 0LL);
      return (unsigned int)v19;
    }
    else
    {
      WdLogSingleEntry4(3LL, v3, a2, v9, v8);
      return 3223192345LL;
    }
  }
  return result;
}
