/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A4A30
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A4870 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A4834 (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z @ 0x1801A4D0C (--0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z.c)
 */

_DWORD *__fastcall std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v3; // rbx
  _DWORD *v5; // rdi
  signed __int64 v6; // rsi
  signed __int64 v7; // rbp

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - (char *)a3;
    v7 = (char *)a3 - (char *)a1;
    do
    {
      *v3 = *v5;
      InfoMetadata::InputInfoMetadata::InputInfoMetadata((char *)v5 + v7 + 8, (char *)v5 + v7 + v6 + 8);
      v3 += 98;
      v5 += 98;
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
    (__int64)v3,
    (__int64)v3);
  return v3;
}
