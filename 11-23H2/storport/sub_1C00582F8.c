/*
 * XREFs of sub_1C00582F8 @ 0x1C00582F8
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0046480 (StorPortGetDeviceBase.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C00582F8(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax

  v10 = sub_1C0007CF4(64LL, 40LL, 1296130386LL, a6);
  v11 = v10;
  if ( !v10 )
    return 3221225495LL;
  *(_QWORD *)v10 = *a1;
  *a1 = v10;
  *(_DWORD *)(v10 + 32) = a5;
  result = 0LL;
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 16) = a4;
  return result;
}
