/*
 * XREFs of ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801CFF04
 * Callers:
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1801D08FC (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801D00C4 (--$_Uninitialized_move@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocat.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1801D071C (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ?_Change_array@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAXQEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@2@_K1@Z @ 0x1801D0E80 (-_Change_array@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator.c)
 */

char *__fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        const struct InfoMetadata::InputInfoMetadata *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // rdi
  char *v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]

  v6 = (a2 - *a1) / 392;
  v7 = (a1[1] - *a1) / 392;
  if ( v7 == 0xA72F05397829CBLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 392;
  v10 = v9 >> 1;
  if ( v9 <= 0xA72F05397829CBLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v20 = v11;
    if ( v11 > 0xA72F05397829CBLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0xA72F05397829CBLL;
    v20 = 0xA72F05397829CBLL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(392 * v11);
  v13 = &v12[392 * v6];
  v18 = (__int64)(v13 + 392);
  try
  {
    *(_DWORD *)v13 = *a3;
    InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v13 + 8), a4);
    v19 = (__int64)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        v16,
        a2,
        v12);
      v19 = (__int64)v12;
      v15 = v13 + 392;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
      v16,
      v14,
      v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(v19, v18);
    std::_Deallocate<16,0>(v12, 392 * v20);
    throw;
  }
  std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Change_array(a1, v12, v8, v11, v18, v12);
  return v13;
}
