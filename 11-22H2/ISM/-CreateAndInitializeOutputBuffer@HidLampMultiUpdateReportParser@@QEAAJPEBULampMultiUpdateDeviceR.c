/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180104A90
 * Callers:
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180101868 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F0928 (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x1801052AC (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x1801052DC (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x18010530C (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        __int64 a2,
        void **a3,
        _DWORD *a4)
{
  void *v7; // rax
  unsigned __int8 *v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int inserted; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  int v14; // ebp
  __int64 v15; // rsi
  int v16; // r15d
  void *v17; // rcx
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v21; // [rsp+68h] [rbp+10h] BYREF
  void **v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  if ( !*(_QWORD *)(a2 + 8)
    || !*(_QWORD *)(a2 + 16) && *(_BYTE *)(a1 + 324)
    || !*(_QWORD *)(a2 + 24) && *(_BYTE *)(a1 + 325)
    || !*(_QWORD *)(a2 + 32) && *(_BYTE *)(a1 + 326)
    || !*(_QWORD *)(a2 + 40) && *(_BYTE *)(a1 + 327) )
  {
    v9 = -2147024809;
    v10 = 117LL;
    goto LABEL_40;
  }
  v7 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v21 = v7;
  v8 = (unsigned __int8 *)v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    v10 = 120LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)v9);
    return v9;
  }
  memset_0(v7, 0, *(unsigned int *)(a1 + 20));
  *v8 = *(_BYTE *)(a1 + 16);
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 24),
               *(_DWORD *)a2,
               *(unsigned int *)(a1 + 20),
               v8);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v13 = 127LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)inserted);
LABEL_38:
    operator delete[](v8);
    return v12;
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 96),
               *(_DWORD *)(a2 + 4),
               *(unsigned int *)(a1 + 20),
               v8);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v13 = 128LL;
    goto LABEL_16;
  }
  v14 = 0;
  if ( *(int *)a2 > 0 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = HidChannelValueInfo::InsertValue(
              (HidChannelValueInfo *)(*(_QWORD *)(a1 + 168) + 72LL * v14),
              *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v15),
              *(unsigned int *)(a1 + 20),
              v8);
      if ( v16 < 0 )
        break;
      if ( *(_BYTE *)(a1 + 324) )
      {
        v16 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 200) + 72LL * v14),
                *(_BYTE *)(v15 + *(_QWORD *)(a2 + 16)),
                *(unsigned int *)(a1 + 20),
                v8);
        if ( v16 < 0 )
        {
          v19 = 136LL;
          goto LABEL_37;
        }
      }
      if ( *(_BYTE *)(a1 + 325) )
      {
        v16 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 232) + 72LL * v14),
                *(_BYTE *)(v15 + *(_QWORD *)(a2 + 24)),
                *(unsigned int *)(a1 + 20),
                v8);
        if ( v16 < 0 )
        {
          v19 = 141LL;
          goto LABEL_37;
        }
      }
      if ( *(_BYTE *)(a1 + 326) )
      {
        v16 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 264) + 72LL * v14),
                *(_BYTE *)(v15 + *(_QWORD *)(a2 + 32)),
                *(unsigned int *)(a1 + 20),
                v8);
        if ( v16 < 0 )
        {
          v19 = 146LL;
          goto LABEL_37;
        }
      }
      if ( *(_BYTE *)(a1 + 327) )
      {
        v16 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 296) + 72LL * v14),
                *(_BYTE *)(v15 + *(_QWORD *)(a2 + 40)),
                *(unsigned int *)(a1 + 20),
                v8);
        if ( v16 < 0 )
        {
          v19 = 151LL;
          goto LABEL_37;
        }
      }
      ++v14;
      ++v15;
      if ( v14 >= *(_DWORD *)a2 )
        goto LABEL_29;
    }
    v19 = 132LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)v16);
    v12 = v16;
    goto LABEL_38;
  }
LABEL_29:
  std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(v22, &v21);
  v17 = v21;
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v17 )
    operator delete[](v17);
  return 0LL;
}
