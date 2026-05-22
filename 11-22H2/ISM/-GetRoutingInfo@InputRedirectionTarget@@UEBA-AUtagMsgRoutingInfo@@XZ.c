/*
 * XREFs of ?GetRoutingInfo@InputRedirectionTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x180031500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionTarget::GetRoutingInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int64 v4; // xmm0_8

  result = a2;
  v3 = *(_OWORD *)(a1 + 80);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 16) = v3;
  *(_QWORD *)(a2 + 32) = v4;
  return result;
}
