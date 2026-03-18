/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C039F250
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A8530 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r8
  DMMVIDPNSOURCEMODESET *v16; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v4 == -1 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  v8 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v4);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, v4);
    return 3223192324LL;
  }
  v16 = 0LL;
  v11 = *(_QWORD *)(v8 + 104);
  if ( !v11 )
  {
    v12 = 0LL;
LABEL_12:
    WdLogSingleEntry0(1LL);
    goto LABEL_13;
  }
  _InterlockedAdd((volatile signed __int32 *)(v11 + 96), 1u);
  v12 = *(_QWORD *)(v9 + 104);
  if ( !v12 )
    goto LABEL_12;
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v16, v12);
  v13 = DMMVIDPNSOURCEMODESET::Serialize(v16);
  v14 = v13;
  if ( v13 >= 0 )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      v15 = *(_QWORD *)(a1 + 8);
    }
    WdLogSingleEntry3(2LL, v4, *(_QWORD *)(v15 + 16), v14);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v16, 0LL);
  return (unsigned int)v14;
}
