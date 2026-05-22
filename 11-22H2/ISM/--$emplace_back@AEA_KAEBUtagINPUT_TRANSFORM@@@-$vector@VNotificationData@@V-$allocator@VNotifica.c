/*
 * XREFs of ??$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA?A_TAEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180009F54
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x180009C70 (NotifyInputSinkTransformChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<NotificationData>::emplace_back<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)(a1 + 16) )
    return std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
             a1,
             v4,
             a2,
             a3);
  *(_QWORD *)(v4 + 8) = *a2;
  *(_DWORD *)v4 = 2;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_OWORD *)(v4 + 32) = *a3;
  *(_OWORD *)(v4 + 48) = a3[1];
  *(_OWORD *)(v4 + 64) = a3[2];
  *(_OWORD *)(v4 + 80) = a3[3];
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 96;
  return result;
}
