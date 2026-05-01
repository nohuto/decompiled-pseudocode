/*
 * XREFs of ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAAEAUSecondaryViewInfo@JointResize@@$$QEAU23@@Z @ 0x180527AFC
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x180528084 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(
             a1,
             v3,
             (__int64 *)a2);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)v3 = v4;
  *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(v3 + 24) = *(_OWORD *)(a2 + 24);
  *(_BYTE *)(v3 + 40) = *(_BYTE *)(a2 + 40);
  *(_QWORD *)(v3 + 44) = *(_QWORD *)(a2 + 44);
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v3 + 64) = *(_DWORD *)(a2 + 64);
  *(_OWORD *)(v3 + 68) = *(_OWORD *)(a2 + 68);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 88);
  return result;
}
