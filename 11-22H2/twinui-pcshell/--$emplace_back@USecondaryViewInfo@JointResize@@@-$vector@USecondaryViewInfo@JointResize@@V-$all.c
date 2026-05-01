/*
 * XREFs of ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA?A_T$$QEAUSecondaryViewInfo@JointResize@@@Z @ 0x1805E0FE0
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1805E1DA8 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
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
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v3 + 64) = *(_DWORD *)(a2 + 64);
  *(_QWORD *)(v3 + 68) = *(_QWORD *)(a2 + 68);
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(v3 + 80) = *(_OWORD *)(a2 + 80);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 96);
  return result;
}
